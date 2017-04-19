byte ledPin[] = {0,1,2,3,4,5,6,7,8}; 
byte pinCount; 
void setup() {
  pinCount = sizeof(ledPin);  
  for (int i=0;i<pinCount;i++) {
    pinMode(ledPin[i],OUTPUT);  
    digitalWrite(ledPin[i],LOW); 
  }
}
void loop() {
 
  for (int i=0; i <= pinCount; i++) {
    digitalWrite(ledPin[i],HIGH); //Bật đèn
    delay(250); // Dừng để các đèn LED sáng dần
  }
  
  for (int i = 0;i <= pinCount; i ++) {
    digitalWrite(ledPin[i],LOW); // Tắt đèn
    delay(250); // Dừng để các đèn LED tắt dần
  }
   for (int i=pinCount-1; i>=0; i--) {
    digitalWrite(ledPin[i],HIGH); //Bật đèn
    delay(250); // Dừng để các đèn LED sáng dần
  }
  for (int i=pinCount-1; i>=0; i--) {
    digitalWrite(ledPin[i],LOW); //Bật đèn
    delay(250); // Dừng để các đèn LED sáng dần
  }
}
