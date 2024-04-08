/*
 * main.c
 *
 *  Created on: Sep 2, 2023
 *      Author: user
 */


#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "ADC_interface.h"
#include "STEPPER_MOTOR_interface.h"

/*Our application is about sense the temperature and if the temperature higher than 25 degree the
  stepper motor will work else it will not work. I used Sensor LM35 to sense the temperature.
*/


int main(void){
	u16 reading_InDegree,ADC_result;
	/*pin that holds sensor reading value*/
	DIO_voidSetPinDir(DIO_u8PORTA,0,0);
	/*Stepper motor on PortC*/
	DIO_voidSetPortDirection(DIO_u8PORTC,0b00001111);
	ADC_voidInit();
	while(1){
		ADC_result=ADC_voidReadChannel(0);
		/*get temperature in degree*/
		reading_InDegree=(ADC_result*500)/1024;
		if(reading_InDegree>25){
			STEPPER_MOTOR_voidRotateCW(360);
		}
		else{
			STEPPER_MOTOR_voidStop();
		}
	}
}
