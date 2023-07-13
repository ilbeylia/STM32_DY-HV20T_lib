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

void play_mp3(dy_hv20t_config* dy_hv20t_config, uint16_t sarkı){

	if (dy_hv20t_config->mode_set.mode == Mode3){

		if (0 != HAL_GPIO_ReadPin(dy_hv20t_config->Busy_GPIOx, dy_hv20t_config->Busy_GPIO_Pin)){

			switch (sarkı){

				case SARKI1:
					//HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET); // test için

					HAL_GPIO_WritePin(dy_hv20t_config->ses1_GPIOx, dy_hv20t_config->ses1_GPIO_Pin, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses2_GPIOx, dy_hv20t_config->ses2_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses3_GPIOx, dy_hv20t_config->ses3_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses4_GPIOx, dy_hv20t_config->ses4_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses5_GPIOx, dy_hv20t_config->ses5_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses6_GPIOx, dy_hv20t_config->ses6_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses7_GPIOx, dy_hv20t_config->ses7_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses8_GPIOx, dy_hv20t_config->ses8_GPIO_Pin, GPIO_PIN_SET);
					break;

				case SARKI2:

					HAL_GPIO_WritePin(dy_hv20t_config->ses1_GPIOx, dy_hv20t_config->ses1_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses2_GPIOx, dy_hv20t_config->ses2_GPIO_Pin, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses3_GPIOx, dy_hv20t_config->ses3_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses4_GPIOx, dy_hv20t_config->ses4_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses5_GPIOx, dy_hv20t_config->ses5_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses6_GPIOx, dy_hv20t_config->ses6_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses7_GPIOx, dy_hv20t_config->ses7_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses8_GPIOx, dy_hv20t_config->ses8_GPIO_Pin, GPIO_PIN_SET);
					break;

				case SARKI3:

					HAL_GPIO_WritePin(dy_hv20t_config->ses1_GPIOx, dy_hv20t_config->ses1_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses2_GPIOx, dy_hv20t_config->ses2_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses3_GPIOx, dy_hv20t_config->ses3_GPIO_Pin, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses4_GPIOx, dy_hv20t_config->ses4_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses5_GPIOx, dy_hv20t_config->ses5_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses6_GPIOx, dy_hv20t_config->ses6_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses7_GPIOx, dy_hv20t_config->ses7_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses8_GPIOx, dy_hv20t_config->ses8_GPIO_Pin, GPIO_PIN_SET);

					break;

				case SARKI4:

					HAL_GPIO_WritePin(dy_hv20t_config->ses1_GPIOx, dy_hv20t_config->ses1_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses2_GPIOx, dy_hv20t_config->ses2_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses3_GPIOx, dy_hv20t_config->ses3_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses4_GPIOx, dy_hv20t_config->ses4_GPIO_Pin, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses5_GPIOx, dy_hv20t_config->ses5_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses6_GPIOx, dy_hv20t_config->ses6_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses7_GPIOx, dy_hv20t_config->ses7_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses8_GPIOx, dy_hv20t_config->ses8_GPIO_Pin, GPIO_PIN_SET);

					break;

				case SARKI5:

					HAL_GPIO_WritePin(dy_hv20t_config->ses1_GPIOx, dy_hv20t_config->ses1_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses2_GPIOx, dy_hv20t_config->ses2_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses3_GPIOx, dy_hv20t_config->ses3_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses4_GPIOx, dy_hv20t_config->ses4_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses5_GPIOx, dy_hv20t_config->ses5_GPIO_Pin, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses6_GPIOx, dy_hv20t_config->ses6_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses7_GPIOx, dy_hv20t_config->ses7_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses8_GPIOx, dy_hv20t_config->ses8_GPIO_Pin, GPIO_PIN_SET);

					break;

				case SARKI6:

					HAL_GPIO_WritePin(dy_hv20t_config->ses1_GPIOx, dy_hv20t_config->ses1_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses2_GPIOx, dy_hv20t_config->ses2_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses3_GPIOx, dy_hv20t_config->ses3_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses4_GPIOx, dy_hv20t_config->ses4_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses5_GPIOx, dy_hv20t_config->ses5_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses6_GPIOx, dy_hv20t_config->ses6_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses7_GPIOx, dy_hv20t_config->ses7_GPIO_Pin, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses8_GPIOx, dy_hv20t_config->ses8_GPIO_Pin, GPIO_PIN_SET);

					break;

				case SARKI7:

					HAL_GPIO_WritePin(dy_hv20t_config->ses1_GPIOx, dy_hv20t_config->ses1_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses2_GPIOx, dy_hv20t_config->ses2_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses3_GPIOx, dy_hv20t_config->ses3_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses4_GPIOx, dy_hv20t_config->ses4_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses5_GPIOx, dy_hv20t_config->ses5_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses6_GPIOx, dy_hv20t_config->ses6_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses7_GPIOx, dy_hv20t_config->ses7_GPIO_Pin, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses8_GPIOx, dy_hv20t_config->ses8_GPIO_Pin, GPIO_PIN_SET);

					break;

				case SARKI8:

					HAL_GPIO_WritePin(dy_hv20t_config->ses1_GPIOx, dy_hv20t_config->ses1_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses2_GPIOx, dy_hv20t_config->ses2_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses3_GPIOx, dy_hv20t_config->ses3_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses4_GPIOx, dy_hv20t_config->ses4_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses5_GPIOx, dy_hv20t_config->ses5_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses6_GPIOx, dy_hv20t_config->ses6_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses7_GPIOx, dy_hv20t_config->ses7_GPIO_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(dy_hv20t_config->ses8_GPIOx, dy_hv20t_config->ses8_GPIO_Pin, GPIO_PIN_RESET);

					break;
			}

		}
	}
}

void stop_mp3(dy_hv20t_config* dy_hv20t_config, uint16_t sarkı){

	if (dy_hv20t_config->mode_set.mode == Mode3){

		if (1 != HAL_GPIO_ReadPin(dy_hv20t_config->Busy_GPIOx, dy_hv20t_config->Busy_GPIO_Pin)){

			switch (sarkı) {
				case SARKI1:
					HAL_GPIO_WritePin(dy_hv20t_config->ses1_GPIOx, dy_hv20t_config->ses1_GPIO_Pin, GPIO_PIN_SET);
					break;

				case SARKI2:
					HAL_GPIO_WritePin(dy_hv20t_config->ses2_GPIOx, dy_hv20t_config->ses2_GPIO_Pin, GPIO_PIN_SET);
					break;

				case SARKI3:
					HAL_GPIO_WritePin(dy_hv20t_config->ses3_GPIOx, dy_hv20t_config->ses3_GPIO_Pin, GPIO_PIN_SET);
					break;

				case SARKI4:
					HAL_GPIO_WritePin(dy_hv20t_config->ses4_GPIOx, dy_hv20t_config->ses4_GPIO_Pin, GPIO_PIN_SET);
					break;

				case SARKI5:
					HAL_GPIO_WritePin(dy_hv20t_config->ses5_GPIOx, dy_hv20t_config->ses5_GPIO_Pin, GPIO_PIN_SET);
					break;

				case SARKI6:
					HAL_GPIO_WritePin(dy_hv20t_config->ses6_GPIOx, dy_hv20t_config->ses6_GPIO_Pin, GPIO_PIN_SET);
					break;

				case SARKI7:
					HAL_GPIO_WritePin(dy_hv20t_config->ses7_GPIOx, dy_hv20t_config->ses7_GPIO_Pin, GPIO_PIN_SET);
					break;

				case SARKI8:
					HAL_GPIO_WritePin(dy_hv20t_config->ses8_GPIOx, dy_hv20t_config->ses8_GPIO_Pin, GPIO_PIN_SET);
					break;
				default:
					break;
			}
		}
	}
}




