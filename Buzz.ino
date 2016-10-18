#include "pitches.h"
#include "time.h"

void setup() {
  pinMode(11, OUTPUT);
  firstStanza();
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

/**
F E A A B B C A E 
*/
void firstStanza() {
  int notes[LEN] = {
    NOTE_F5, NOTE_DS5, NOTE_GS5, NOTE_GS5, NOTE_AS5,
    NOTE_AS5, NOTE_C6, NOTE_GS5, NOTE_DS5,
    NOTE_F5, NOTE_DS5, NOTE_GS5, NOTE_GS5, NOTE_AS5, NOTE_F5,
    NOTE_GS5, 0 , 0
  };
  
  int duration[LEN] = {
    EIGHTH, EIGHTH, QUARTER, QUARTER, QUARTER,
    QUARTER, QUARTER, QUARTER, QUARTER, 
    EIGHTH, EIGHTH, QUARTER, QUARTER, EIGHTH, EIGHTH,
    QUARTER, QUARTER, HALF
  };
  
  for(int i = 0; i < LEN; i++)
  {
    tone(11, notes[i], duration[i]); delay(duration[i] + 1);
  }
  noTone(11);
  
}
