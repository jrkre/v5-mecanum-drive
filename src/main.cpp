/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       jrkre                                                     */
/*    Created:      Thu Feb 02 2023                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// frontRight           motor         9               
// frontLeft            motor         10              
// backRight            motor         19              
// backLeft             motor         20              
// Controller1          controller                    
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  
  while (true){
    int axis3 = Controller1.Axis3.position(); // y1
    int axis4 = Controller1.Axis4.position(); // x1
    int axis1 = Controller1.Axis1.position(); // x2


    // frontRight.setVelocity(axis3 - axis1 - axis4, percent);
    // frontLeft.setVelocity(axis3 - axis1 + axis4, percent);
    // backRight.setVelocity(axis3 + axis1 +axis4, percent);
    // backLeft.setVelocity(axis3 + axis1 - axis4, percent);
    frontRight.spin(reverse, axis3 - axis1 - axis4, percent);
    frontLeft.spin(forward, axis3 - axis1 + axis4, percent);
    backRight.spin(reverse, axis3 + axis1 + axis4, percent);
    backLeft.spin(forward, axis3 - axis1 - axis4, percent);

    Brain.Screen.setCursor(10,10);
    Brain.Screen.print(axis4);
    Brain.Screen.clearScreen();

  }
}
