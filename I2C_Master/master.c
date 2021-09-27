/*
 * master.c
 *
 *  Created on: Sep 27, 2021
 *      Author: TOSHIBA PC
 */


#include "i2c.h"


int main(void)
{
	TWI_init();
while(1)
{
	TWI_start();

	TWI_write('a');
	TWI_stop();

}
}
