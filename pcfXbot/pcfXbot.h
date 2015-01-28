#ifndef pcfXbot_h
#define pcfXbot_h
#include "Arduino.h"
#include <Wire.h>


class pcfXbot{
public:
pcfXbot(int end);
int digRead();

private:
int _end;
};

#endif