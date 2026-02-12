void setup() {
  pinMode(9, OUTPUT);
  pinMode(12, OUTPUT);
}
void blinkSOS(){
  print("...---...");
}
void loop() {
  digitalWrite(9, HIGH);  
  digitalWrite(12, HIGH); 
  delay(100);                      
  digitalWrite(9, LOW);  
  digitalWrite(12, LOW); 
  delay(100);                     
}
