#include <Keyboard.h>

bool flag = true;
const int bouton1 = 14;
const int bouton2 = 2;
const int bouton3 = 16;
const int bouton4 = 4;
const int bouton5 = 5;
const int bouton6 = 6;
const int bouton7 = 7;
const int bouton8 = 8;
const int bouton9 = 9;
const int boutonEtat = 3;
const int led = 10;

/* Keys can be modified here
 * If you want to send a character or a string, you can replace the variable by "[YOUR_CHARACTER_OR_STRING]"
 */
char f13 = KEY_F13; 
char f14 = KEY_F14;
char f15 = KEY_F15;
char f16 = KEY_F16;
char f17 = KEY_F17;
char f18 = KEY_F18;
char f19 = KEY_F19;
char f20 = KEY_F20;
char f21 = KEY_F21;

void setup()
{
  pinMode(bouton1, INPUT);
  pinMode(bouton2, INPUT);
  pinMode(bouton3, INPUT);
  pinMode(bouton4, INPUT);
  pinMode(bouton5, INPUT);
  pinMode(bouton6, INPUT);
  pinMode(bouton7, INPUT);
  pinMode(bouton8, INPUT);
  pinMode(bouton9, INPUT);
  pinMode(boutonEtat, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  if (digitalRead(boutonEtat))
  {
    if(flag)
    {
      Keyboard.begin();
      digitalWrite(led, HIGH);
      flag = false;
    }

    if(digitalRead(bouton1))
    {
      Keyboard.press(f13);
      delay(200); /* Do not modify the value here, it is useful in order to make the computer register the key pressed */
      Keyboard.releaseAll();
      delay(200); /* If you want to change the frequency of the keys when the button is pressed
                   * you can replace the value here (in milliseconds).
                   * Same logic apply to the rest of the program
                   */
    }

    else if(digitalRead(bouton4))
    {
      Keyboard.press(f14);
      delay(200);
      Keyboard.releaseAll();
      delay(200);
    }

    else if(digitalRead(bouton6))
    {
      Keyboard.press(f15);
      delay(200);
      Keyboard.releaseAll();
      delay(200);
    }

    else if(digitalRead(bouton2))
    {
      Keyboard.press(f16);
      delay(200);
      Keyboard.releaseAll();
      delay(200);
    }

    else if(digitalRead(bouton3))
    {
      Keyboard.press(f17);
      delay(200);
      Keyboard.releaseAll();
      delay(200);
    }
    
    else if(digitalRead(bouton5))
    {
      Keyboard.press(f18);
      delay(200);
      Keyboard.releaseAll();
      delay(200);
    }
 
    else if(digitalRead(bouton8))
    {
      Keyboard.press(f19);
      delay(200);
      Keyboard.releaseAll();
      delay(200);
    }
    
    else if(digitalRead(bouton7))
    {
      Keyboard.press(f20);
      delay(200);
      Keyboard.releaseAll();
      delay(200);
    }
    
    else if(digitalRead(bouton9))
    {
      Keyboard.press(f21);
      delay(200);
      Keyboard.releaseAll();
      delay(200);
    }
  }
  else
  {
    if(!flag)
    {
      Keyboard.end();
      digitalWrite(led, LOW);
      flag = true;
    }
  }
}
