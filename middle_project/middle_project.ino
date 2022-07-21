#include<Servo.h>
#include<DHT.h>
#define DHTPIN 4
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
int angle = 0;
Servo servo;  
void setup(){
  dht.begin();
  servo.attach(2);
  Serial.begin(9600);
}
void loop() {
  float h = dht.readHumidity();
  Serial.print(h);Serial.println("%");
  delay(1000);
 if(int(h)<90 && int(h)>50){
    int static back=0;
    if(back==1){
      angle-=60;
      if(angle<=0){
        back=0;
        }
  }
  else if(angle<60){
    angle+=60;
    if(angle>=60){
      back=1;
    }
  }
}
  servo.write(angle);
  delay(300);
}
