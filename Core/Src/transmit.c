/*
 * transmit.c
 *
 *  Created on: Feb 1, 2023
 *      Author: sena
 */
#include "stm32f4xx_hal.h"

void uartTransmit()
{
   for(int i = 'A'; i <= 'Z'; i++ )
   {
	   USART2->DR = i;
	   while((USART2->SR & USART_SR_TXE) == 0);
	   if(i=='Z'){
		   USART2->DR = '\n';
		   while((USART2->SR & USART_SR_TXE) == 0);
	   }
   }
}

