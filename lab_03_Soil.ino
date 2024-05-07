int analogPin1 = 34; //ประกาศตัวแปร ให้ analogPin แทนขา analog ขาที่5
int val = 0;
void setup() {
Serial.begin(9600);
pinMode(analogPin1, INPUT);
}
 
void loop() {
Serial.print("Moisture Sensor Value:");

Serial.println(analogRead(analogPin1));

delay(100);
}
