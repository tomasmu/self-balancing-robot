#include <L298N.h>

int aD0   = 16;
int aD1   = 5;
int aD2   = 4;
int aD3   = 0;
int aD4   = 2;
int aD5   = 14;
int aD6   = 12;
int aD7   = 13;
int aD8   = 15;
int aD9   = 3;
int aD10  = 1;

int HEST = aD2;

const int IN1 = aD1;
const int IN2 = aD2;
const int IN3 = aD3;
const int IN4 = aD4;
const int ENA = aD5;
const int ENB = aD6;

//scl - sd1
//sda - sd2

L298N driver(ENA, IN1, IN2, IN3, IN4, ENB); 

int time_delay = 500;
int speed = 15000;

void setup()
{
}

void loop()
{
  driver.forward(speed, time_delay);
  driver.full_stop(time_delay);
  //driver.turn_right(speed, time_delay);
  //driver.full_stop(time_delay);
  //driver.turn_left(speed, time_delay);
  //driver.full_stop(time_delay);
  //driver.backward(speed, time_delay);
  //driver.full_stop(time_delay);
}

