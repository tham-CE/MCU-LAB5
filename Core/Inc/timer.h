/*
 * timer.h
 *
 *  Created on: Dec 14, 2022
 *      Author: Admin
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;

void SetTimer1(int duration);
void SetTimer2(int duration);

void TimerRun();

#endif /* INC_TIMER_H_ */
