obj-m += mymiscdev.o

KDIR = /usr/src/linux-headers-3.2.33-psp26.1

all:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules

clean:
	rm -rf *.o *.ko *.mod.* *.symvers *.order
