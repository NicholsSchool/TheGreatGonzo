// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
SpeedController* RobotMap::driveTrainLeftDriveMotorOne = NULL;
SpeedController* RobotMap::driveTrainLeftDriveMotorTwo = NULL;
SpeedController* RobotMap::driveTrainRightDriveMotorOne = NULL;
SpeedController* RobotMap::driveTrainRightDriveMotorTwo = NULL;
RobotDrive* RobotMap::driveTrainRobotDriveController = NULL;
Encoder* RobotMap::driveTrainLeftDriveEncoder = NULL;
Encoder* RobotMap::driveTrainRightDriveEncoder = NULL;
SpeedController* RobotMap::throwerThrowerMotorOne = NULL;
SpeedController* RobotMap::throwerThrowerMotorTwo = NULL;
SpeedController* RobotMap::throwerThrowerMotorThree = NULL;
AnalogChannel* RobotMap::throwerThrowerPotentiometer = NULL;
SpeedController* RobotMap::intakeArmIntakeArmMotorOne = NULL;
SpeedController* RobotMap::intakeArmIntakeArmMotorTwo = NULL;
SpeedController* RobotMap::intakeArmRollerMotor = NULL;
DigitalInput* RobotMap::intakeArmFullyRetractedLimitSwitch = NULL;
DigitalInput* RobotMap::intakeArmSafeToShootLimitSwitch = NULL;
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();

	driveTrainLeftDriveMotorOne = new Talon(1, 1);
	lw->AddActuator("DriveTrain", "LeftDriveMotorOne", (Talon*) driveTrainLeftDriveMotorOne);
	
	driveTrainLeftDriveMotorTwo = new Talon(1, 2);
	lw->AddActuator("DriveTrain", "LeftDriveMotorTwo", (Talon*) driveTrainLeftDriveMotorTwo);
	
	driveTrainRightDriveMotorOne = new Talon(1, 3);
	lw->AddActuator("DriveTrain", "RightDriveMotorOne", (Talon*) driveTrainRightDriveMotorOne);
	
	driveTrainRightDriveMotorTwo = new Talon(1, 4);
	lw->AddActuator("DriveTrain", "RightDriveMotorTwo", (Talon*) driveTrainRightDriveMotorTwo);
	
	driveTrainRobotDriveController = new RobotDrive(driveTrainLeftDriveMotorOne, driveTrainLeftDriveMotorTwo,
              driveTrainRightDriveMotorOne, driveTrainRightDriveMotorTwo);
	
	driveTrainRobotDriveController->SetSafetyEnabled(true);
        driveTrainRobotDriveController->SetExpiration(0.1);
        driveTrainRobotDriveController->SetSensitivity(0.5);
        driveTrainRobotDriveController->SetMaxOutput(1.0);
        driveTrainRobotDriveController->SetInvertedMotor(RobotDrive::kFrontLeftMotor, true);
        driveTrainRobotDriveController->SetInvertedMotor(RobotDrive::kRearLeftMotor, true);
        driveTrainRobotDriveController->SetInvertedMotor(RobotDrive::kFrontRightMotor, true);
        driveTrainRobotDriveController->SetInvertedMotor(RobotDrive::kRearRightMotor, true);
	driveTrainLeftDriveEncoder = new Encoder(1, 1, 1, 2, false, Encoder::k4X);
	lw->AddSensor("DriveTrain", "LeftDriveEncoder", driveTrainLeftDriveEncoder);
	driveTrainLeftDriveEncoder->SetDistancePerPulse(1.0);
        driveTrainLeftDriveEncoder->SetPIDSourceParameter(Encoder::kRate);
        driveTrainLeftDriveEncoder->Start();
	driveTrainRightDriveEncoder = new Encoder(1, 3, 1, 4, true, Encoder::k4X);
	lw->AddSensor("DriveTrain", "RightDriveEncoder", driveTrainRightDriveEncoder);
	driveTrainRightDriveEncoder->SetDistancePerPulse(1.0);
        driveTrainRightDriveEncoder->SetPIDSourceParameter(Encoder::kRate);
        driveTrainRightDriveEncoder->Start();
	throwerThrowerMotorOne = new Talon(1, 5);
	lw->AddActuator("Thrower", "ThrowerMotorOne", (Talon*) throwerThrowerMotorOne);
	
	throwerThrowerMotorTwo = new Talon(1, 6);
	lw->AddActuator("Thrower", "ThrowerMotorTwo", (Talon*) throwerThrowerMotorTwo);
	
	throwerThrowerMotorThree = new Talon(1, 7);
	lw->AddActuator("Thrower", "ThrowerMotorThree", (Talon*) throwerThrowerMotorThree);
	
	throwerThrowerPotentiometer = new AnalogChannel(1, 5);
	lw->AddSensor("Thrower", "ThrowerPotentiometer", throwerThrowerPotentiometer);
	
	intakeArmIntakeArmMotorOne = new Talon(1, 8);
	lw->AddActuator("IntakeArm", "IntakeArmMotorOne", (Talon*) intakeArmIntakeArmMotorOne);
	
	intakeArmIntakeArmMotorTwo = new Talon(1, 9);
	lw->AddActuator("IntakeArm", "IntakeArmMotorTwo", (Talon*) intakeArmIntakeArmMotorTwo);
	
	intakeArmRollerMotor = new Talon(1, 10);
	lw->AddActuator("IntakeArm", "RollerMotor", (Talon*) intakeArmRollerMotor);
	
	intakeArmFullyRetractedLimitSwitch = new DigitalInput(1, 5);
	lw->AddSensor("IntakeArm", "FullyRetractedLimitSwitch", intakeArmFullyRetractedLimitSwitch);
	
	intakeArmSafeToShootLimitSwitch = new DigitalInput(1, 6);
	lw->AddSensor("IntakeArm", "SafeToShootLimitSwitch", intakeArmSafeToShootLimitSwitch);
	

	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
