// defines pins numbers
#include "UbidotsESPMQTT.h"

const int trigPin = D5;
const int echoPin = D6;

const int trigPin1 = D7;
const int echoPin1 = D8;

#define TOKEN "BBUS-KJBEbpaDCcloy6Qlf8ZHhTid8lOnaP"     // Your Ubidots TOKEN
#define WIFINAME "Programmer"  // Your SSID
#define WIFIPASS ""  // Your Wifi Pass

Ubidots client(TOKEN);

// defines variables
long duration;
int distance;

long duration1;
int distance1;

void callback(char* topic, byte* payload, unsigned int length) {
  Serial.print("Message arrived [");
  Serial.print(topic);
  Serial.print("] ");
  for (int i = 0; i < length; i++) {
    Serial.print((char)payload[i]);
  }
  Serial.println();
}

void setup() {
Serial.begin(115200);
  client.setDebug(true);  // Pass a true or false bool value to activate debug messages
  client.wifiConnection(WIFINAME, WIFIPASS);
  client.begin(callback);
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT); 

    pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT); 

}
void loop() {

  if (!client.connected()) {
    client.reconnect();
  }
     digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
  duration1 = pulseIn(echoPin1, HIGH);
  distance1 = duration1 * 0.034 / 2;
  
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  

  
  Serial.print("Bin1: ");
  Serial.println(distance);
  Serial.print("Bin2: ");
  Serial.println(distance1);
if (distance<=5 && distance1<=5)
{
   client.add("bin1", 1);
  client.add("bin2", 1);
  client.ubidotsPublish("Data");
}
else  if (distance<=5 )
  {
  client.add("bin1", 1);
  client.add("bin2", 0);
  client.ubidotsPublish("Data");
 
  }
  else if(distance1<=5)
  {
   client.add("bin2", 1);
   client.add("bin1", 0);
   client.ubidotsPublish("Data");
  }
  else
  {
      client.add("bin1", 0);
  client.add("bin2", 0);
  client.ubidotsPublish("Data");
  }
   client.add("bin1", distance);
  client.add("bin2", distance1);
  client.ubidotsPublish("Dist");
   client.loop();
  delay(5000);
 

}
