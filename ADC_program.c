/*
 * ADC_program.c
 *
 *  Created on: Aug 31, 2023
 *      Author: user
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "ADC_register.h"
#include "ADC_private.h"
#include "ADC_config.h"
#include "ADC_interface.h"

void ADC_voidInit(void){
	#if(VREF==AREF)
		ClR_BIT(ADMUX,7);
		ClR_BIT(ADMUX,6);
	#elif(VREF==AVCC)
		SET_BIT(ADMUX,6);
		ClR_BIT(ADMUX,7);
	#elif(VREF==INTERNAL_VOLTAGE)
		SET_BIT(ADMUX,6);
		SET_BIT(ADMUX,7);
	#endif

	ClR_BIT(ADMUX,5);

	ClR_BIT(ADCSRA,2);
	ClR_BIT(ADCSRA,1);
	ClR_BIT(ADCSRA,0);

	SET_BIT(ADCSRA,7);
}

u16 ADC_voidReadChannel(u8 Copy_u8Channel){
	/*read channel*/
	ADMUX&=0b11100000;
	ADMUX|=Copy_u8Channel;

	/*start conversion*/
	SET_BIT(ADCSRA,6);

	/*polling*/
	while(GET_BIT(ADCSRA,4)==0){
		asm("NOP");
	}

	/*clear flag*/
	SET_BIT(ADCSRA,4);

	return ADC;
}
