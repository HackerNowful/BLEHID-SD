/*
  Hacker Nowful
*/
#ifndef blesdlib_h
#define blesdlib_h

#include <SPI.h>
#include <SD.h>
#include <string.h>
#include <BleKeyboard.h>

extern BleKeyboard bleKeyboard;
extern File myFile;
extern boolean first;

void Line(String l);
void Press(String b);

void attack();

#endif
