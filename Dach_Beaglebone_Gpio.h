




//###################################################################################################

#define  GPIO1_baseAddr		0x4804c000


//###################################################################################################

#define  GPIO_REVISION		0x000
#define  GPIO_SYSCONFIG		0x010
#define  GPIO_EOI		0x020
#define  GPIO_IRQSTATUS_RAW_0	0x024
#define  GPIO_IRQSTATUS_RAW_1	0x028
#define  GPIO_IRQSTATUS_0	0x02C
#define  GPIO_IRQSTATUS_1	0x030
#define  GPIO_IRQSTATUS_SET_0	0x034
#define  GPIO_IRQSTATUS_SET_1	0x038
#define  GPIO_IRQSTATUS_CLR_0	0x03C
#define  GPIO_IRQSTATUS_CLR_1	0x040
#define  GPIO_SYSSTATUS		0x114
#define  GPIO_CTRL		0x130
#define  GPIO_OE		0x134
#define  GPIO_DATAIN		0x138
#define  GPIO_DATAOUT		0x13C
#define  GPIO_LEVELDETECT0	0x140
#define  GPIO_LEVELDETECT1 	0x144
#define  GPIO_RISINGDETECT	0x148
#define  GPIO_FALLINGDETECT	0x14C
#define  GPIO_DEBOUNCENABLE 	0x150
#define  GPIO_DEBOUNCINGTIME	0x154
#define  GPIO_CLEARDATAOUT	0x190
#define  GPIO_SETDATAOUT	0x194


