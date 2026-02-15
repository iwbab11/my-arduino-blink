void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}
void loop() {
  digitalWrite(9, HIGH);  
  delay(500);                      
  digitalWrite(9, LOW);  
  delay(500);
  blinkSOS();
}
void blinkSOS(){
  for(int i=0;i<2;i++){
    digitalWrite(10, HIGH);
    delay(500);
    digitalWrite(10, LOW);
    delay(250);
  }
  for(int i=0;i<2;i++){
    digitalWrite(10, HIGH);
    delay(3000);
    digitalWrite(10, LOW);
    delay(1000);
  }
  for(int i=0;i<2;i++){
    digitalWrite(10, HIGH);
    delay(500);
    digitalWrite(10, LOW);
    delay(250);
  }              
}
