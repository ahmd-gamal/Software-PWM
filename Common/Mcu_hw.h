/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Mcu_Hw.h
 *       Module:  Mcu_Hw
 *
 *  Description:  header file for Registers definition    
 *  
 *********************************************************************************************************************/
#ifndef MCU_HW_H
#define MCU_HW_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef struct
{
	volatile uint32     CRL    ;
	volatile uint32     CRH    ;
	volatile uint32     IDR    ;
	volatile uint32     ODR    ;
	volatile uint32     BSRR   ;
	volatile uint32     BRR    ;
	volatile uint32     LCKR   ;
} GPIO_type;

typedef struct
{
	volatile uint32     CR1    ;
	volatile uint32     CR2    ;
	volatile uint32     SMCR   ;
	volatile uint32     DIER   ;
	volatile uint32     SR     ;
	volatile uint32     EGR    ;
	volatile uint32     CCMR1  ;
	volatile uint32     CCMR2  ;
	volatile uint32     CCER   ;
	volatile uint32     CNT    ;
	volatile uint32     PSC    ;
	volatile uint32     ARR    ;
	volatile uint32     CCR1   ;
	volatile uint32     CCR2   ;
	volatile uint32     CCR3   ;
	volatile uint32     CCR4   ;
	volatile uint32     DCR    ;
	volatile uint32     DMAR   ;
} GPT_Type;



/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
/* Clock */
#define RCC_BASE        0x40021000
#define RCC_APB2ENR     (*((volatile uint32 *)(RCC_BASE + 0x18)))
#define RCC_APB1ENR     (*((volatile uint32 *)(RCC_BASE + 0x1C)))
#define RCC_CFGR        (*((volatile uint32 *)0x40021004))
/* NVIC */
#define NVIC_ISER0      (*((volatile uint32 *)0xE000E100))

/* DIO */
#define GPIOA_BASE      0x40010800
#define GPIOB_BASE      0x40010C00
#define GPIOC_BASE      0x40011000
#define GPIOD_BASE      0x40011400
#define GPIOE_BASE      0x40011800
#define GPIOF_BASE      0x40011C00
#define GPIOG_BASE      0x40012000

/* GPT */
#define TIMER2_BASE     0x40000000


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/



#endif  /* MCU_HW_H */

/**********************************************************************************************************************
 *  END OF FILE: Mcu_Hw.h
 *********************************************************************************************************************/
