/*
 * DY_HV20T.c
 *
 *  Created on: Jul 12, 2023
 *      Author: CANAVAR-32
 */

#include "DY_HV20T.h"

void dy_hv20t_init(		dy_hv20t_config* dy_hv20t_config,
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
						uint16_t mode)
{

	dy_hv20t_config->ses1_GPIOx 	= ses1_GPIOx;
	dy_hv20t_config->ses1_GPIO_Pin  = ses1_GPIO_Pin;

	dy_hv20t_config->ses2_GPIOx 	= ses2_GPIOx;
	dy_hv20t_config->ses2_GPIO_Pin  = ses2_GPIO_Pin;

	dy_hv20t_config->ses3_GPIOx 	= ses3_GPIOx;
	dy_hv20t_config->ses3_GPIO_Pin  = ses3_GPIO_Pin;

	dy_hv20t_config->ses4_GPIOx 	= ses4_GPIOx;
	dy_hv20t_config->ses4_GPIO_Pin  = ses4_GPIO_Pin;

	dy_hv20t_config->ses5_GPIOx 	= ses5_GPIOx;
	dy_hv20t_config->ses5_GPIO_Pin  = ses5_GPIO_Pin;

	dy_hv20t_config->ses6_GPIOx 	= ses6_GPIOx;
	dy_hv20t_config->ses6_GPIO_Pin  = ses6_GPIO_Pin;

	dy_hv20t_config->ses7_GPIOx 	= ses7_GPIOx;
	dy_hv20t_config->ses7_GPIO_Pin  = ses7_GPIO_Pin;

	dy_hv20t_config->ses8_GPIOx 	= ses8_GPIOx;
	dy_hv20t_config->ses8_GPIO_Pin  = ses8_GPIO_Pin;

	dy_hv20t_config->Busy_GPIOx 	= Busy_GPIOx;
	dy_hv20t_config->Busy_GPIO_Pin  = Busy_GPIO_Pin;

	dy_hv20t_config->mode_set.mode  = mode;
}

void play_mp3(dy_hv20t_config* dy_hv20t_config, uint16_t* Music, uint16_t size){

	if ((Music != NULL) || (size != 0)){

		/*************** For Mode1 ***************/

		if (dy_hv20t_config->mode_set.mode == Mode1){

				if (Music[0] == 1) HAL_GPIO_WritePin(dy_hv20t_config->ses8_GPIOx, dy_hv20t_config->ses8_GPIO_Pin, GPIO_PIN_SET);
				else if (Music[0] == 0) HAL_GPIO_WritePin(dy_hv20t_config->ses8_GPIOx, dy_hv20t_config->ses8_GPIO_Pin, GPIO_PIN_RESET);

				if (Music[1] == 1)HAL_GPIO_WritePin(dy_hv20t_config->ses7_GPIOx, dy_hv20t_config->ses7_GPIO_Pin, GPIO_PIN_SET);
				else if (Music[1] == 0)HAL_GPIO_WritePin(dy_hv20t_config->ses7_GPIOx, dy_hv20t_config->ses7_GPIO_Pin, GPIO_PIN_RESET);

				if (Music[2] == 1)HAL_GPIO_WritePin(dy_hv20t_config->ses6_GPIOx, dy_hv20t_config->ses6_GPIO_Pin, GPIO_PIN_SET);
				else if (Music[2] == 0)HAL_GPIO_WritePin(dy_hv20t_config->ses6_GPIOx, dy_hv20t_config->ses6_GPIO_Pin, GPIO_PIN_RESET);

				if (Music[3] == 1)HAL_GPIO_WritePin(dy_hv20t_config->ses5_GPIOx, dy_hv20t_config->ses5_GPIO_Pin, GPIO_PIN_SET);
				else if (Music[3] == 0)HAL_GPIO_WritePin(dy_hv20t_config->ses5_GPIOx, dy_hv20t_config->ses5_GPIO_Pin, GPIO_PIN_RESET);

				if (Music[4] == 1)HAL_GPIO_WritePin(dy_hv20t_config->ses4_GPIOx, dy_hv20t_config->ses4_GPIO_Pin, GPIO_PIN_SET);
				else if (Music[4] == 0)HAL_GPIO_WritePin(dy_hv20t_config->ses4_GPIOx, dy_hv20t_config->ses4_GPIO_Pin, GPIO_PIN_RESET);

				if (Music[5] == 1)HAL_GPIO_WritePin(dy_hv20t_config->ses3_GPIOx, dy_hv20t_config->ses3_GPIO_Pin, GPIO_PIN_SET);
				else if (Music[5] == 0)HAL_GPIO_WritePin(dy_hv20t_config->ses3_GPIOx, dy_hv20t_config->ses3_GPIO_Pin, GPIO_PIN_RESET);

				if (Music[6] == 1)HAL_GPIO_WritePin(dy_hv20t_config->ses2_GPIOx, dy_hv20t_config->ses2_GPIO_Pin, GPIO_PIN_SET);
				else if (Music[6] == 0)HAL_GPIO_WritePin(dy_hv20t_config->ses2_GPIOx, dy_hv20t_config->ses2_GPIO_Pin, GPIO_PIN_RESET);

				if (Music[7] == 1) HAL_GPIO_WritePin(dy_hv20t_config->ses1_GPIOx, dy_hv20t_config->ses1_GPIO_Pin, GPIO_PIN_SET);
				else if (Music[7] == 0) HAL_GPIO_WritePin(dy_hv20t_config->ses1_GPIOx, dy_hv20t_config->ses1_GPIO_Pin, GPIO_PIN_RESET);

				HAL_Delay(100);

		}
	}
}


