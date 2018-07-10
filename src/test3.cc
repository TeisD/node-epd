#include <stdio.h>
#include "epd_driver.h"

int main(int argc, char *argv[]) {
	if (wiringPiSetupGpio() == -1)
		printf("Error opening gpio\n");

	pinMode(RST, OUTPUT);
	pinMode(DC, OUTPUT);
	pinMode(BUSY, INPUT);
	pinMode(CS, OUTPUT); //must set cs output,Otherwise it does not work

	if (wiringPiSPISetup(0, 2000000) < 1)
		printf("Error opening spi lcd\n");

        EPD_Init();
        Dis_Clear_full();
        printf("Done\n");
}
