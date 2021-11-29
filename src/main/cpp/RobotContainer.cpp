// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "RobotContainer.h"
#include "frc/XboxController.h"
RobotContainer::RobotContainer() : m_autonomousCommand(&m_subsystem) {
  // Initialize all of your commands and subsystems here

  // Configure the button bindings
  ConfigureButtonBindings();
}

void RobotContainer::ConfigureButtonBindings() {
  // Configure your button bindings here
  
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
