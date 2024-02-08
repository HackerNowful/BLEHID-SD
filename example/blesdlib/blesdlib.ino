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


 */
#include "blesdlib.h"

void setup() {
  bleKeyboard.begin();
  if (!SD.begin(4)) {
    return;
  }
 myFile = SD.open("example.txt");
 attack();
}

void loop() {
  
}
