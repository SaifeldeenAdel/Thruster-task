#ifndef DIRECTIONS
#define DIRECTIONS

#include <Arduino.h>
#include <Servo.h>


void forward(Servo myServos[],  int speed_input, int idle_speed);
void backward(Servo myServos[],  int speed_input, int idle_speed);
void right(Servo myServos[],  int speed_input, int idle_speed);
void left(Servo myServos[],  int speed_input, int idle_speed);
void up(Servo myServos[],  int speed_input, int idle_speed);
void down(Servo myServos[],  int speed_input, int idle_speed);
void stop_servos(Servo myServos[], int idle_speed);

#endif
