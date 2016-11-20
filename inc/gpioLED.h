#ifndef GPIOLED_H_
#define GPIOLED_H_

#include "hw_control_AM335x.h"
#include "soc_AM335x.h"
#include "hw_cm_wkup.h"
#include "hw_gpio_v2.h"
#include "beaglebone.h"
#include "hw_cm_per.h"
#include "hw_types.h"


/* This is used to configure a GPIO pin as an input pin. */
#define DIR_INPUT                1
/* This is used to configure a GPIO pin as an output pin.*/
#define DIR_OUTPUT               0

/* This is used to write a logic 0 to a pin.*/
#define PIN_LOW                  0

/* This is used to write a logic 1 to a pin.*/
#define PIN_HIGH                 1

#define GPIO_INSTANCE_ADDRESS(modulo) ((modulo == 0) ? SOC_GPIO_0_REGS : (modulo == 1) ? SOC_GPIO_1_REGS : (modulo == 2) ? SOC_GPIO_2_REGS :  SOC_GPIO_3_REGS)     
#define GPIO_INSTANCE_PIN_NUMBER(n)     (n)
#define TOGGLE                          (0x01u)

enum GPIO_0_31{GPIO_0 = 0, GPIO_1, GPIO_2, GPIO_3, GPIO_4, GPIO_5, GPIO_6, GPIO_7, GPIO_8, GPIO_9, GPIO_10,
		  GPIO_11, GPIO_12, GPIO_13, GPIO_14, GPIO_15, GPIO_16, GPIO_17, GPIO_18, GPIO_19, GPIO_20,
		  GPIO_21, GPIO_22, GPIO_23, GPIO_24, GPIO_25, GPIO_26, GPIO_27, GPIO_28, GPIO_29, GPIO_30, GPIO_31}GPIO;

enum MODULO{MODULO_0, MODULO_1, MODULO_2, MODULO_3}MODULO_0_4;

void modulo3(int );
void modulo2(int );
void modulo1(int );
void modulo0(int );
void initGPIO(int , int , int );

void selectUART(int );
void selectCSN(int );
void selectMII(int );
void selectXDMA(int );
void selectMDIO(int );
void selectSPI0(int );
void selectGPMC(int );
void selectMII1RXD(int );
void selectLCD(int );
void selectMMC0(int );
void selectMII1(int );
void selectI2C0(int );
void selectMCASPO(int );

void GPIO3_ModuleClkConfig(void);
void GPIO2_ModuleClkConfig(void);
void GPIO1_ModuleClkConfig(void);
void GPIO0_ModuleClkConfig(void);
void GPIOPinMuxSetup(unsigned int , unsigned int );
void GPIOModuleEnable(unsigned int );
void GPIOModuleReset(unsigned int );
void GPIODirModeSet(unsigned int , unsigned int , unsigned int );
void GPIOPinWrite(unsigned int , unsigned int , unsigned int );
int getValue(int , int );
void Delay(int );
void whitePinHigh(int , int );
void whitePinLow(int , int );

#endif //GPIOLED_H_