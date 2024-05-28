/*
 * fsm_countSystem.c
 *
 *  Created on: May 22, 2024
 *      Author: glmun
 */

#include "fsm_simple_buttons_run.h"
int n = 0;

void wrapAroundCounter(){
	if (n > 9) n=0;
	if (n < 0) n=9;
}
void detectButtonEvent(){
	if (n>0) n--;
}
void fsm_simple_buttons_run(){
	if (is_button_pressed(0) == 1){
		n = 0;
		setTimer2(1000);
	}

	if (is_long_button_flag(1) == 1){
		wrapAroundCounter(++n);
		setTimer2(1000);
	}

	if (is_long_button_flag(2) == 1){
		wrapAroundCounter(--n);
		setTimer2(1000);
	}

	if (is_button_pressed(1) == 1){
		wrapAroundCounter(n++);
		setTimer2(1000);
	}

	if (is_button_pressed(2) == 1){
		wrapAroundCounter(n--);
		setTimer2(1000);
	}

	if (timer0_flag == 1){
		HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
		setTimer0(100);
	}
	if (timer1_flag == 1){
		display7SEG(n);
		setTimer1(1);
	}

	if (timer2_flag == 1){
		detectButtonEvent(n);
		setTimer2(1000);
	}

}
