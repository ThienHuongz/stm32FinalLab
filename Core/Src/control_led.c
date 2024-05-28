/*
 * control_led.c
 *
 *  Created on: Mar 22, 2024
 *      Author: glmun
 */

#include "control_led.h"

void display7SEG(int k){
	switch (k){
	case 0:
		  HAL_GPIO_WritePin(GPIOA, LED_A_Pin|LED_B_Pin|LED_C_Pin|LED_D_Pin
		                          |LED_E_Pin|LED_F_Pin, GPIO_PIN_RESET);

		  HAL_GPIO_WritePin(GPIOA, LED_G_Pin, GPIO_PIN_SET);
		break;
	case 1:
		  HAL_GPIO_WritePin(GPIOA, LED_B_Pin|LED_C_Pin, GPIO_PIN_RESET);

		  HAL_GPIO_WritePin(GPIOA, LED_A_Pin|LED_D_Pin
		                          |LED_E_Pin|LED_F_Pin|LED_G_Pin, GPIO_PIN_SET);
		break;
	case 2:
		  HAL_GPIO_WritePin(GPIOA, LED_A_Pin|LED_B_Pin | LED_D_Pin
		                          |LED_E_Pin|LED_G_Pin, GPIO_PIN_RESET);

		  HAL_GPIO_WritePin(GPIOA,LED_C_Pin|LED_F_Pin, GPIO_PIN_SET);
		break;
	case 3:
		  HAL_GPIO_WritePin(GPIOA, LED_A_Pin|LED_B_Pin|LED_C_Pin|LED_D_Pin
		                          |LED_G_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOA, LED_E_Pin|LED_F_Pin, GPIO_PIN_SET);
		break;
	case 4:
		  HAL_GPIO_WritePin(GPIOA, LED_B_Pin|LED_C_Pin |LED_F_Pin|LED_G_Pin, GPIO_PIN_RESET);

		  HAL_GPIO_WritePin(GPIOA, LED_A_Pin|LED_D_Pin|LED_E_Pin, GPIO_PIN_SET);
		break;
	case 5:
		  HAL_GPIO_WritePin(GPIOA, LED_A_Pin|LED_C_Pin|LED_D_Pin
		                          |LED_F_Pin|LED_G_Pin, GPIO_PIN_RESET);

		  HAL_GPIO_WritePin(GPIOA,LED_B_Pin|LED_E_Pin, GPIO_PIN_SET);
		break;
	case 6:
		  HAL_GPIO_WritePin(GPIOA,LED_B_Pin, GPIO_PIN_SET);

		  HAL_GPIO_WritePin(GPIOA, LED_A_Pin|LED_C_Pin|LED_D_Pin
		                          |LED_E_Pin|LED_F_Pin|LED_G_Pin, GPIO_PIN_RESET);

		break;
	case 7:
		  HAL_GPIO_WritePin(GPIOA, LED_A_Pin|LED_B_Pin|LED_C_Pin , GPIO_PIN_RESET);

		  HAL_GPIO_WritePin(GPIOA, LED_D_Pin |LED_E_Pin|LED_F_Pin|LED_G_Pin, GPIO_PIN_SET);
		break;
	case 8:
		  HAL_GPIO_WritePin(GPIOA, LED_A_Pin|LED_B_Pin|LED_C_Pin|LED_D_Pin
		                          |LED_E_Pin|LED_F_Pin|LED_G_Pin, GPIO_PIN_RESET);
		break;
	case 9:
		  HAL_GPIO_WritePin(GPIOA, LED_A_Pin|LED_B_Pin|LED_C_Pin|LED_D_Pin
		                          |LED_F_Pin|LED_G_Pin, GPIO_PIN_RESET);

		  HAL_GPIO_WritePin(GPIOA, LED_E_Pin, GPIO_PIN_SET);
		break;
	default:
		break;
	}
}
