#include <linux/module.h>
#include <linux/miscdevice.h>
#include <linux/fs.h>
#include <linux/uaccess.h>

	#include <linux/init.h>
	#include <linux/kernel.h> /* printk() */
	#include <linux/slab.h> /* kmalloc() */
	#include <linux/errno.h> /* error codes */
	#include <linux/types.h> /* size_t */
	#include <linux/proc_fs.h>
	#include <linux/fcntl.h> /* O_ACCMODE */
	#include <asm/system.h> /* cli(), *_flags */
	#include <asm/uaccess.h> /* copy_from/to_user */
	#include <linux/ioport.h> /* request_region */
	#include <asm/io.h> /* ioremap */
	#include <linux/ioctl.h> /* .ioctl fops */
	#include <linux/delay.h>  // ჩემი შემოტანილი დაძინების ბიბლოთეკა

 

/////////////////////////////////////////////////////
//
	//#include "gpio.h"
	#include "Dach_Beaglebone_Gpio.h"
	#define DEVICE_NAME "gpio"

	#define Pos_PIN1	(1 << Pos_GPIO1_23)
	#define Pos_PIN3	(1 << Pos_GPIO1_24)
	#define Pos_PIN2	(1 << Pos_GPIO1_6 )

	#define GPIO_Clear	*((volatile unsigned int *)gpioClearAddr)
	#define GPIO_SET	*((volatile unsigned int *)gpioSetAddr)
	#define GPIO_DDR	*((volatile unsigned int *)directionAddr)

	static void *gpioSetAddr;
	static void *gpioClearAddr;
	static void *directionAddr;
	static void *GPIO1_baseAddress;
//
/////////////////////////////////////////////////////


//########################################################
//# გლობალური ცვლადები sudo cat /dev/
//########################################################
#define DRVNAME "FPGA_Prog >> "
#define INF(fmt, ...)	printk(KERN_INFO "%s" fmt " \n", DRVNAME, ##__VA_ARGS__)

#define Miscdev_FileName	"111"	// miscdevice - ფაილის სახელი 
char buff[3] ;				// იფორმაციის დაბრუნების ბუფერი
char *buff_pointer;			// იფორმაციის დაბრუნების ბუფერის მიმთითებელი

//########################################################
//# დრივერის ფაილიდან წაკიტხვა
//########################################################
static ssize_t MiscDev_read(struct file *filp, char *buffer, size_t length, loff_t * offset)
{
	int bytes_read = 0;			// Number of bytes actually written to the buffer 
	if (*buff_pointer == 0){ return 0; }	// If we're at the end of the message, return 0 signifying end of file 
	while (length && *buff_pointer) { 	// Actually put the data into the buffer 
		put_user(*(buff_pointer++), buffer++);
		length--;
		bytes_read++;
	}
	return bytes_read; //Most read functions return the number of bytes put into the buffer
}

//########################################################
//# დრივერის ფაილში ჩაწერა
//########################################################
static ssize_t MiscDev_write(struct file *filp, const char *buff, size_t len, loff_t * off)
{
	/////////////////////////////////////////////////////
	//
		int k;
		for (k = 0; k < 10; k++) {

			GPIO_Clear =  Pos_PIN3;
			GPIO_SET   =  Pos_PIN1 | Pos_PIN2; 
			msleep(300);

			GPIO_SET   =  Pos_PIN3;
			GPIO_Clear =  Pos_PIN1 | Pos_PIN2;
			msleep(300);

		}
	//
	/////////////////////////////////////////////////////
	INF("Write: %s",buff);
	return len;
}

//########################################################
//#
//######################################################## 
static struct file_operations mymisc_fops = {
	.owner	 	= THIS_MODULE,
	.write	 	= MiscDev_write,
	.read		= MiscDev_read,
};

//########################################################
//#
//######################################################## 
static struct miscdevice mymisc_dev = {
	.minor	= MISC_DYNAMIC_MINOR, 	// მინორის ნომერი ( ამჯერად ავტომატური არჩევით )
	.name	= Miscdev_FileName,	// სახელი რომელიც გამოჩნდება /dev დირექტორეიში
	.fops	= &mymisc_fops,
};


//########################################################
//#
//######################################################## 
int __init MiscDev_init(void)
{
	buff[0]='e';buff[1]='k';buff[2]=' ';
	buff_pointer = buff;

	INF("----------------------------------------");
	/////////////////////////////////////////////////////
	//
		GPIO1_baseAddress = ioremap_nocache(GPIO1_baseAddr, 24*4);
		if(GPIO1_baseAddress == NULL)
		{
			INF("ERROR: I/O Memory Allocation and Mapping");
			return -1;
		}
		else
		{
			INF("I/O Memory Allocation and Mapping");
		}

		gpioSetAddr   = GPIO1_baseAddress + GPIO_SETDATAOUT;
		gpioClearAddr = GPIO1_baseAddress + GPIO_CLEARDATAOUT;
		directionAddr = GPIO1_baseAddress + GPIO_OE;

  		// პინების დაკოფიგურირება როგორც გამოსასვლელები (OutPut)
		GPIO_DDR &= ~(Pos_PIN1 | Pos_PIN2 | Pos_PIN3);
	//
	/////////////////////////////////////////////////////
	return misc_register(&mymisc_dev);
}
//########################################################
//#
//######################################################## 
void __exit MiscDev_remove(void)
{
	INF("Driver Stoped !!!");
	iounmap(GPIO1_baseAddress);
	misc_deregister(&mymisc_dev);
}


//########################################################
//#
//########################################################  
module_init(MiscDev_init);
module_exit(MiscDev_remove);
 
//########################################################
//#
//######################################################## 
MODULE_LICENSE("Dual BSD/GPL");




