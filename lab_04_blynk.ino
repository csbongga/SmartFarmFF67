#define BLYNK_PRINT Serial

/* Fill in information from Blynk Device Info here */
#define BLYNK_TEMPLATE_ID "TMPL6VTT0NMod"
#define BLYNK_TEMPLATE_NAME "SmartFarmFF67"
#define BLYNK_AUTH_TOKEN "pZD015wjZGniht_ebSmlN1_cm3nBCqMm"


#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "4G-MIFI-46C";
char pass[] = "1234567890";

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop()
{
  Blynk.run();
}

