#include "RobotContainer.h"

#include "frc2/JoystickButton"
#include "frc/Joystick.h" // header file needed to configure joystick
#include "frc/XboxController.h" // header file needed to configure Xbox controller
#include "frc/Timer.h" // Timer objects measure accumulated time in seconds. The timer object functions like a stopwatch. It can be started, stopped, and cleared. When the timer is running its value counts up in seconds. When stopped, the timer holds the current value. The implementation simply records the time when started and subtracts the current time whenever the value is requested.


RobotContainer::RobotContainer() : m_autonomousCommand(&m_subsystem) {
  // Initialize all of your commands and subsystems here
  
  ConfigureButtonBindings(); // calling button bind function 
}

void RobotContainer::ConfigureButtonBindings() { // calls for button bindings for the joystick (which will then go to robot.cpp)

  //frc2::JoystickButton exampleButton(&j_control_1, 3); // Creates a new JoystickButton object for button 1 on exampleStick
  //// Binds an ExampleCommand to be scheduled when the trigger of the example joystick is pressed
  //exampleButton.WhenPressed(ExampleCommand());
  
  //exampleButton
    // Binds a FooCommand to be scheduled when the `X` button of the driver gamepad is pressed
    //.WhenPressed(FooCommand())
    // Binds a BarCommand to be scheduled when that same button is released
    //.WhenReleased(BarCommand());
}

frc2::Command* RobotContainer::GetAutonomousCommand() {
  // An example command will be run in autonomous
  return &m_autonomousCommand;
}


void RobotContainer::ButtonInput(){
  switch (){
    case 5:

      break;

    default:

  }

  return;
}