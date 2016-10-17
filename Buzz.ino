#include "pitches.h"
#include "time.h"

void setup() {
  pinMode(11, OUTPUT);
}

void loop() {
  firstStanza();
  exit(0);
}

void firstStanza() {
  tone(12, NOTE_G6 , QUARTER); delay(QUARTER + 1);
  tone(12, NOTE_F6, QUARTER); delay(QUARTER + 1);
  tone(12, NOTE_E6, QUARTER); delay(QUARTER + 1);
  tone(12, NOTE_E6, QUARTER); delay(QUARTER + 1);
  tone(12, NOTE_F6, QUARTER); delay((QUARTER + 1) * 10);
  
  tone(12, NOTE_A5, QUARTER); delay(QUARTER + 1);
  tone(12, NOTE_G6, QUARTER); delay(QUARTER + 1);
  tone(12, NOTE_F6, QUARTER); delay(QUARTER + 1);
  tone(12, NOTE_E6, QUARTER); delay(QUARTER + 1);
  tone(12, NOTE_E6, QUARTER); delay(QUARTER + 1);
  tone(12, NOTE_E6, QUARTER); delay(QUARTER + 1);
  tone(12, NOTE_F6, QUARTER + (QUARTER / 2)); delay(HALF + QUARTER + 1);
  tone(12, NOTE_D6, QUARTER); delay(HALF + 1);
  tone(12, NOTE_E6, QUARTER); delay(QUARTER + 1);
  tone(12, NOTE_A5, QUARTER); delay(QUARTER + 1);
}
