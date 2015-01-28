#include "pcfXbot.h"
#include "Arduino.h"
#include "Wire.h"

pcfXbot::pcfXbot(int end){

_end = end;
Wire.begin();
}


int pcfXbot::digRead(){

Wire.requestFrom(_end,1);
  if(Wire.available())  
  {
    byte x = Wire.read();

    for (int j = 0; j <= 7; j++){
      if (!(x & (1 << j))) {return j+1;} 
    } 
    
  }
   return 0; 



}



