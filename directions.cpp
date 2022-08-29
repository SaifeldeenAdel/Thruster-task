#include "directions.h"

void forward(Servo myServos[],  int speed_input, int idle_speed) {
  Serial.println("FORWARD");
  Serial.println("Thrusters starting....");
  int drive_speed = idle_speed + speed_input;

  // Set all vertical plane servos to calculated speed 
  myServos[0].writeMicroseconds(drive_speed); // V1
  myServos[1].writeMicroseconds(drive_speed); // V2
  myServos[2].writeMicroseconds(drive_speed); // V3
  myServos[3].writeMicroseconds(drive_speed); // V4
  
  // Stop all horizontal servos - set to 1500 idle speed
  myServos[4].writeMicroseconds(idle_speed); // H1
  myServos[5].writeMicroseconds(idle_speed); // H2
  myServos[6].writeMicroseconds(idle_speed); // H3
  myServos[7].writeMicroseconds(idle_speed); // H4

  delay(500);
  // Print formatting so it looks nice
  Serial.println((String)"ROV running FORWARD function on speed " + drive_speed);
  Serial.println("");
  Serial.println("");
}


void backward(Servo myServos[],  int speed_input, int idle_speed) {
  Serial.println("BACKWARD");
  Serial.println("Thrusters starting....");
  int reverse_speed = idle_speed - speed_input;
  
  // Set all vertical plane servos to calculated speed
  myServos[0].writeMicroseconds(reverse_speed); // V1
  myServos[1].writeMicroseconds(reverse_speed); // V2
  myServos[2].writeMicroseconds(reverse_speed); // V3
  myServos[3].writeMicroseconds(reverse_speed); // V4
  
  // Stop all horizontal servos - set to 1500 idle speed
  myServos[4].writeMicroseconds(idle_speed); // H1
  myServos[5].writeMicroseconds(idle_speed); // H2
  myServos[6].writeMicroseconds(idle_speed); // H3
  myServos[7].writeMicroseconds(idle_speed); // H4

  delay(500);
  // Print formatting so it looks nice
  Serial.println((String)"ROV running BACKWARD function on speed " + reverse_speed);
  Serial.println("");
  Serial.println("");
}

void right(Servo myServos[],  int speed_input, int idle_speed) {
  Serial.println("RIGHT");
  Serial.println("Thrusters starting....");
  int drive_speed = idle_speed + speed_input;
  int reverse_speed = idle_speed - speed_input;

  // Set V1 and V3 to drive speed and V2 and V4 to reverse speed
  myServos[0].writeMicroseconds(drive_speed); // V1
  myServos[1].writeMicroseconds(reverse_speed); // V2
  myServos[2].writeMicroseconds(drive_speed); // V3
  myServos[3].writeMicroseconds(reverse_speed); // V4
   
  // Stop all horizontal servos - set to 1500 idle speed
  myServos[4].writeMicroseconds(idle_speed); // H1
  myServos[5].writeMicroseconds(idle_speed); // H2
  myServos[6].writeMicroseconds(idle_speed); // H3
  myServos[7].writeMicroseconds(idle_speed); // H4


  delay(500);
  // Print formatting so it looks nice
  Serial.println((String)"ROV running RIGHT function on speed " + drive_speed + "," + reverse_speed);
  Serial.println("");
  Serial.println("");
}

void left(Servo myServos[],  int speed_input, int idle_speed) {
  Serial.println("LEFT");
  Serial.println("Thrusters starting....");
  int drive_speed = idle_speed + speed_input;
  int reverse_speed = idle_speed - speed_input;

  // Set V1 and V3 to reverse speed and V2 and V4 to drive speed
  myServos[0].writeMicroseconds(reverse_speed); // V1
  myServos[1].writeMicroseconds(drive_speed); // V2
  myServos[2].writeMicroseconds(reverse_speed); // V3
  myServos[3].writeMicroseconds(drive_speed); // V4
  
  // Stop all horizontal servos - set to 1500 idle speed
  myServos[4].writeMicroseconds(idle_speed); // H1
  myServos[5].writeMicroseconds(idle_speed); // H2
  myServos[6].writeMicroseconds(idle_speed); // H3
  myServos[7].writeMicroseconds(idle_speed); // H4

  delay(500);
  // Print formatting so it looks nice
  Serial.println((String)"ROV running LEFT function on speed " + drive_speed + "," + reverse_speed);
  Serial.println("");
  Serial.println("");
}

void up(Servo myServos[],  int speed_input, int idle_speed) {
  Serial.println("UP");
  Serial.println("Thrusters starting....");
  int drive_speed = idle_speed + speed_input;
  
  // Stop all vertical servos - set to 1500 idle speed
  myServos[0].writeMicroseconds(idle_speed); // V1
  myServos[1].writeMicroseconds(idle_speed); // V2
  myServos[2].writeMicroseconds(idle_speed); // V3
  myServos[3].writeMicroseconds(idle_speed); // V4
  
  // Set all horizontal servos to drive speed
  myServos[4].writeMicroseconds(drive_speed); // H1
  myServos[5].writeMicroseconds(drive_speed); // H2
  myServos[6].writeMicroseconds(drive_speed); // H3
  myServos[7].writeMicroseconds(drive_speed); // H4

  delay(500);
  // Print formatting so it looks nice
  Serial.println((String)"ROV running UP function on speed " + drive_speed);
  Serial.println("");
  Serial.println("");
}

void down(Servo myServos[],  int speed_input, int idle_speed) {
  Serial.println("DOWN");
  Serial.println("Thrusters starting....");
  int reverse_speed = idle_speed - speed_input;
  
  // Stop all vertical servos - set to 1500 idle speed
  myServos[0].writeMicroseconds(idle_speed); // V1
  myServos[1].writeMicroseconds(idle_speed); // V2
  myServos[2].writeMicroseconds(idle_speed); // V3
  myServos[3].writeMicroseconds(idle_speed); // V4
  
  // Set all horizontal servos to reverse speed
  myServos[4].writeMicroseconds(reverse_speed); // H1
  myServos[5].writeMicroseconds(reverse_speed); // H2
  myServos[6].writeMicroseconds(reverse_speed); // H3
  myServos[7].writeMicroseconds(reverse_speed); // H4

  delay(500);
  // Print formatting so it looks nice
  Serial.println((String)"ROV running DOWN function on speed " + reverse_speed);
  Serial.println("");
  Serial.println("");
}


void stop_servos(Servo myServos[], int idle_speed) {
  // Stop all servos
  myServos[0].writeMicroseconds(idle_speed); // V1
  myServos[1].writeMicroseconds(idle_speed); // V2
  myServos[2].writeMicroseconds(idle_speed); // V3
  myServos[3].writeMicroseconds(idle_speed); // V4
  
  myServos[4].writeMicroseconds(idle_speed); // H1
  myServos[5].writeMicroseconds(idle_speed); // H2
  myServos[6].writeMicroseconds(idle_speed); // H3
  myServos[7].writeMicroseconds(idle_speed); // H4

  // delay(5000);
}
