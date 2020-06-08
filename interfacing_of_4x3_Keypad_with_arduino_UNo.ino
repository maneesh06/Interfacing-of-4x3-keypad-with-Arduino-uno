#include<Keypad.h>

const byte ROWS = 4;   // No. of Rows
const byte COLS = 3;  //  No. of columns


char keys[ROWS][COLS] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'}
};


byte rowPin[ROWS] = {10, 9, 8, 7};
byte colPin[COLS] = {13, 12, 11};


// create an object of Keypad
Keypad keypad = Keypad(makeKeymap(keys), rowPin, colPin, ROWS, COLS);





void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  char key = keypad.getKey();   // Reading the Key

  if (key){
    Serial.println(key);
  }

}
