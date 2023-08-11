int myValue = 0;
int myValue1 = 0;
int myValue2 = 0;

 void setup() {
    pinMode(3, INPUT);
    pinMode(4,INPUT);
    pinMode(5, INPUT);
     
     pinMode(13,OUTPUT);
     pinMode(12,OUTPUT);
     pinMode(11,OUTPUT);

    Serial.begin(9600);
  }
  // the loop function runs over and over again forever
  void loop() {

    myValue = digitalRead(3);    
    myValue1 = digitalRead(4);
    myValue2 = digitalRead(5);

if ( myValue == 1 ){
  digitalWrite(8,HIGH);


} else {
digitalWrite(8, LOW);

}
if ( myValue1 == 1 ){
  digitalWrite(9,HIGH);


} else {
digitalWrite(9, LOW);

}

if ( myValue1 == 1 ){
  digitalWrite(9,HIGH);


} else {
digitalWrite(9, LOW);

}

if ( myValue2 == 1 ){
  digitalWrite(10,HIGH);


} else {
digitalWrite(10, LOW);

}

    Serial.print(myValue);
    Serial.print(" "); 
    Serial.print(myValue1);
    Serial.print(" "); 
    Serial.println (myValue2);


 delay(100);
  }
