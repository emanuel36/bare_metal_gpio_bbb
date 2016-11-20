#include "gpioLED.h"
#include <unistd.h>

int main(){
	initGPIO(GPIO_23, MODULO_1, DIR_OUTPUT);
		whitePinHigh(GPIO_23, MODULO_1);
		Delay(0xEFFFFFF);
		whitePinLow(GPIO_23, MODULO_1);
		Delay(0xEFFFFFF);
		return (0);
}