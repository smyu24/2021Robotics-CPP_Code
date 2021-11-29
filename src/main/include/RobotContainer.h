// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/Command.h>

#include <Constants.h>
#include "commands/ExampleCommand.h"
#include "subsystems/ExampleSubsystem.h"

#include "frc/Joystick.h"

#include "frc/PWMTalonSRX.h"
#include "frc/SpeedControllerGroup.h"
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

  Command* GetAutonomousCommand();

 private:
  frc::Joystick j_control_1{1}; // Creates a joystick on port 1
  frc::Joystick j_control_2{2}; // Creates a joystick on port 2
  frc::XboxController x_control_1{3}; // Creates an XboxController on port 3

  
  frc::PWMTalonSRX m_frontLeft{1};
  frc::PWMTalonSRX m_rearLeft{2};
  frc::SpeedControllerGroup m_left{m_frontLeft, m_rearLeft};

  frc::PWMTalonSRX m_frontRight{3};
  frc::PWMTalonSRX m_rearRight{4};
  frc::SpeedControllerGroup m_right{m_frontRight, m_rearRight};

  frc::DifferentialDrive m_robotDrive{m_left, m_right};
  ExampleSubsystem m_subsystem;
  ExampleCommand m_autonomousCommand;

  void ConfigureButtonBindings();
};
