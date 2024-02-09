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
