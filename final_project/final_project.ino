#define DELAY            1  // Delay per loop in ms
#include <Keyboard.h>

 
void setup()
{
  pinMode(A1, INPUT_PULLUP);
  pinMode(A2, INPUT_PULLUP);
  pinMode(A3, INPUT_PULLUP);
  pinMode(A4, INPUT_PULLUP);

  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  Keyboard.begin();
  
  Serial.begin(9600);
}

void loop() {
 
  if(digitalRead(A1)==LOW){
    Keyboard.press(KEY_UP_ARROW);
  }
  if(digitalRead(A1)==HIGH){
    Keyboard.release(KEY_UP_ARROW);
  }
  if(digitalRead(A2)==LOW){
    Keyboard.press(KEY_DOWN_ARROW);
  }
  if(digitalRead(A2)==HIGH){
    Keyboard.release(KEY_DOWN_ARROW);
  }
  if(digitalRead(A3)==LOW){
    Keyboard.press(KEY_RIGHT_ARROW);
  }
  if(digitalRead(A3)==HIGH){
    Keyboard.release(KEY_RIGHT_ARROW);
  }
  if(digitalRead(A4)==LOW){
    Keyboard.press(KEY_LEFT_ARROW);
  }
  if(digitalRead(A4)==HIGH){
    Keyboard.release(KEY_LEFT_ARROW);
  }
  
  if(digitalRead(4)==HIGH){
    Keyboard.release('z');
  } 
  if(digitalRead(4)==LOW){
    Keyboard.press('z');
  }  
  if(digitalRead(5)==HIGH){
    Keyboard.release('x');
  } 
  if(digitalRead(5)==LOW){
    Keyboard.press('x');
  }  
  if(digitalRead(6)==HIGH){
    Keyboard.release('a');
  } 
  if(digitalRead(6)==LOW){
    Keyboard.press('a');
  }  
  if(digitalRead(7)==HIGH){
    Keyboard.release('s');
  } 
  if(digitalRead(7)==LOW){
    Keyboard.press('s');
  }  
  if(digitalRead(8)==HIGH){
    Keyboard.release(KEY_RIGHT_SHIFT);
  } 
  if(digitalRead(8)==LOW){
    Keyboard.press(KEY_RIGHT_SHIFT);
  }  
  if(digitalRead(9)==HIGH){
    Keyboard.release(KEY_RETURN);
  } 
  if(digitalRead(9)==LOW){
    Keyboard.press(KEY_RETURN);
  }  
  
  delay(DELAY);

}
 
