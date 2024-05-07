#define pump_01 23
#define pump_02 22 
#define pump_03 21 
#define pump_04 19 
#define pump_05 18 
#define pump_06 5
#define pump_07 4 
#define pump_08 2 
void setup() {
  Serial.begin(115200);
  // put your setup code here, to run once:
  pinMode(pump_01, OUTPUT);
  pinMode(pump_02, OUTPUT);
  pinMode(pump_03, OUTPUT);
  pinMode(pump_04, OUTPUT);
  pinMode(pump_05, OUTPUT);
  pinMode(pump_06, OUTPUT);
  pinMode(pump_07, OUTPUT);
  pinMode(pump_08, OUTPUT);

  digitalWrite(23, LOW);
  digitalWrite(22, LOW);
  digitalWrite(21, LOW);
  digitalWrite(19, LOW);
  digitalWrite(18, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(pump_01);
  digitalWrite(pump_01, HIGH); 
  delay(1000);
  digitalWrite(pump_01, LOW); 
  delay(1000);

  Serial.println(pump_02);
  digitalWrite(pump_02, HIGH); 
  delay(1000);
  digitalWrite(pump_02, LOW); 
  delay(1000);

  Serial.println(pump_03);
  digitalWrite(pump_03, HIGH); 
  delay(1000);
  digitalWrite(pump_03, LOW); 
  delay(1000);

  Serial.println(pump_04);
  digitalWrite(pump_04, HIGH); 
  delay(1000);
  digitalWrite(pump_04, LOW); 
  delay(1000);

  Serial.println(pump_05);
  digitalWrite(pump_05, HIGH); 
  delay(1000);
  digitalWrite(pump_05, LOW); 
  delay(1000);

  Serial.println(pump_06);
  digitalWrite(pump_06, HIGH); 
  delay(1000);
  digitalWrite(pump_06, LOW); 
  delay(1000);

  Serial.println(pump_07);
  digitalWrite(pump_07, HIGH); 
  delay(1000);
  digitalWrite(pump_07, LOW); 
  delay(1000);

  Serial.println(pump_08);
  digitalWrite(pump_08, HIGH); 
  delay(1000);
  digitalWrite(pump_08, LOW); 
  delay(1000);
}
