int potenmeterPin = A3;
int redLed = 11;
int yellowLed = 12;
int greenLed = 13;
float result;
float actualReading;
void setup() {
  // put your setup code here, to run once:
pinMode(potenmeterPin,INPUT);
pinMode(redLed,OUTPUT);
pinMode(yellowLed,OUTPUT);
pinMode(greenLed,OUTPUT);
Serial.begin(9600);

}


void loop() {
result = analogRead(potenmeterPin);
actualReading = (5./1023)*result;
Serial.println(actualReading);
if(actualReading <3){
  digitalWrite(greenLed,HIGH);
  digitalWrite(yellowLed,LOW);
  digitalWrite(redLed,LOW);
}
if(actualReading>3 && actualReading <4){
  digitalWrite(greenLed,LOW);
  digitalWrite(yellowLed,HIGH);
  digitalWrite(redLed,LOW);
}
if(actualReading>4){
  digitalWrite(greenLed,LOW);
  digitalWrite(yellowLed,LOW);
  digitalWrite(redLed,HIGH);
}















  // put your main code here, to run repeatedly:

}
