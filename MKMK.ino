//上：A0
//下：A3
//左：A2
//右：A1
//buttonA:7
//buttonB:8
#define ADUKEY_UP A0
#define ADUKEY_DOWN A3
#define ADUKEY_LEFT A2
#define ADUKEY_RIGHT A1
#define ADUKEY_A 7
#define ADUKEY_B 8

int InData1 = 0, InData2 = 0, InData3 = 0, InData4 = 0, InData5 = 0, InData0 = 0;  
int TouchSensitivity = 800;
void setup()
{ Mouse.begin();
  Keyboard.begin();
}
 void loop()
{ InData0 = digitalRead(A0);
  InData1 = digitalRead(A1);
  InData2 = digitalRead(A2);
  InData3 = digitalRead(A3);
  InData4 = digitalRead(7);
  InData5 = digitalRead(8);
  if(InData1 == 0)
  {    
    delay(8);
    if(digitalRead(A1)==0)
    Keyboard.press(KEY_RIGHT_ARROW); //right
  }
  if(InData2 == 0)
  { 
    delay(8);
    if(digitalRead(A2)==0)   
    Keyboard.press(KEY_LEFT_ARROW);  //left
  }
  if(InData3  == 0)
  { 
    delay(8);
    if(digitalRead(A3)==0)    
    Keyboard.press(KEY_DOWN_ARROW); //down
  }
  if(InData0  == 0)
  { 
    delay(8);
    if(digitalRead(A0)==0)      
    Keyboard.press(KEY_UP_ARROW);  //up
  }
  if(InData4 == 0)  //A键
  {    
    delay(8);
    if(digitalRead(7)==0)
    Keyboard.press('z');
  }
  if(InData5 == 0) //B键
  {    
    delay(8);
    if(digitalRead(8)==0)
    Keyboard.press('x');
  }  
  delay(30);
  Keyboard.releaseAll();
  
} 
