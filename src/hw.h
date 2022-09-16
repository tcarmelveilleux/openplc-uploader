#ifndef HW_H
#define HW_H

#if defined BOARD_UNO

/******************PINOUT CONFIGURATION*******************
Digital In: 2, 3, 4, 5, 6           (%IX0.0 - %IX0.4)
Digital Out: 7, 8, 12, 13           (%QX0.0 - %QX0.3)
Analog In: A0, A1, A2, A3, A4, A5   (%IW0 - %IW5)
Analog Out: 9, 10, 11               (%QW0 - %QW2)
**********************************************************/

#define NUM_DISCRETE_INPUT          5
#define NUM_ANALOG_INPUT            6
#define NUM_DISCRETE_OUTPUT         4
#define NUM_ANALOG_OUTPUT           3

#define DIN                         {2, 3, 4, 5, 6}
#define AIN                         {A0, A1, A2, A3, A4, A5}
#define DOUT                        {7, 8, 12, 13}
#define AOUT                        {9, 10, 11}

#elif defined BOARD_MEGA_DUE

/************************PINOUT CONFIGURATION*************************
Digital In: 62, 63, 64, 65, 66, 67, 68, 69        (%IX0.0 - %IX0.7)
            22, 24, 26, 28, 30, 32, 34, 36        (%IX1.0 - %IX1.7)
            38, 40, 42, 44, 46, 48, 50, 52        (%IX2.0 - %IX2.7)
			
Digital Out: 14, 15, 16, 17, 18, 19, 20, 21       (%QX0.0 - %QX0.7)
             23, 25, 27, 29, 31, 33, 35, 37       (%QX1.0 - %QX1.7)
             39, 41, 43, 45, 47, 49, 51, 53       (%QX2.0 - %QX2.7)
			 
Analog In: A0, A1, A2, A3, A4, A5, A6, A7         (%IW0 - %IW7)
		   
Analog Out: 2, 3, 4, 5, 6, 7, 8, 9                (%QW0 - %QW7)
            10, 11, 12, 13                        (%QW8 - %QW11)
			
*********************************************************************/

#define NUM_DISCRETE_INPUT          24
#define NUM_ANALOG_INPUT            8
#define NUM_DISCRETE_OUTPUT         24
#define NUM_ANALOG_OUTPUT           12

#define DIN                         {62, 63, 64, 65, 66, 67, 68, 69, 22, 24, \
                                     26, 28, 30, 32, 34, 36, 38, 40, 42, 44, \
                                     46, 48, 50, 52}
#define AIN                         {A0, A1, A2, A3, A4, A5, A6, A7}
#define DOUT                        {14, 15, 16, 17, 18, 19, 20, 21, 23, 25, \
                                     27, 29, 31, 33, 35, 37, 39, 41, 43, 45, \
                                     47, 49, 51, 53}
#define AOUT                        {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13}

#elif defined BOARD_NANO_EVERY || defined BOARD_WIFININA

/******************PINOUT CONFIGURATION***********************
Digital In:  2, 3, 4, 5, 6                  (%IX0.0 - %IX0.4)
Digital Out: 7, 8, 10, 11, 12, 13           (%QX0.0 - %QX0.5)
Analog In: A1, A2, A3, A4, A5, A6, A7       (%IW0 - %IW6)
Analog Out: 9, 14                           (%QW0 - %QW1)
**************************************************************/

#define NUM_DISCRETE_INPUT          5
#define NUM_ANALOG_INPUT            7
#define NUM_DISCRETE_OUTPUT         6
#define NUM_ANALOG_OUTPUT           2

#define DIN                         {2, 3, 4, 5, 6}
#define AIN                         {15, 16, 17, 18, 19, 20, 21}
#define DOUT                        {7, 8, 10, 11, 12, 13}
#define AOUT                        {9, 14}

#elif defined BOARD_ESP32

/******************PINOUT CONFIGURATION**************************
Digital In:  17, 18, 19, 21, 22, 23, 27, 32 (%IX0.0 - %IX0.7)
             33                             (%IX1.0 - %IX1.0)
Digital Out: 01, 02, 03, 04, 05, 12, 13, 14 (%QX0.0 - %QX0.7)
             15, 16                         (%QX1.0 - %QX1.1)
Analog In:   34, 35, 36, 39                 (%IW0 - %IW2)
Analog Out:  25, 26                         (%QW0 - %QW1)
*****************************************************************/

#define NUM_DISCRETE_INPUT          9
#define NUM_ANALOG_INPUT            4
#define NUM_DISCRETE_OUTPUT         10
#define NUM_ANALOG_OUTPUT           2

#define DIN                         {17, 18, 19, 21, 22, 23, 27, 32, 33}
#define DOUT                        {01, 02, 03, 04, 05, 12, 13, 14, 15, 16}
#define AIN                         {34, 35, 36, 39}
#define AOUT                        {25, 26}

#elif defined BOARD_MKR

/******************PINOUT CONFIGURATION***********************
Digital In:  0, 1, 2, 3, 4, 5               (%IX0.0 - %IX0.5)
Digital Out: 7, 8, 9, 10, 11, 12            (%QX0.0 - %QX0.5)
Analog In: A1, A2, A3, A4, A5, A6           (%IW0 - %IW5)
Analog Out: 6, 15                           (%QW0 - %QW1)
**************************************************************/

#define NUM_DISCRETE_INPUT          6
#define NUM_ANALOG_INPUT            6
#define NUM_DISCRETE_OUTPUT         6
#define NUM_ANALOG_OUTPUT           2

#define DIN                         {0, 1, 2, 3, 4, 5}
#define AIN                         {A1, A2, A3, A4, A5, A6}
#define DOUT                        {7, 8, 9, 10, 11, 12}
#define AOUT                        {6, 15}

#else

#error "No BOARD defined!"

#endif

#endif