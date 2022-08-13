//orange light do it urself
//4th traffic light do it yourself
//buzzer

#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;
boolean start=false;
char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {5, 4, 3, 2};

//LOOP
int manual = 1;

int automatic = -1;



const int buzzer = 50;


//Light A
int led30 = 30;
int led31 = 31;
int led32 = 32;

//Light B
int led34 = 34;
int led35 = 35;
int led36 = 36;


//Light C
int led38 = 38;
int led39 = 39;
int led40 = 40;

//Light D
int led41 = 41;
int led42 = 42;
int led43 = 43;

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);

char customKey;
void setup() {
  Serial.begin(9600);
  //Light A
  pinMode(led30, OUTPUT);
  pinMode(led31, OUTPUT);
  pinMode(led32, OUTPUT);
  //Light B
  pinMode(led34, OUTPUT);
  pinMode(led35, OUTPUT);
  pinMode(led36, OUTPUT);

  //Light C
  pinMode(led38, OUTPUT);
  pinMode(led39, OUTPUT);
  pinMode(led40, OUTPUT);

  //Light D
  pinMode(led41, OUTPUT);
  pinMode(led42, OUTPUT);
  pinMode(led43, OUTPUT);

  //Buzzer
  pinMode(buzzer, OUTPUT);

}


void loop() {

 customKey = customKeypad.getKey();
  
//  if ((int)temp > -1) {
//    customKey = temp;
//  }
  Serial.println(customKey);
  if (customKey == '1')  {
   while(true){
    digitalWrite(led32, HIGH);
    digitalWrite(led40, HIGH);
    digitalWrite(led34, HIGH);
    digitalWrite(led41, HIGH);
    delay(3000);
    digitalWrite(led32, LOW);
    digitalWrite(led40, LOW);
    digitalWrite(led34, LOW);
    digitalWrite(led41, LOW);

    digitalWrite(led31, HIGH);
    digitalWrite(led35, HIGH);
    digitalWrite(led39, HIGH);
    digitalWrite(led42, HIGH);
    delay(3000);

    digitalWrite(led31, LOW);
    digitalWrite(led35, LOW);
    digitalWrite(led39, LOW);
    digitalWrite(led42, LOW);

    digitalWrite(led36, HIGH);
    digitalWrite(led30, HIGH);
    digitalWrite(led38, HIGH);
    digitalWrite(led43, HIGH);
    delay(3000);
    digitalWrite(led36, LOW);
    digitalWrite(led30, LOW);
    digitalWrite(led38, LOW);
    digitalWrite(led43, LOW);

    digitalWrite(led31, HIGH);
    digitalWrite(led35, HIGH);
    digitalWrite(led39, HIGH);
    digitalWrite(led42, HIGH);
    delay(3000);

    digitalWrite(led31, LOW);
    digitalWrite(led35, LOW);
    digitalWrite(led39, LOW);
    digitalWrite(led42, LOW);
    }
    
  }
  if (customKey == '2') {
 while(true){

    digitalWrite(led32, HIGH);
    digitalWrite(led40, HIGH);
    digitalWrite(led34, HIGH);
    digitalWrite(led41, HIGH);
    delay(15000);
    digitalWrite(led32, LOW);
    digitalWrite(led40, LOW);
    digitalWrite(led34, LOW);
    digitalWrite(led41, LOW);

    digitalWrite(led31, HIGH);
    digitalWrite(led35, HIGH);
    digitalWrite(led39, HIGH);
    digitalWrite(led42, HIGH);
    delay(3000);

    digitalWrite(led31, LOW);
    digitalWrite(led35, LOW);
    digitalWrite(led39, LOW);
    digitalWrite(led42, LOW);

    digitalWrite(led36, HIGH);
    digitalWrite(led30, HIGH);
    digitalWrite(led38, HIGH);
    digitalWrite(led43, HIGH);
    delay(15000);
    digitalWrite(led36, LOW);
    digitalWrite(led30, LOW);
    digitalWrite(led38, LOW);
    digitalWrite(led43, LOW);

    digitalWrite(led31, HIGH);
    digitalWrite(led35, HIGH);
    digitalWrite(led39, HIGH);
    digitalWrite(led42, HIGH);
    delay(3000);

    digitalWrite(led31, LOW);
    digitalWrite(led35, LOW);
    digitalWrite(led39, LOW);
    digitalWrite(led42, LOW);

  }
  }
 if (customKey == '0') {
  while(true){
    tone(buzzer, 1000); // Send 1KHz sound signal...
    digitalWrite(led30, HIGH);
    digitalWrite(led34, HIGH);
    digitalWrite(led38, HIGH);
    digitalWrite(led41, HIGH);
    delay(1000);  
    digitalWrite(led31, LOW);
    digitalWrite(led32, LOW);
    digitalWrite(led35, LOW);
    digitalWrite(led36, LOW);
    digitalWrite(led39, LOW);
    digitalWrite(led40, LOW);
    digitalWrite(led42, LOW);
    digitalWrite(led43, LOW);
    noTone(buzzer);     // Stop sound...
    delay(1000);        // ...for 1sec

    
  }
 }

  
}
