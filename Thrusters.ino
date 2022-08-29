#include <Servo.h>
#include "directions.h"

// Vertical servo pins
# define V1 6
# define V2 7
# define V3 8
# define V4 9

// Horizontal servo pins
# define H1 2
# define H2 3
# define H3 4
# define H4 5


# define DRIVE 1600
# define REVERSE 1400
# define IDLE_SPEED 1500

int dir;
int speed_input =0 ;

Servo servoArray[8];
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  int servoPinArray[] = {V1, V2, V3, V4, H1, H2, H3, H4};
  for (int i = 0; i < 8; i++){
    servoArray[i].attach(servoPinArray[i]);
  }
  stop_servos(servoArray, IDLE_SPEED);
  
}

void loop() {
  
  // put your main code here, to run repeatedly:

  // Ask user for input, while loop waits for input
  Serial.write("Change speed from 0 to 100: ");
  while(!Serial.available()){
    
  }

  // Speed integer stored in variable and printed
  speed_input = Serial.parseInt();
  Serial.print(speed_input);
  Serial.println("");


  // Same logic for direction but it reads ASCII value of letter entered
  Serial.write("Choose direction (WASD, E-R for up and down): ");
  while(!Serial.available()){
    
  }

  dir = Serial.read();
  
  switch(dir) {
    case(119): // w key
      forward(servoArray, speed_input, IDLE_SPEED);
      break;
      
    case(115): // s key
      backward(servoArray,  speed_input, IDLE_SPEED);
      break;
      
    case(100): // d key
      right(servoArray, speed_input, IDLE_SPEED);
      break;

    case(97): // a key
      left(servoArray,  speed_input, IDLE_SPEED);
      break;

    case(101): // e key
      up(servoArray,  speed_input, IDLE_SPEED);
      break;

    case(114): // r key
      down(servoArray,  speed_input, IDLE_SPEED);
      break;
  }
  
}
