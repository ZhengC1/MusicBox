#include "pitches.h"
#include "time.h"

void setup() {
  pinMode(11, OUTPUT);
  firstStanza();
  secondStanza();
  noTone(11);
}
/**
   Changed it to the song to "Dango Daikazoku"
   because i'm weeb trash

   score found here, i used flute becuase it
   translates best to 8 bit that i found
   http://ichigos.com/res/getfile.php?id=4074&type=pdf&token=36e6cac18a08286cf39432aaed2724ac
*/
void loop() {

}

void runStanza(int* notes, int* durations, int len) {
  for (int i = 0; i < len; i++) {
    tone(11, notes[i], durations[i]);
    delay(durations[i] + 1);
  } 
}

/**
A -> GS
B -> AS
D -> CS
E -> DS
*/
void chorus() {
  int notes[LEN] = {
    NOTE_F6, NOTE_DS6, NOTE_GS6, NOTE_GS6, NOTE_AS6,
    NOTE_AS6, NOTE_C7, NOTE_GS6, NOTE_DS6,
    NOTE_F6, NOTE_DS6, NOTE_GS6, NOTE_GS6, NOTE_AS6
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
    NOTE_F6,
    NOTE_GS6, 0 , 0
  };

  int duration[4] = {
    EIGHTH, QUARTER, QUARTER, HALF
  };

  runStanza(notes, duration, 4); 
  chorus();
}

void secondStanza() {
  int notes[4] = {
     NOTE_AS6, NOTE_C7, NOTE_AS6, 0
  };
  
  int duration[4] = {
    QUARTER, QUARTER, QUARTER, QUARTER
  };
  
  runStanza(notes, duration, 4);
  
  chorus();
  
  int note[15] = {
    NOTE_GS6, 0, NOTE_GS6,
    NOTE_C7, NOTE_CS7, NOTE_GS6, NOTE_F6, NOTE_F6, NOTE_GS6, NOTE_AS6, NOTE_F6,
    NOTE_GS6, NOTE_DS6, NOTE_F6, NOTE_DS6
            
  };
  int durations[15] = {
    HALF, HALF, HALF,
    EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH,
    QUARTER, QUARTER, QUARTER, QUARTER
  };
  
  runStanza(note, durations, 15); 
}
