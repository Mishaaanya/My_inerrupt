/*
 * My_Callback.c
 *
 *  Created on: Nov 19, 2021
 *      Author: pukho
 */
#include "gpio.h"
#include <My_Callback.h>

uint16_t xxx=0;
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin) {

	if(GPIO_Pin== GPIO_PIN_1) {
		HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
		++xxx;
	}
	if(xxx%5 == 0) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, GPIO_PIN_SET);
	}

	if(xxx%6 == 0) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, GPIO_PIN_RESET);
	}

}
