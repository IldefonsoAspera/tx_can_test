/*
 * vcp_th.h
 *
 *  Created on: 1 nov. 2021
 *      Author: Ilde
 */

#ifndef APPLICATION_VCP_TH_H_
#define APPLICATION_VCP_TH_H_


#include "app_threadx.h"


#define VCP_THREAD_PRIO                          10
#define VCP_THREAD_PREEMPTION_THRESHOLD          VCP_THREAD_PRIO


void vcp_th(ULONG thread_input);
void vcp_init(UART_HandleTypeDef *p_huart);

#endif /* APPLICATION_VCP_TH_H_ */
