Arduino IR RC5 library
======================

This is an Arduino library for decoding infrared commands encoded
with the Philips RC5 protocol.  It is based on the article
"An Efficient Algorithm for Decoding RC5 Remote Control Signals"
by Guy Carpenter, Oct 2001.

For more information see http://clearwater.com.au/code/rc5.

This library supports the extended RC5 protocol which uses the second
stop bit S2 as an extension to the command value.

Using the Library
-----------------

```C++

#include <RC5.h>
#define IR_PIN 7
RC5 rc5(IR_PIN);

void loop() {
  if (rc5.read(&toggle, &address, &command))
  {
    Serial.print(address);
    Serial.print(",");
    Serial.print(command);
    Serial.println(toggle ? " (t) " : "");
  }
}

```















