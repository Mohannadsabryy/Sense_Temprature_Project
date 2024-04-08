/*
 * STEPPER_MOTOR_program.c
 *
 *  Created on: Aug 28, 2023
 *      Author: user
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include <avr/delay.h>
#include "DIO_interface.h"
#include "STEPPER_MOTOR_config.h"
#include "STEPPER_MOTOR_private.h"
#include "STEPPER_MOTOR_interface.h"

void STEPPER_MOTOR_voidRotateCCW(u16 Copy_u16Angle){
	u16 size;
	size=Copy_u16Angle/0.703125;
	for(u16 i=0;i<size;i++){
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,BLUE,DIO_u8HIGH);
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,PINK,DIO_u8LOW);
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,YELLOW,DIO_u8LOW);
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,ORANGE,DIO_u8LOW);
		_delay_ms(2);
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,BLUE,DIO_u8LOW);
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,PINK,DIO_u8HIGH);
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,YELLOW,DIO_u8LOW);
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,ORANGE,DIO_u8LOW);
		_delay_ms(2);
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,BLUE,DIO_u8LOW);
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,PINK,DIO_u8LOW);
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,YELLOW,DIO_u8HIGH);
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,ORANGE,DIO_u8LOW);
		_delay_ms(2);
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,BLUE,DIO_u8LOW);
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,PINK,DIO_u8LOW);
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,YELLOW,DIO_u8LOW);
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,ORANGE,DIO_u8HIGH);
		_delay_ms(2);
	}
}
void STEPPER_MOTOR_voidRotateCW(u16 Copy_u16Angle){
	u16 size;
	size=Copy_u16Angle/0.703125;
	for(u16 i=0;i<size;i++){
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,BLUE,DIO_u8LOW);
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,PINK,DIO_u8LOW);
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,YELLOW,DIO_u8LOW);
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,ORANGE,DIO_u8HIGH);
		_delay_ms(2);
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,BLUE,DIO_u8LOW);
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,PINK,DIO_u8LOW);
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,YELLOW,DIO_u8HIGH);
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,ORANGE,DIO_u8LOW);
		_delay_ms(2);
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,BLUE,DIO_u8LOW);
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,PINK,DIO_u8HIGH);
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,YELLOW,DIO_u8LOW);
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,ORANGE,DIO_u8LOW);
		_delay_ms(2);
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,BLUE,DIO_u8HIGH);
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,PINK,DIO_u8LOW);
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,YELLOW,DIO_u8LOW);
		DIO_voidSetPinValue(STEPPER_MOTOR_PORT,ORANGE,DIO_u8LOW);
		_delay_ms(2);
	}
}
void STEPPER_MOTOR_voidStop(void){
	DIO_voidSetPinValue(STEPPER_MOTOR_PORT,BLUE,DIO_u8LOW);
	DIO_voidSetPinValue(STEPPER_MOTOR_PORT,PINK,DIO_u8LOW);
	DIO_voidSetPinValue(STEPPER_MOTOR_PORT,YELLOW,DIO_u8LOW);
	DIO_voidSetPinValue(STEPPER_MOTOR_PORT,ORANGE,DIO_u8LOW);
}
