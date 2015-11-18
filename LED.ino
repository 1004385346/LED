void setup() {
  // initialize digital pin 13 as an output.
  for(int i=10;i<=13;i++)
  {
    pinMode(i, OUTPUT);
  }
  
}

// the loop function runs over and over again forever
void loop() {
 for(int i=10;i<=13;i++)
 {
  digitalWrite(i, HIGH);   
  delay(500);              
  digitalWrite(i, LOW);    
  delay(500);              
  digitalWrite(i, HIGH);  
  delay(50);              
  digitalWrite(i, LOW);    
  delay(50);              
   digitalWrite(i, HIGH);   
  delay(50);              
  digitalWrite(i, LOW);    
  delay(50);              
   digitalWrite(i, HIGH);   
  delay(50);              
  digitalWrite(i, LOW);    
  delay(50);              
 }
}
