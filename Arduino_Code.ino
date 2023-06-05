// C++ code
bool SensorAction;
void setup(){
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, INPUT);
  Serial.begin(9600); 
}
void loop(){
  SensorAction = digitalRead(12);
  if(SensorAction){
    digitalWrite(13, HIGH);
    Serial.println("DETECTED");
  } else {
    digitalWrite(13, LOW);
    Serial.println("------");
  }
  delay(50);
}
