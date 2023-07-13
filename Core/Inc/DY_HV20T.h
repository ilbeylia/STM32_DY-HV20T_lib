/*
 * DY_HV20T.h
 *
 *  Created on: Jul 12, 2023
 *      Author: CANAVAR-32
 */

#ifndef INC_DY_HV20T_H_
#define INC_DY_HV20T_H_

#include "stm32f4xx.h"

// DP mode select ----> Configuration pin
typedef enum {	//DP pin select
	Mode1,     	// 0 0 0
	Mode2,		// 0 0 1
	Mode3,		// 0 1 0
	Mode4,		// 0 1 1
	Mode5,		// 1 0 0
	Mode6,		// 1 0 0
	Mode7,		// 1 0 1
}control_mode;

typedef enum{
	SARKI1,
	SARKI2,
	SARKI3,
	SARKI4,
	SARKI5,
	SARKI6,
	SARKI7,
	SARKI8,
}sarkı_set;


typedef struct{
	GPIO_TypeDef*	ses1_GPIOx;
	uint16_t 		ses1_GPIO_Pin;

	GPIO_TypeDef*	ses2_GPIOx;
	uint16_t 		ses2_GPIO_Pin;

	GPIO_TypeDef*	ses3_GPIOx;
	uint16_t 		ses3_GPIO_Pin;

	GPIO_TypeDef*	ses4_GPIOx;
	uint16_t 		ses4_GPIO_Pin;

	GPIO_TypeDef*	ses5_GPIOx;
	uint16_t 		ses5_GPIO_Pin;

	GPIO_TypeDef*	ses6_GPIOx;
	uint16_t 		ses6_GPIO_Pin;

	GPIO_TypeDef*	ses7_GPIOx;
	uint16_t 		ses7_GPIO_Pin;

	GPIO_TypeDef*	ses8_GPIOx;
	uint16_t 		ses8_GPIO_Pin;

	GPIO_TypeDef*	Busy_GPIOx;
	uint16_t 		Busy_GPIO_Pin;

	struct{
		uint16_t mode;

	}mode_set;

}dy_hv20t_config;

void dy_hv20t_init(	dy_hv20t_config* dy_hv20t_config,
						GPIO_TypeDef*	ses1_GPIOx,
						uint16_t 		ses1_GPIO_Pin,
						GPIO_TypeDef*	ses2_GPIOx,
						uint16_t 		ses2_GPIO_Pin,
						GPIO_TypeDef*	ses3_GPIOx,
						uint16_t 		ses3_GPIO_Pin,
						GPIO_TypeDef*	ses4_GPIOx,
						uint16_t 		ses4_GPIO_Pin,
						GPIO_TypeDef*	ses5_GPIOx,
						uint16_t 		ses5_GPIO_Pin,
						GPIO_TypeDef*	ses6_GPIOx,
						uint16_t 		ses6_GPIO_Pin,
						GPIO_TypeDef*	ses7_GPIOx,
						uint16_t 		ses7_GPIO_Pin,
						GPIO_TypeDef*	ses8_GPIOx,
						uint16_t 		ses8_GPIO_Pin,
						GPIO_TypeDef*	Busy_GPIOx,
						uint16_t 		Busy_GPIO_Pin,
						uint16_t mode);


void play_mp3(dy_hv20t_config* dy_hv20t_config, uint16_t sarkı);
void stop_mp3(dy_hv20t_config* dy_hv20t_config, uint16_t sarkı);



#endif /* INC_DY_HV20T_H_ */
