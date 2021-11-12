// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.
#pragma once

#include <frc2/command/Command.h>

// including (importing) header files that are in the folder (directory) "commands"
#include "commands/ExampleCommand.h"

// including (importing) header files that are in the folder (directory) "subsystems"
#include "subsystems/ExampleSubsystem.h"
#include "subsystems/Drive_Control.h"

/**
 * This class is where the bulk of the robot should be declared.  Since
 * Command-based is a "declarative" paradigm, very little robot logic should
 * actually be handled in the {@link Robot} periodic methods (other than the
 * scheduler calls).  Instead, the structure of the robot (including subsystems,
 * commands, and button mappings) should be declared here.
 */
class RobotContainer {
 public:
  RobotContainer();

  frc2::Command* GetAutonomousCommand();

 private:
  frc::Joystick j_control_1{1}; // Creates a joystick on port 1
  frc::Joystick j_control_2{2}; // Creates a joystick on port 2
  frc::XboxController x_control_1{3}; // Creates an XboxController on port 3

  /*
  frc::PWMSparkMax m_frontLeft{1};
  frc::PWMSparkMax m_rearLeft{2};
  frc::SpeedControllerGroup m_left{m_frontLeft, m_rearLeft};

  frc::PWMSparkMax m_frontRight{3};
  frc::PWMSparkMax m_rearRight{4};
  frc::SpeedControllerGroup m_right{m_frontRight, m_rearRight};

  frc::DifferentialDrive m_robotDrive{m_left, m_right};

  frc::Encoder m_leftEncoder{1, 2};
  frc::Encoder m_rightEncoder{3, 4};
  frc::AnalogInput m_rangefinder{6};
  frc::AnalogGyro m_gyro{1};
  */
  /*
  The j_control variables signifys the joystick controllers, then the controller number of the type. e.g j_control_2 is joystick controller two
  The x_control_1 signifys the xbox controllers, then the controllor number of the type. e.g x_control_2 is xbox controller one
  */

  // The robot's subsystems and commands are defined here...
  ExampleSubsystem m_subsystem;
  ExampleCommand m_autonomousCommand;

  void ConfigureButtonBindings();
  void ButtonInput();
};
