#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "adca6458a1da43fd9b462221a82c4d90";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Moin";
char pass[] = "102030406";

//define all the pins
int blynkPin=16;

void setup(){
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
