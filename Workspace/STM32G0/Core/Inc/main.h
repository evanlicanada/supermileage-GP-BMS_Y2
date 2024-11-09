/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32g0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define RST_Pin GPIO_PIN_1
#define RST_GPIO_Port GPIOF
#define Thermistor_Pin GPIO_PIN_5
#define Thermistor_GPIO_Port GPIOA
#define Cell__Pin GPIO_PIN_6
#define Cell__GPIO_Port GPIOA
#define Cell___Pin GPIO_PIN_7
#define Cell___GPIO_Port GPIOA
#define Alert_EXTI_Pin GPIO_PIN_13
#define Alert_EXTI_GPIO_Port GPIOB
#define Alert_EXTI_EXTI_IRQn EXTI4_15_IRQn
#define Manual_Wakeup_Pin GPIO_PIN_14
#define Manual_Wakeup_GPIO_Port GPIOB
#define Manual_Wakeup_EXTI_IRQn EXTI4_15_IRQn
#define temp_Pin GPIO_PIN_7
#define temp_GPIO_Port GPIOC
#define _33kHz_Pin GPIO_PIN_1
#define _33kHz_GPIO_Port GPIOD
#define Status_LED_Pin GPIO_PIN_3
#define Status_LED_GPIO_Port GPIOB
#define ZVCHG_Pin GPIO_PIN_4
#define ZVCHG_GPIO_Port GPIOB
#define Watchdog_Fault_Pin GPIO_PIN_5
#define Watchdog_Fault_GPIO_Port GPIOB
#define Overload_Pin GPIO_PIN_6
#define Overload_GPIO_Port GPIOB
#define Charge_SC_Pin GPIO_PIN_7
#define Charge_SC_GPIO_Port GPIOB
#define Discharge_SC_Pin GPIO_PIN_8
#define Discharge_SC_GPIO_Port GPIOB
#define LED_Pin GPIO_PIN_9
#define LED_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