//###################################################################################################
#define  Num_GPIO0_0  	00		// "MDIO", 		CM_BASE+0x948,		0},
#define  Num_GPIO0_1  	01		// "MDC",		CM_BASE+0x94C,		0},
#define  Num_GPIO0_2  	02		// "SPI0_SCLK",		CM_BASE+0x950,		1},
#define  Num_GPIO0_3  	03		// "SPI0_D0",		CM_BASE+0x954,		1},
#define  Num_GPIO0_4  	04		// "SPI0_D1",		CM_BASE+0x958,		1},
#define  Num_GPIO0_5  	05		// "SPI0_CS0",		CM_BASE+0x95C,		1},
#define  Num_GPIO0_6  	06		// "SPI0_CS1",		CM_BASE+0x960,		0},
#define  Num_GPIO0_7  	07		// "ECAP0_IN_PWM0_OUT",	CM_BASE+0x964,		1},
#define  Num_GPIO0_8  	08		// "LCD_DATA12",	CM_BASE+0x8D0,		1},
#define  Num_GPIO0_9  	09		// "LCD_DATA13",	CM_BASE+0x8D4,		1},
#define  Num_GPIO0_10  	10		// "LCD_DATA14",	CM_BASE+0x8D8,		1},
#define  Num_GPIO0_11  	11		// "LCD_DATA15",	CM_BASE+0x8DC,		1},
#define  Num_GPIO0_12  	12		// "UART1_CTSn",	CM_BASE+0x978,		1},
#define  Num_GPIO0_13  	13		// "UART1_RTSn",	CM_BASE+0x97C,		1},
#define  Num_GPIO0_14  	14		// "UART1_RXD",		CM_BASE+0x980,		1},
#define  Num_GPIO0_15  	15		// "UART1_TXD",		CM_BASE+0x984,		1},
#define  Num_GPIO0_16  	16		// "MII1_TXD3",		CM_BASE+0x91C,		0},
#define  Num_GPIO0_17  	17		// "MII1_TXD2",		CM_BASE+0x920,		0},
#define  Num_GPIO0_18  	18		// "USB0_DRVVBUS",	CM_BASE+0xA1C,		0},
#define  Num_GPIO0_19  	19		// "XDMA_EVENT_INTR0",	CM_BASE+0x9B0,		0},
#define  Num_GPIO0_20  	20		// "XDMA_EVENT_INTR1",	CM_BASE+0x9B4,		0},
#define  Num_GPIO0_21  	21		// "MII1_TXD1",		CM_BASE+0x924,		0},
#define  Num_GPIO0_22  	22		// "Num_GpMC_AD8",	CM_BASE+0x820,		1},
#define  Num_GPIO0_23  	23		// "Num_GpMC_AD9",	CM_BASE+0x824,		1},
#define  Num_GPIO0_24  	24		// "NONE",		0,			0},
#define  Num_GPIO0_25  	25		// "NONE",		0,			0},
#define  Num_GPIO0_26  	26		// "Num_GpMC_AD10",	CM_BASE+0x828,		1},
#define  Num_GPIO0_27  	27		// "Num_GpMC_AD11",	CM_BASE+0x82C,		1},
#define  Num_GPIO0_28  	28		// "MII1_TXD0",		CM_BASE+0x928,		0},
#define  Num_GPIO0_29  	29		// "RMII1_REF_CLK",	CM_BASE+0x944,		0},
#define  Num_GPIO0_30  	30		// "Num_GpMC_WAIT0",	CM_BASE+0x870,		1},
#define  Num_GPIO0_31  	31		// "Num_GpMC_WPn",	CM_BASE+0x874,		1},
//###################################################################################################
#define  Num_GPIO1_0  	32		// "Num_GpMC_AD0",	CM_BASE+0x800,		1},
#define  Num_GPIO1_1  	33		// "Num_GpMC_AD1",	CM_BASE+0x804,		1},
#define  Num_GPIO1_2  	34		// "Num_GpMC_AD2",	CM_BASE+0x808,		1},
#define  Num_GPIO1_3  	35		// "Num_GpMC_AD3",	CM_BASE+0x80C,		1},
#define  Num_GPIO1_4  	36		// "Num_GpMC_AD4",	CM_BASE+0x810,		1},
#define  Num_GPIO1_5  	37		// "Num_GpMC_AD5",	CM_BASE+0x814,		1},
#define  Num_GPIO1_6  	38		// "Num_GpMC_AD6",	CM_BASE+0x818,		1},
#define  Num_GPIO1_7  	39		// "Num_GpMC_AD7",	CM_BASE+0x81C,		1},
#define  Num_GPIO1_8  	40		// "UART0_CTSn",	CM_BASE+0x968,		0},
#define  Num_GPIO1_9  	41		// "UART0_RTSn",	CM_BASE+0x96C,		0},
#define  Num_GPIO1_10  	42		// "UART0_RXD",		CM_BASE+0x970,		0},
#define  Num_GPIO1_11  	43		// "UART0_TXD",		CM_BASE+0x974,		0},
#define  Num_GPIO1_12  	44		// "Num_GpMC_AD12",	CM_BASE+0x830,		1},
#define  Num_GPIO1_13  	45		// "Num_GpMC_AD13",	CM_BASE+0x834,		1},
#define  Num_GPIO1_14  	46		// "Num_GpMC_AD14",	CM_BASE+0x838,		1},
#define  Num_GPIO1_15  	47		// "Num_GpMC_AD15",	CM_BASE+0x83C,		1},
#define  Num_GPIO1_16  	48		// "Num_GpMC_A0",	CM_BASE+0x840,		1},
#define  Num_GPIO1_17 	49		// "Num_GpMC_A1",	CM_BASE+0x844,		1},
#define  Num_GPIO1_18  	50		// "Num_GpMC_A2",	CM_BASE+0x848,		1},
#define  Num_GPIO1_19  	51		// "Num_GpMC_A3",	CM_BASE+0x84C,		1},
#define  Num_GPIO1_20  	52		// "Num_GpMC_A4",	CM_BASE+0x850,		0},
#define  Num_GPIO1_21  	53		// "Num_GpMC_A5",	CM_BASE+0x854,		1},#define  LED  00
#define  Num_GPIO1_22  	54		// "Num_GpMC_A6",	CM_BASE+0x858,		1},#define  LED  00
#define  Num_GPIO1_23  	55		// "Num_GpMC_A7",	CM_BASE+0x85C,		1},#define  LED  00
#define  Num_GPIO1_24  	56		// "Num_GpMC_A8",	CM_BASE+0x860,		1},#define  LED  00
#define  Num_GPIO1_25 	57		// "Num_GpMC_A9",	CM_BASE+0x864,		0},
#define  Num_GPIO1_26  	58		// "Num_GpMC_A10",	CM_BASE+0x868,		0},
#define  Num_GPIO1_27  	59		// "Num_GpMC_A11",	CM_BASE+0x86C,		0},
#define  Num_GPIO1_28  	60		// "Num_GpMC_BEn1",	CM_BASE+0x878,		1},
#define  Num_GPIO1_29  	61		// "Num_GpMC_CSn0",	CM_BASE+0x87C,		1},
#define  Num_GPIO1_30  	62		// "Num_GpMC_CSn1",	CM_BASE+0x880,		1},
#define  Num_GPIO1_31  	63		// "Num_GpMC_CSn2",	CM_BASE+0x884,		1},
//###################################################################################################
#define  Num_GPIO2_0  	64		// "Num_GpMC_CSn3",	CM_BASE+0x888,		0},
#define  Num_GPIO2_1  	65		// "Num_GpMC_CLK",	CM_BASE+0x88C,		1},
#define  Num_GPIO2_2  	66		// "Num_GpMC_ADVn_ALE",	CM_BASE+0x890,		1},
#define  Num_GPIO2_3  	67		// "Num_GpMC_OEn_REn",	CM_BASE+0x894,		1},
#define  Num_GPIO2_4  	68		// "Num_GpMC_WEn",	CM_BASE+0x898,		1},
#define  Num_GPIO2_5  	69		// "Num_GpMC_BEn0_CLE",	CM_BASE+0x89C,		1},
#define  Num_GPIO2_6  	70		// "LCD_DATA0",		CM_BASE+0x8A0,		1},
#define  Num_GPIO2_7  	71		// "LCD_DATA1",		CM_BASE+0x8A4,		1},
#define  Num_GPIO2_8  	72		// "LCD_DATA2",		CM_BASE+0x8A8,		1},
#define  Num_GPIO2_9  	73		// "LCD_DATA3",		CM_BASE+0x8AC,		1},
#define  Num_GPIO2_10  	74		// "LCD_DATA4",		CM_BASE+0x8B0,		1},
#define  Num_GPIO2_11  	75		// "LCD_DATA5",		CM_BASE+0x8B4,		1},
#define  Num_GPIO2_12  	76		// "LCD_DATA6",		CM_BASE+0x8B8,		1},
#define  Num_GPIO2_13  	77		// "LCD_DATA7",		CM_BASE+0x8BC,		1},
#define  Num_GPIO2_14  	78		// "LCD_DATA8",		CM_BASE+0x8C0,		1},
#define  Num_GPIO2_15  	79		// "LCD_DATA9",		CM_BASE+0x8C4,		1},
#define  Num_GPIO2_16  	80		// "LCD_DATA10",	CM_BASE+0x8C8,		1},
#define  Num_GPIO2_17  	81		// "LCD_DATA11",	CM_BASE+0x8CC,		1},
#define  Num_GPIO2_18  	82		// "MII1_RXD3",		CM_BASE+0x934,		0},
#define  Num_GPIO2_19  	83		// "MII1_RXD2",		CM_BASE+0x938,		0},
#define  Num_GPIO2_20  	84		// "MII1_RXD1",		CM_BASE+0x93C,		0},
#define  Num_GPIO2_21  	85		// "MII1_RXD0",		CM_BASE+0x940,		0},
#define  Num_GPIO2_22  	86		// "LCD_VSYNC",		CM_BASE+0x8E0,		1},
#define  Num_GPIO2_23  	87		// "LCD_HSYNC",		CM_BASE+0x8E4,		1},
#define  Num_GPIO2_24  	88		// "LCD_PCLK",		CM_BASE+0x8E8,		1},
#define  Num_GPIO2_25  	89		// "LCD_AC_BIAS_EN",	CM_BASE+0x8EC,		1},
#define  Num_GPIO2_26  	90		// "MMC0_DAT3",		CM_BASE+0x8F0,		0},
#define  Num_GPIO2_27  	91		// "MMC0_DAT2",		CM_BASE+0x8F4,		0},
#define  Num_GPIO2_28  	92		// "MMC0_DAT1",		CM_BASE+0x8F8,		0},
#define  Num_GPIO2_29  	93		// "MMC0_DAT0",		CM_BASE+0x8FC,		0},
#define  Num_GPIO2_30  	94		// "MMC0_CLK",		CM_BASE+0x900,		0},
#define  Num_GPIO2_31  	95		// "MMC0_CMD",		CM_BASE+0x904,		0},
//###################################################################################################
#define  Num_GPIO3_0  	96		// "MII1_COL",		CM_BASE+0x908,		0},
#define  Num_GPIO3_1  	97		// "MII1_CRS",		CM_BASE+0x90C,		0},
#define  Num_GPIO3_2  	98		// "MII1_RX_ER",	CM_BASE+0x910,		0},
#define  Num_GPIO3_3 	99		// "MII1_TX_EN",	CM_BASE+0x914,		0},
#define  Num_GPIO3_4  	100		// "MII1_RX_DV",	CM_BASE+0x918,		0},
#define  Num_GPIO3_5  	101		// "I2C0_SDA",		CM_BASE+0x988,		0},
#define  Num_GPIO3_6  	102		// "I2C0_SCL",		CM_BASE+0x98C,		0},
#define  Num_GPIO3_7  	103		// "EMU0",		CM_BASE+0x9E4,		0},
#define  Num_GPIO3_8  	104		// "EMU1",		CM_BASE+0x9E8,		0},
#define  Num_GPIO3_9  	105		// "MII1_TX_CLK",	CM_BASE+0x92C,		0},
#define  Num_GPIO3_10  	106		// "MII1_RX_CLK",	CM_BASE+0x930,		0},
#define  Num_GPIO3_11  	107		// "NONE",		0,			0},
#define  Num_GPIO3_12  	108		// "NONE",		0,			0},
#define  Num_GPIO3_13  	109		// "USB1_DRVVBUS",	CM_BASE+0xA34,		0},
#define  Num_GPIO3_14  	110		// "MCASP0_ACLKX",	CM_BASE+0x990,		1},
#define  Num_GPIO3_15  	111		// "MCASP0_FSX",	CM_BASE+0x994,		1},
#define  Num_GPIO3_16  	112		// "MCASP0_AXR0",	CM_BASE+0x998,		1},
#define  Num_GPIO3_17  	113		// "MCASP0_AHCLKR",	CM_BASE+0x99C,		1},
#define  Num_GPIO3_18  	114		// "MCASP0_ACLKR",	CM_BASE+0x9A0,		0},
#define  Num_GPIO3_19  	115		// "MCASP0_FSR",	CM_BASE+0x9A4,		1},
#define  Num_GPIO3_20  	116		// "MCASP0_AXR1",	CM_BASE+0x9A8,		0},
#define  Num_GPIO3_21  	117		// "MCASP0_AHCLKX",	CM_BASE+0x9AC,		1},
#define  Num_GPIO3_22  	118		// "NONE",		0,			0},
#define  Num_GPIO3_23  	119		// "NONE",		0,			0},
#define  Num_GPIO3_24  	120		// "NONE",		0,			0},
#define  Num_GPIO3_25  	121		// "NONE",		0,			0},
#define  Num_GPIO3_26  	122		// "NONE",		0,			0},
#define  Num_GPIO3_27  	123		// "NONE",		0,			0},
#define  Num_GPIO3_28  	124		// "NONE",		0,			0},
#define  Num_GPIO3_29  	125		// "NONE",		0,			0},
#define  Num_GPIO3_30  	126		// "NONE",		0,			0},
#define  Num_GPIO3_31  	127		// "NONE",		0,			0},
//###################################################################################################





