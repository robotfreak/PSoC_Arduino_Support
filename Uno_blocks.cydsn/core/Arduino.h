/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#ifndef __arduino_h_
#define __arduino_h_
  
#define boolean bool
#define byte uint8_t
#define PI 3.1415
#define _BV(bit) (1 << (bit))
  
extern "C" {
#include <project.h>
}

#include "Arduino_HW_Interrupt.h"
#include "Arduino_Advanced_IO.h"
#include "Arduino_Analog_In.h"
#include "Arduino_Analog_Out.h"
#include "Arduino_Pins.h"
#include "Arduino_Random.h"
#include "Arduino_Time.h"
#include "Arduino_Tone.h"
#include "Arduino_Serial.h"
#include "Wstring.h"
#include "UARTClass.h"
#include "Stream.h"
#include "avr/pgmspace.h"

void setup();
void loop();

extern UARTClass Serial;
extern UARTClass Serial1;
  
#endif
/* [] END OF FILE */