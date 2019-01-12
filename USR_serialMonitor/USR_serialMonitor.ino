#include <Adafruit_MQTT.h>
#include <Adafruit_MQTT_Client.h>
//#include <Adafruit_MQTT_FONA.h>
#include <Adafruit_Sensor.h>

#define trigPin D0
#define echoPin D1
//#define led D1
//#define led2 D0

void setup() {
  Serial.begin (9600);  
  pinMode(D0,OUTPUT);
  pinMode(D1,INPUT);
}

void loop() {
  int duration, distance;
  digitalWrite(trigPin, HIGH);                                        //to emmit the sound waves
  delayMicroseconds(100);
  digitalWrite(trigPin, LOW);                                         //stoping sound waves
  duration = pulseIn(echoPin, HIGH);                                  //check when echo pin will ne high , caputre duration
  distance = (duration/2) / 29.1;                                     //duration/2 as two way path

    if(distance<5)
    {
      Serial.print("Trash is Empty");
    }
    else
    {
      Serial.print("Trash is Full");
    }
} 