//###################################################################################################
#define  Pos_GPIO0_0  	00
#define  Pos_GPIO0_1  	01
#define  Pos_GPIO0_2  	02
#define  Pos_GPIO0_3  	03
#define  Pos_GPIO0_4  	04
#define  Pos_GPIO0_5  	05
#define  Pos_GPIO0_6  	06
#define  Pos_GPIO0_7  	07
#define  Pos_GPIO0_8  	08
#define  Pos_GPIO0_9  	09
#define  Pos_GPIO0_10  	10
#define  Pos_GPIO0_11  	11
#define  Pos_GPIO0_12  	12
#define  Pos_GPIO0_13  	13
#define  Pos_GPIO0_14  	14
#define  Pos_GPIO0_15  	15
#define  Pos_GPIO0_16  	16
#define  Pos_GPIO0_17  	17
#define  Pos_GPIO0_18  	18
#define  Pos_GPIO0_19  	19
#define  Pos_GPIO0_20  	20
#define  Pos_GPIO0_21  	21
#define  Pos_GPIO0_22  	22
#define  Pos_GPIO0_23  	23
#define  Pos_GPIO0_24  	24
#define  Pos_GPIO0_25  	25
#define  Pos_GPIO0_26  	26
#define  Pos_GPIO0_27  	27
#define  Pos_GPIO0_28  	28
#define  Pos_GPIO0_29  	29
#define  Pos_GPIO0_30  	30
#define  Pos_GPIO0_31  	31
//###################################################################################################
#define  Pos_GPIO1_0  	00
#define  Pos_GPIO1_1  	01
#define  Pos_GPIO1_2  	02
#define  Pos_GPIO1_3  	03
#define  Pos_GPIO1_4  	04
#define  Pos_GPIO1_5  	05
#define  Pos_GPIO1_6  	06
#define  Pos_GPIO1_7  	07
#define  Pos_GPIO1_8  	08
#define  Pos_GPIO1_9  	09
#define  Pos_GPIO1_10  	10
#define  Pos_GPIO1_11  	11
#define  Pos_GPIO1_12  	12
#define  Pos_GPIO1_13  	13
#define  Pos_GPIO1_14  	14
#define  Pos_GPIO1_15  	15
#define  Pos_GPIO1_16  	16
#define  Pos_GPIO1_17  	17
#define  Pos_GPIO1_18  	18
#define  Pos_GPIO1_19  	19
#define  Pos_GPIO1_20  	20
#define  Pos_GPIO1_21  	21
#define  Pos_GPIO1_22  	22
#define  Pos_GPIO1_23  	23
#define  Pos_GPIO1_24  	24
#define  Pos_GPIO1_25  	25
#define  Pos_GPIO1_26  	26
#define  Pos_GPIO1_27  	27
#define  Pos_GPIO1_28  	28
#define  Pos_GPIO1_29  	29
#define  Pos_GPIO1_30  	30
#define  Pos_GPIO1_31  	31





