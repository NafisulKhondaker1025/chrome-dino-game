#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

int servoPositions[5] = {90, 90, 90, 90, 90};

void setup() {
  Serial.begin(9600);
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
  servo5.attach(10);
}

void loop() {
  while(Serial.available()){
    String input = Serial.readStringUntil('\n');
    if (input == "a"){
      input = Serial.parseInt();
      servoPositions[0] = input.toInt();
    }
    else if (input == "b") {
      input = Serial.parseInt();
      servoPositions[1] = input.toInt();
    }
    else if (input == "c") {
      input = Serial.parseInt();
      servoPositions[2] = input.toInt();
    }
    else if (input == "d") {
      input = Serial.parseInt();
      servoPositions[3] = input.toInt();
    }
    else if (input == "e") {
      input = Serial.parseInt();
      servoPositions[4] = input.toInt();
    }
  }

  servo1.write(servoPositions[0]);
  servo2.write(servoPositions[1]);
  servo3.write(servoPositions[2]);
  servo4.write(servoPositions[3]);
  servo5.write(servoPositions[4]);

  delay(500);
}
 
//Servo servo1;
//Servo servo2;
//Servo servo3;
//Servo servo4;
//int position[4] = {90, 90, 90, 90};
//int VRx = A0;
//int VRy = A1;
//int SW = 2;
//
//int xPosition = 0;
//int yPosition = 0;
//int SW_state = 0;
//int mapX = 0;
//int mapY = 0;
//int mode = 1;
//
//void setup() {
//  Serial.begin(9600); 
//  servo1.attach(3);
//  servo2.attach(5);
//  servo3.attach(6); 
//  servo4.attach(9);
//  pinMode(VRx, INPUT);
//  pinMode(VRy, INPUT);
//  pinMode(SW, INPUT_PULLUP); 
//}
//
//void loop() {
//  xPosition = analogRead(VRx);
//  yPosition = analogRead(VRy);
//  SW_state = digitalRead(SW);
//  mapX = map(xPosition, 0, 1023, -512, 512);
//  mapY = map(yPosition, 0, 1023, -512, 512);
//  
//  Serial.print("X: ");
//  Serial.print(mapX);
//  Serial.print(" | Y: ");
//  Serial.print(mapY);
//  Serial.print(" | Button: ");
//  Serial.println(SW_state);
//  if(SW_state == 0) {
//    if (mode == 0) {
//      mode = 1;
//    }
//    else {
//      mode = 0;
//    }
//  }
//  
//  if (mapX < 50 && mapX > -50){
//
//  }
//  else if (mapX < 250 && mapX >= 50 && mode == 0) {
//    position[0] += 5;
//    if (position[0] > 180) {
//       position[0] = 180;
//    }
//    servo1.write(position[0]);
//  }
//  else if (mapX >= 250 && mode == 0) {
//    position[0] += 10;
//    if (position[0] > 180) {
//       position[0] = 180;
//    }
//    servo1.write(position[0]);
//  }
//  else if (mapX > -250 && mapX <= -50 && mode == 0) {
//    position[0] -= 5;
//    if (position[0] < 0) {
//       position[0] = 0;
//    }
//    servo1.write(position[0]);
//  }
//  else if (mapX <= -250 && mode == 0) {
//        position[0] -= 10;
//    if (position[0] < 0) {
//       position[0] = 0;
//    }
//    servo1.write(position[0]);
//  }
//
//  //Change servo
//
//  if (mapY < 50 && mapY > -50){
//
//  }
//  else if (mapY < 250 && mapY >= 50 && mode == 0) {
//    position[1] += 2;
//    if (position[1] > 180) {
//       position[1] = 180;
//    }
//    servo2.write(position[1]);
//  }
//  else if (mapY >= 250 && mode == 0) {
//    position[1] += 5;
//    if (position[1] > 180) {
//       position[1] = 180;
//    }
//    servo2.write(position[1]);
//  }
//  else if (mapY > -250 && mapY <= -50 && mode == 0) {
//    position[1] -= 2;
//    if (position[1] < 0) {
//       position[1] = 0;
//    }
//    servo2.write(position[1]);
//  }
//  else if (mapY <= -250 && mode == 0) {
//        position[1] -= 5;
//    if (position[1] < 0) {
//       position[1] = 0;
//    }
//    servo2.write(position[1]);
//  }
//
//  //Change mode
//
//  if (mapX < 50 && mapX > -50){
//
//  }
//  else if (mapX < 250 && mapX >= 50 && mode == 1) {
//    position[2] += 5;
//    if (position[2] > 180) {
//       position[2] = 180;
//    }
//    servo3.write(position[2]);
//  }
//  else if (mapX >= 250 && mode == 1) {
//    position[2] += 10;
//    if (position[2] > 180) {
//       position[2] = 180;
//    }
//    servo3.write(position[2]);
//  }
//  else if (mapX > -250 && mapX <= -50 && mode == 1) {
//    position[2] -= 5;
//    if (position[2] < 0) {
//       position[2] = 0;
//    }
//    servo3.write(position[2]);
//  }
//  else if (mapX <= -250 && mode == 1) {
//        position[2] -= 10;
//    if (position[2] < 0) {
//       position[2] = 0;
//    }
//    servo3.write(position[2]);
//  }
//
//  //Change servo
//
//  if (mapY < 50 && mapY > -50){
//
//  }
//  else if (mapY < 250 && mapY >= 50 && mode == 1) {
//    position[3] += 5;
//    if (position[3] > 180) {
//       position[3] = 180;
//    }
//    servo4.write(position[3]);
//  }
//  else if (mapY >= 250 && mode == 1) {
//    position[3] += 10;
//    if (position[3] > 180) {
//       position[3] = 180;
//    }
//    servo4.write(position[3]);
//  }
//  else if (mapY > -250 && mapY <= -50 && mode == 1) {
//    position[3] -= 5;
//    if (position[3] < 0) {
//       position[3] = 0;
//    }
//    servo4.write(position[3]);
//  }
//  else if (mapY <= -250 && mode == 1) {
//        position[3] -= 10;
//    if (position[3] < 0) {
//       position[3] = 0;
//    }
//    servo4.write(position[3]);
//  }
//  
//
//  delay(100);
//  
//}
