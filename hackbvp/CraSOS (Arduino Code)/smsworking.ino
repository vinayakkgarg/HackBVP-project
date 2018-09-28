#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void SendMessage()
{
  Serial1.println("AT+CMGF=1"); //Sets the GSM Module in Text Mode
  digitalWrite(7,1);
  delay(1000);  // Delay of 1000 milli seconds or 1 second
  Serial1.println("AT+CMGS=\"+918447843525\"\r"); // Replace x with mobile number
  digitalWrite(7,0);
  delay(1000);
  digitalWrite(7,1);
  Serial1.println("emergency!");// The SMS text you want to send
  delay(100);
  Serial1.println((char)26);// ASCII code of CTRL+Z
  delay(1000);
  digitalWrite(7,0);
}
void nextMessage()
{
  Serial1.println("AT+CMGF=0");
  delay(1000);
  Serial1.println("AT+CMGF=1"); //Sets the GSM Module in Text Mode
  //digitalWrite(7,1);
  delay(1000);  // Delay of 1000 milli seconds or 1 second
  Serial1.println("AT+CMGS=\"+918447843525\"\r"); // Replace x with mobile number
  //digitalWrite(7,0);
  delay(1000);
  //digitalWrite(7,1);
  Serial1.println("Bipin Lala"); 
  Serial1.println("20"); 
  Serial1.println("O+  Di/abetes"); 
  Serial1.println("http://www.google.com/maps/place/28.545452,77.264092");// The SMS text you want to send
  delay(100);
  Serial1.println((char)26);// ASCII code of CTRL+Z
  delay(1000);
  //digitalWrite(7,0);
}

void nextMessage1()
{
  Serial1.println("AT+CMGF=0");
  delay(1000);
  Serial1.println("AT+CMGF=1"); //Sets the GSM Module in Text Mode
  //digitalWrite(7,1);
  delay(1000);  // Delay of 1000 milli seconds or 1 second
  Serial1.println("AT+CMGS=\"+917011102884\"\r"); // Replace x with mobile number
  //digitalWrite(7,0);
  delay(1000);
  //digitalWrite(7,1);
  Serial1.println("Bipin Lala"); 
  Serial1.println("20"); 
  Serial1.println("O+  Di/abetes"); 
  Serial1.println("http://www.google.com/maps/place/28.545452,77.264092");// The SMS text you want to send
  delay(100);
  Serial1.println((char)26);// ASCII code of CTRL+Z
  delay(1000);
  //digitalWrite(7,0);
}
void setup()
{
  Serial1.begin(9600);   // Setting the baud rate of GSM Module  
  Serial.begin(9600);    // Setting the baud rate of Serial Monitor (Arduino)
  lcd.begin(16, 2);
  pinMode(7,OUTPUT);
  digitalWrite(7,0);
}


void loop()
{
  int shock = analogRead(A8)+analogRead(A9)+analogRead(A10);
  if(shock >= 1400)
  {
    SendMessage();
    nextMessage();
    nextMessage1();
    lcd.clear();
    lcd.print("EMERGENCY!");
    delay(1000000);
  }
  else
  {
    lcd.clear();
    lcd.print("SAFE");
  }
  delay(100);
}


 
