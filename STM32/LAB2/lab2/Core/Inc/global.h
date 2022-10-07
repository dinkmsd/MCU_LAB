/*
 * global.h
 *
 *  Created on: Oct 7, 2022
 *      Author: xanlo
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include <main.h>

#define INIT			0
#define AUTO_RED		1
#define AUTO_GREEN		2
#define AUTO_YELLOW		3

#define MAN_RED			12
#define MAN_GREEN		13
#define MAN_BLUE		14

#define RED_TIME		5000
#define GREEN_TIME		3000
#define YELLOW_TIME		2000

#define RED_MANUAL_TIME			1000
#define GREEN_MANUAL_TIME		1000
#define YELLOW_MANUAL_TIME		1000

extern int status = 0;


#endif /* INC_GLOBAL_H_ */
