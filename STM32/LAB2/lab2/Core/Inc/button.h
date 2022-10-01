/*
 * button.h
 *
 *  Created on: 30 Sep 2022
 *      Author: xanlo
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include <main.h>

#define NORMAL_STATE SET
#define PRESSED_STATE RESET
extern int status_LED;
void getKeyInput();

#endif /* INC_BUTTON_H_ */
