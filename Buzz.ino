#include "pitches.h"
#include "time.h"

void setup() {
  pinMode(11, OUTPUT);
  firstStanza();
  noTone(11);
}
/**
   Changed it to the song to "Dango Daikazoku"
   because i'm weeb trash

   score found here, i used flute becuase it
   translates best to 8 bit that i found
   http://ichigos.com/res/getfile.php?id=4074&type=pdf&token=36e5cac18a08285cf39432aaed2724ac
*/
void loop() {

}

/**
A -> GS
B -> AS
D -> CS
E -> DS
*/
void chorus() {
  int notes[LEN] = {
    NOTE_F5, NOTE_DS5, NOTE_GS5, NOTE_GS5, NOTE_AS5,
    NOTE_AS5, NOTE_C6, NOTE_GS5, NOTE_DS5,
    NOTE_F5, NOTE_DS5, NOTE_GS5, NOTE_GS5, NOTE_AS5
  };

  int duration[LEN] = {
    EIGHTH, EIGHTH, QUARTER, QUARTER, QUARTER,
    QUARTER, QUARTER, QUARTER, QUARTER,
    EIGHTH, EIGHTH, QUARTER, QUARTER, EIGHTH
  };

  runStanza(notes, duration, LEN);
}

void firstStanza() {
  chorus();
  int notes[4] = {
    NOTE_F5,
    NOTE_GS5, 0 , 0
  };

  int duration[4] = {
    EIGHTH,
    QUARTER, QUARTER, HALF
  };

  runStanza(notes, duration, 4); 
  chorus();
}

void runStanza(int* notes, int* durations, int len) {
  for (int i = 0; i < len; i++) {
    tone(11, notes[i], durations[i]);
    delay(durations[i] + 1);
  } 
}