//void play_mp3(dy_hv20t_config* dy_hv20t_config, uint16_t Music){
//
//	if (Music != NULL){
//		/*************** For Mode3 ***************/
//
//		else if (dy_hv20t_config->mode_set.mode == Mode3){
//
//			if (0 != HAL_GPIO_ReadPin(dy_hv20t_config->Busy_GPIOx, dy_hv20t_config->Busy_GPIO_Pin)){
//
//				switch (Music){
//
//					case Music1:
//
//						HAL_GPIO_WritePin(dy_hv20t_config->ses1_GPIOx, dy_hv20t_config->ses1_GPIO_Pin, GPIO_PIN_RESET);
//						break;
//
//					case Music2:
//
//						HAL_GPIO_WritePin(dy_hv20t_config->ses2_GPIOx, dy_hv20t_config->ses2_GPIO_Pin, GPIO_PIN_RESET);
//
//						break;
//
//					case Music3:
//
//						HAL_GPIO_WritePin(dy_hv20t_config->ses3_GPIOx, dy_hv20t_config->ses3_GPIO_Pin, GPIO_PIN_RESET);
//
//
//						break;
//
//					case Music4:
//
//						HAL_GPIO_WritePin(dy_hv20t_config->ses4_GPIOx, dy_hv20t_config->ses4_GPIO_Pin, GPIO_PIN_RESET);
//
//
//						break;
//
//					case Music5:
//
//						HAL_GPIO_WritePin(dy_hv20t_config->ses5_GPIOx, dy_hv20t_config->ses5_GPIO_Pin, GPIO_PIN_RESET);
//
//
//						break;
//
//					case Music6:
//
//						HAL_GPIO_WritePin(dy_hv20t_config->ses7_GPIOx, dy_hv20t_config->ses7_GPIO_Pin, GPIO_PIN_RESET);
//
//
//						break;
//
//					case Music7:
//
//						HAL_GPIO_WritePin(dy_hv20t_config->ses7_GPIOx, dy_hv20t_config->ses7_GPIO_Pin, GPIO_PIN_RESET);
//
//						break;
//
//					case Music8:
//
//						HAL_GPIO_WritePin(dy_hv20t_config->ses8_GPIOx, dy_hv20t_config->ses8_GPIO_Pin, GPIO_PIN_RESET);
//
//						break;
//				}
//
//			}
//		}
//	}
//}


void stop_mp3(dy_hv20t_config* dy_hv20t_config, uint16_t Music){

	if (dy_hv20t_config->mode_set.mode == Mode3){

		if (1 != HAL_GPIO_ReadPin(dy_hv20t_config->Busy_GPIOx, dy_hv20t_config->Busy_GPIO_Pin)){

//			HAL_GPIO_WritePin(dy_hv20t_config->ses1_GPIOx, dy_hv20t_config->ses1_GPIO_Pin, GPIO_PIN_SET);
//			HAL_GPIO_WritePin(dy_hv20t_config->ses2_GPIOx, dy_hv20t_config->ses2_GPIO_Pin, GPIO_PIN_SET);
//			HAL_GPIO_WritePin(dy_hv20t_config->ses3_GPIOx, dy_hv20t_config->ses3_GPIO_Pin, GPIO_PIN_SET);
//			HAL_GPIO_WritePin(dy_hv20t_config->ses4_GPIOx, dy_hv20t_config->ses4_GPIO_Pin, GPIO_PIN_SET);
//			HAL_GPIO_WritePin(dy_hv20t_config->ses5_GPIOx, dy_hv20t_config->ses5_GPIO_Pin, GPIO_PIN_SET);
//			HAL_GPIO_WritePin(dy_hv20t_config->ses6_GPIOx, dy_hv20t_config->ses6_GPIO_Pin, GPIO_PIN_SET);
//			HAL_GPIO_WritePin(dy_hv20t_config->ses7_GPIOx, dy_hv20t_config->ses7_GPIO_Pin, GPIO_PIN_SET);
//			HAL_GPIO_WritePin(dy_hv20t_config->ses8_GPIOx, dy_hv20t_config->ses8_GPIO_Pin, GPIO_PIN_SET);
			switch (Music) {
				case Music1:
					HAL_GPIO_WritePin(dy_hv20t_config->ses1_GPIOx, dy_hv20t_config->ses1_GPIO_Pin, GPIO_PIN_SET);
					break;

				case Music2:
					HAL_GPIO_WritePin(dy_hv20t_config->ses2_GPIOx, dy_hv20t_config->ses2_GPIO_Pin, GPIO_PIN_SET);
					break;

				case Music3:
					HAL_GPIO_WritePin(dy_hv20t_config->ses3_GPIOx, dy_hv20t_config->ses3_GPIO_Pin, GPIO_PIN_SET);
					break;

				case Music4:
					HAL_GPIO_WritePin(dy_hv20t_config->ses4_GPIOx, dy_hv20t_config->ses4_GPIO_Pin, GPIO_PIN_SET);
					break;

				case Music5:
					HAL_GPIO_WritePin(dy_hv20t_config->ses5_GPIOx, dy_hv20t_config->ses5_GPIO_Pin, GPIO_PIN_SET);
					break;

				case Music6:
					HAL_GPIO_WritePin(dy_hv20t_config->ses6_GPIOx, dy_hv20t_config->ses6_GPIO_Pin, GPIO_PIN_SET);
					break;

				case Music7:
					HAL_GPIO_WritePin(dy_hv20t_config->ses7_GPIOx, dy_hv20t_config->ses7_GPIO_Pin, GPIO_PIN_SET);
					break;

				case Music8:
					HAL_GPIO_WritePin(dy_hv20t_config->ses8_GPIOx, dy_hv20t_config->ses8_GPIO_Pin, GPIO_PIN_SET);
					break;
				default:
					break;
			}
		}
	}
}




