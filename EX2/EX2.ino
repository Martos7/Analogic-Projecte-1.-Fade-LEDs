/**********************************************************************************
**                                                                               **
**                                 Fade LEDs                                     **
**                                                                               **
**                                 Programa  2                                   **
**                                                                               **
**********************************************************************************/
//Raúl Martos

const int led0 = 3;          
const int led1 = 5;          
const int led2 = 6;        
const int led3 = 9;         
int velocitat = 750;         // velocitat de l'acció en ms


void setup()
{
  pinMode(led0, OUTPUT);     
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT);     
  pinMode(led3, OUTPUT);     

}

void loop()
{
  analogWrite(led0, 0);     // PWM del pin 3 a 0
  analogWrite(led1, 0);     // PWM del pin 5 a 0
  analogWrite(led2, 0);     // PWM del pin 6 a 0
  analogWrite(led3, 0);     // PWM del pin 9 a 0
  delay(velocitat);        // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 70);     // PWM del pin 3 a 70
  analogWrite(led1, 0);     // PWM del pin 5 a 0
  analogWrite(led2, 0);     // PWM del pin 6 a 0
  analogWrite(led3, 0);     // PWM del pin 9 a 0
  delay(velocitat);        // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 120);     // PWM del pin 3 a 120
  analogWrite(led1, 70);     // PWM del pin 5 a 70
  analogWrite(led2, 0);     // PWM del pin 6 a 0
  analogWrite(led3, 0);     // PWM del pin 9 a 0
  delay(velocitat);        // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 200);     // PWM del pin 3 a 200
  analogWrite(led1, 120);     // PWM del pin 5 a 120
  analogWrite(led2, 70);     // PWM del pin 6 a 70
  analogWrite(led3, 0);     // PWM del pin 9 a 0
  delay(velocitat);        // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 255);     // PWM del pin 3 a 255
  analogWrite(led1, 200);     // PWM del pin 5 a 200
  analogWrite(led2, 120);     // PWM del pin 6 a 120
  analogWrite(led3, 70);     // PWM del pin 9 a 70
  delay(velocitat);        // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 255);     // PWM del pin 3 a 255
  analogWrite(led1, 255);     // PWM del pin 5 a 255
  analogWrite(led2, 200);     // PWM del pin 6 a 200
  analogWrite(led3, 120);     // PWM del pin 9 a 120
  delay(velocitat);        // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 255);     // PWM del pin 3 a 255
  analogWrite(led1, 255);     // PWM del pin 5 a 255
  analogWrite(led2, 255);     // PWM del pin 6 a 255
  analogWrite(led3, 200);     // PWM del pin 9 a 200
  delay(velocitat);        // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 255);     // PWM del pin 3 a 255
  analogWrite(led1, 255);     // PWM del pin 5 a 255
  analogWrite(led2, 255);     // PWM del pin 6 a 255
  analogWrite(led3, 255);     // PWM del pin 9 a 255
  delay(velocitat);        // es queden leds velocitat ms en aquest estat
  
  }
