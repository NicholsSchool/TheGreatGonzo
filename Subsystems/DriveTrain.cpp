// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.




#include "DriveTrain.h"
#include "../Robotmap.h"

DriveTrain::DriveTrain() : Subsystem("DriveTrain") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	leftDriveMotorOne = RobotMap::driveTrainLeftDriveMotorOne;
	leftDriveMotorTwo = RobotMap::driveTrainLeftDriveMotorTwo;
	rightDriveMotorOne = RobotMap::driveTrainRightDriveMotorOne;
	rightDriveMotorTwo = RobotMap::driveTrainRightDriveMotorTwo;
	robotDriveController = RobotMap::driveTrainRobotDriveController;
	leftDriveEncoder = RobotMap::driveTrainLeftDriveEncoder;
	rightDriveEncoder = RobotMap::driveTrainRightDriveEncoder;
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}
    
void DriveTrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SetDefaultCommand(new TankDrive());
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

