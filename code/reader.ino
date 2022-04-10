#include <IRremote.h>

#define IRPIN 2

void setup()
{

    Serial.begin(115200);

    Serial.println("Enabling IRin");

    IrReceiver.begin(IRPIN, ENABLE_LED_FEEDBACK);

    Serial.println("Enabled IRin");
}

unsigned long int rawData = 0;

void loop()
{

    if (IrReceiver.decode())
    {
        rawData = IrReceiver.decodedIRData.decodedRawData;

        if (rawData > 0)
        {
            Serial.print("hex: ");
            Serial.print(rawData, HEX);
            Serial.print(" oct: ");
            Serial.print(rawData, OCT);
            Serial.print(" dec: ");
            Serial.print(rawData, DEC);
            Serial.println();
        }

        IrReceiver.resume();
    }

    delay(50);
}