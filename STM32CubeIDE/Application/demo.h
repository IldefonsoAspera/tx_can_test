/*
 * demo.h
 *
 *  Created on: 2 nov. 2021
 *      Author: Ilde
 */

#ifndef APPLICATION_DEMO_H_
#define APPLICATION_DEMO_H_

#include "app_threadx.h"


#define DEMO_THREAD_PRIO                          10
#define DEMO_THREAD_PREEMPTION_THRESHOLD          DEMO_THREAD_PRIO


void demo_th(ULONG thread_input);



#endif /* APPLICATION_DEMO_H_ */
