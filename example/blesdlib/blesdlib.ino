/*
 * Author    : Hacker Nowful
 * Title     : BleKeyboard With Sdcard
  
 * Insta     : mr_white_hat._
 * Youtube   : Hacker Nowful
 * Website   : www.hypesecinfotech.com
 * Usage :-
 *        Hi Guys It's an Bluetooth based HID attack [ Rubber Ducky ] ,  
 *        you can Directly use an Ducky Scripts here with an sd card options  
 *        
 *  Connection :
 *  Esp32   -  Sdcard
 *  GPIO4   -   CS
 *  GPIO18  -   SCK
 *  GPIO23  -   MOSI
 *  GPIO19  -   MISO
 *  V5      -   VCC
 *  GND     -   GND
 */
#include "blesdlib.h"

void setup() {
  bleKeyboard.begin();
  if (!SD.begin(4)) {
    return;
  }
 myFile = SD.open("4pin.txt");
 attack();
}

void loop() {
  
}
