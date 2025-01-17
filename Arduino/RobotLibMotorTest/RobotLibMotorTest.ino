#include <RobotLib.h>

int motor1R=3; // example of setting the IN pins elsewhere in the circuit
int motor1L=5;

Motor motor1; // creates two motor objects for easier control of our motors
Motor motor2; // the Motor class provides useful functions that shorten and simplify code for operation

void setup() {
  // put your setup code here, to run once:  

  motor1.begin(motor1R,motor1L); // initiallizes the motor object (motor1) with pins motor1R and motor1L
  motor2.begin(6,9); // initiallizes the motot object (motor2) with pins 6 and 9
  motor1.reverse(); // swaps the pins for motor1 (can be useful if motor is turning wrong direction)
}

void loop() {
  motor1.output(0.1); // forward at 10% speed
  motor2.output(0.1); // forward at 10% speed
  delay(1000); // delay for 1 second
  
  motor1.output(0); // turns off motor1 for 20 milliseconds
  motor2.output(0); // turns off motor2 for 20 milliseconds
  delay(20);
  
  motor1.output(-1); // backwards at 100% speed
  motor2.output(-1); // backwards at 100% speed
  delay(5000); // delay for 5 seconds
  
  motor1.output(0); // turns off motor1 and motor2 for 20 ms
  motor2.output(0);
  delay(20);
}
