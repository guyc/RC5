#ifndef RC5_h
#define RC5_h

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
