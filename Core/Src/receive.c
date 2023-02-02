/*
 * receive.c
 *
 *  Created on: Feb 1, 2023
 *      Author: sena
 */
#include "stm32f4xx_hal.h"
uint32_t data=0;
void uartReceive(void){
	if((USART2->SR & USART_SR_RXNE)){

		data = USART2->DR;

		    if(data == '1')
			   HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 1);
			if(data == '1')
		    	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, 1);
			if(data == 'K')
		    	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, 1);

			    else if (data == '0')
			    	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0 | GPIO_PIN_7 | GPIO_PIN_14, 0);


   }
}

