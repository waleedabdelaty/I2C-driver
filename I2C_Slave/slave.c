/*
 * slave.c
 *
 *  Created on: Sep 27, 2021
 *      Author: TOSHIBA PC
 */

#include "i2c.h"
#include "dio.h"

int main(void)
{

	uint16_t data;
	DIO_initPort(A,OUTPUT);

while(1)
 {
	TWI_init();

	data=TWI_readWithACK();
	PORTA = data;
 }

}
