/*
 *  RC5 Arduino Library
 *  Guy Carpenter, Clearwater Software - 2013
 *
 *  Licensed under the BSD2 license, see LICENSE for details.
 *
 *  All text above must be included in any redistribution.
 */

#ifndef RC5_h
#define RC5_h

#include <Arduino.h>

class RC5
{
 public:
    unsigned char pin;
    unsigned char state;
    unsigned long time0;
    unsigned long lastValue;
    unsigned int bits;
    unsigned int command;

    RC5(unsigned char pin);
    void reset();
    bool read(unsigned int *message);
    bool read(unsigned char *toggle, unsigned char *address, unsigned char *command);
    void decodeEvent(unsigned char event);
    void decodePulse(unsigned char signal, unsigned long period);
};

#endif // RC5_h
