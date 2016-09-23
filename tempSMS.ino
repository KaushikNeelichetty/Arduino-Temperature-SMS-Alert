#include <SoftwareSerial.h>
#define LIMIT 35 // Change it to your favoured value in Celsius.
int value;
int tempPin = A1;
SoftwareSerial GSMSerial(9, 10);//Connect 9 to TX of GSM and 10 to RX of GSM

void setup() {
  // Setting up the Arduino.
  analogReference(tempPin);
  pinMode(tempPin,INPUT); //Setting up the temperature pin as an input pin
  GSMSerial.begin(19200);   // Setting the baud rate of GSM Module  
  Serial.begin(19200);    // Setting the baud rate of Serial Monitor (Arduino)
}

void loop() {
  // Arduino does this forever.
  value = analogRead(tempPin);
  float mv = (value/1024.0)*5000; 
  float cel = mv/10;
  float farh = (cel*9)/5 + 32;
  Serial.print("Temperature is :");
  Serial.print(cel);
  Serial.println("*C");
  if(cel>LIMIT){
    SendMessage();
  }
}

void SendMessage(){
  GSMSerial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
  delay(1000);  // Delay of 1000 milli seconds or 1 second
  GSMSerial.println("AT+CMGS=\"+91xxxxxxxxxx\"\r"); // Replace x with mobile number
  delay(1000);
  GSMSerial.println("Temperature exceeded the set value!");// The SMS text you want to send
  delay(100);
  GSMSerial.println((char)26);// ASCII code of CTRL+Z
  delay(1000);
}

