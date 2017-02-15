/**
  ******************************************************************************
  * @file    MDR32F9Qx_dac.h
  * @author  Phyton Application Team
  * @version V1.4.0
  * @date    21/07/2011
  * @brief   This file contains all the functions prototypes for the DAC
  *          firmware library.
  ******************************************************************************
  * <br><br>
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, PHYTON SHALL NOT BE HELD LIABLE FOR ANY DIRECT, INDIRECT
  * OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT 2011 Phyton</center></h2>
  ******************************************************************************
  * FILE MDR32F9Qx_dac.h
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MDR32F9QX_DAC_H
#define __MDR32F9QX_DAC_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "MDR32F9Qx_config.h"
#include "MDR32F9Qx_lib.h"

/** @addtogroup __MDR32F9Qx_StdPeriph_Driver MDR32F9Qx Standard Peripherial Driver
  * @{
  */

/** @addtogroup DAC
  * @{
  */

/** @defgroup DAC_Exported_Types DAC Exported Types
  * @{
  */

/** @} */ /* End of group DAC_Exported_Types */

/** @defgroup DAC_Exported_Constants DAC Exported Constants
  * @{
  */

/** @defgroup DAC1_Ref_Source DAC1 Reference Voltage source
  * @{
  */

#define DAC1_AVCC                             (((uint32_t)0x0) << DAC_CFG_M_REF0_Pos)       /*!< Selects AVcc as Reference Voltage. */
#define DAC1_REF                              (((uint32_t)0x1) << DAC_CFG_M_REF0_Pos)       /*!< Selects DAC1_REF input as Reference Voltage. */

#define IS_DAC1_REF_CONFIG(CONFIG) (((CONFIG) == DAC1_AVCC) || \
                                    ((CONFIG) == DAC1_REF ))

/** @} */ /* End of group DAC1_Ref_Source */

/** @defgroup DAC_Data DAC Data
  * @{
  */

#define DAC_LO_DATA_MSK                       ((uint32_t)0x0FFF)

#define IS_DAC_DATA(DATA) (((DATA) & ~(DAC_LO_DATA_MSK)) == 0 )

/** @} */ /* End of group DAC_Data */

/** @} */ /* End of group DAC_Exported_Constants */

/** @defgroup DAC_Exported_Macros DAC Exported Macros
  * @{
  */

/** @} */ /* End of group DAC_Exported_Macros */

/** @defgroup DAC_Exported_Functions DAC Exported Functions
  * @{
  */

void DAC_DeInit(void);
void DAC1_Init(uint32_t DAC1_Ref);
void DAC1_Cmd(FunctionalState NewState);
void DAC1_SetData(uint32_t Data);
uint32_t DAC1_GetData(void);

/** @} */ /* End of group DAC_Exported_Functions */

/** @} */ /* End of group DAC */

/** @} */ /* End of group __MDR32F9Qx_StdPeriph_Driver */

#ifdef __cplusplus
} // extern "C" block end
#endif

#endif /* __MDR32F9QX_DAC_H */

/******************* (C) COPYRIGHT 2011 Phyton *********************************
*
* END OF FILE MDR32F9Qx_dac.h */

