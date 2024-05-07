#define pump_01 23
#define pump_02 22 
#define pump_03 21 
#define pump_04 19 
#define pump_05 18 
#define pump_06 5
#define pump_07 4 
#define pump_08 2 

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


//อุณหภูมิ
#include "DHT.h"
#define DHTPIN 15
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);


void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  pinMode(pump_01, OUTPUT);
  pinMode(pump_02, OUTPUT);
  pinMode(pump_03, OUTPUT);
  pinMode(pump_04, OUTPUT);
  pinMode(pump_05, OUTPUT);
  pinMode(pump_06, OUTPUT);
  pinMode(pump_07, OUTPUT);
  pinMode(pump_08, OUTPUT);

  digitalWrite(pump_01, LOW);
  digitalWrite(pump_02, LOW);
  digitalWrite(pump_03, LOW);
  digitalWrite(pump_04, LOW);
  digitalWrite(pump_05, LOW);
  digitalWrite(pump_06, LOW);
  digitalWrite(pump_07, LOW);
  digitalWrite(pump_08, LOW);

//อุณหภูมิ
  Serial.println(F("DHTxx test!"));

  dht.begin();

}

void loop()
{
  Blynk.run();

Serial.println(F("---------------------------------------------------"));
//---------------------อุณหภูมิ------------------------------
Serial.println("อุณหภูมิ");
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }
  float hif = dht.computeHeatIndex(f, h);
  float hic = dht.computeHeatIndex(t, h, false);

  Serial.print(F("Humidity: "));
  Serial.print(h);
  Serial.print(F("%  Temperature: "));
  Serial.print(t);
  Serial.print(F(" C "));
  Serial.print(f);
  Serial.print(F(" F  Heat index: "));
  Serial.print(hic);
  Serial.print(F(" C "));
  Serial.print(hif);
  Serial.println(F(" F"));


 Serial.println(F("---------------------------------------------------"));   
}

// เปิด ปิด ปั๊ม 1
void pump_01_on(){
  digitalWrite(pump_01, HIGH);
}
void pump_01_off(){
  digitalWrite(pump_01, LOW);
}
// เปิด ปิด ปั๊ม 2
void pump_02_on(){
  digitalWrite(pump_02, HIGH);
}
void pump_02_off(){
  digitalWrite(pump_02, LOW);
}
// เปิด ปิด ปั๊ม 3
void pump_03_on(){
  digitalWrite(pump_03, HIGH);
}
void pump_03_off(){
  digitalWrite(pump_03, LOW);
}
// เปิด ปิด ปั๊ม 4
void pump_04_on(){
  digitalWrite(pump_04, HIGH);
}
void pump_04_off(){
  digitalWrite(pump_04, LOW);
}
// เปิด ปิด ปั๊ม 5
void pump_05_on(){
  digitalWrite(pump_05, HIGH);
}
void pump_05_off(){
  digitalWrite(pump_05, LOW);
}
// เปิด ปิด ปั๊ม 6
void pump_06_on(){
  digitalWrite(pump_06, HIGH);
}
void pump_06_off(){
  digitalWrite(pump_06, LOW);
}
// เปิด ปิด ปั๊ม 7
void pump_07_on(){
  digitalWrite(pump_07, HIGH);
}
void pump_07_off(){
  digitalWrite(pump_07, LOW);
}
// เปิด ปิด ปั๊ม 8
void pump_08_on(){
  digitalWrite(pump_08, HIGH);
}
void pump_08_off(){
  digitalWrite(pump_08, LOW);
}


BLYNK_WRITE(V1) {
int pinValue = param.asInt(); 
  if (pinValue == 1){
    pump_01_on();
  } else if (pinValue == 0) {
    pump_01_off();
  }
}
BLYNK_WRITE(V2) {
int pinValue = param.asInt(); 
  if (pinValue == 1){
    pump_02_on();
  } else if (pinValue == 0) {
    pump_02_off();
  }
}
BLYNK_WRITE(V3) {
int pinValue = param.asInt(); 
  if (pinValue == 1){
    pump_03_on();
  } else if (pinValue == 0) {
    pump_03_off();
  }
}
BLYNK_WRITE(V4) {
int pinValue = param.asInt(); 
  if (pinValue == 1){
    pump_04_on();
  } else if (pinValue == 0) {
    pump_04_off();
  }
}
BLYNK_WRITE(V5) {
int pinValue = param.asInt(); 
  if (pinValue == 1){
    pump_05_on();
  } else if (pinValue == 0) {
    pump_05_off();
  }
}
BLYNK_WRITE(V6) {
int pinValue = param.asInt(); 
  if (pinValue == 1){
    pump_06_on();
  } else if (pinValue == 0) {
    pump_06_off();
  }
}
BLYNK_WRITE(V7) {
int pinValue = param.asInt(); 
  if (pinValue == 1){
    pump_07_on();
  } else if (pinValue == 0) {
    pump_07_off();
  }
}
BLYNK_WRITE(V8) {
int pinValue = param.asInt(); 
  if (pinValue == 1){
    pump_08_on();
  } else if (pinValue == 0) {
    pump_08_off();
  }
}