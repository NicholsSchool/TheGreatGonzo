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
SpeedController* RobotMap::theDriveTrainLeftDriveMotorOne = NULL;
SpeedController* RobotMap::theDriveTrainLeftDriveMotorTwo = NULL;
SpeedController* RobotMap::theDriveTrainRightDriveMotorOne = NULL;
SpeedController* RobotMap::theDriveTrainRightDriveMotorTwo = NULL;
RobotDrive* RobotMap::theDriveTrainRobotDriveController = NULL;
Encoder* RobotMap::theDriveTrainLeftDriveEncoder = NULL;
Encoder* RobotMap::theDriveTrainRightDriveEncoder = NULL;
SpeedController* RobotMap::throwerArmThrowerMotorOne = NULL;
SpeedController* RobotMap::throwerArmThrowerMotorTwo = NULL;
SpeedController* RobotMap::throwerArmThrowerMotorThree = NULL;
AnalogChannel* RobotMap::throwerArmThrowerPotentiometer = NULL;
SpeedController* RobotMap::intakeArmRollerMotor = NULL;
DigitalInput* RobotMap::intakeArmFullyRetractedLimitSwitch = NULL;
DigitalInput* RobotMap::intakeArmSafeToShootLimitSwitch = NULL;
SpeedController* RobotMap::intakeArmIntakeArmMotorOne = NULL;
SpeedController* RobotMap::intakeArmIntakeArmMotorTwo = NULL;
RobotDrive* RobotMap::intakeArmWinchMotorController = NULL;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();
	theDriveTrainLeftDriveMotorOne = new Talon(1, 1);
	lw->AddActuator("TheDriveTrain", "LeftDriveMotorOne", (Talon*) theDriveTrainLeftDriveMotorOne);
	
	theDriveTrainLeftDriveMotorTwo = new Talon(1, 2);
	lw->AddActuator("TheDriveTrain", "LeftDriveMotorTwo", (Talon*) theDriveTrainLeftDriveMotorTwo);
	
	theDriveTrainRightDriveMotorOne = new Talon(1, 3);
	lw->AddActuator("TheDriveTrain", "RightDriveMotorOne", (Talon*) theDriveTrainRightDriveMotorOne);
	
	theDriveTrainRightDriveMotorTwo = new Talon(1, 4);
	lw->AddActuator("TheDriveTrain", "RightDriveMotorTwo", (Talon*) theDriveTrainRightDriveMotorTwo);
	
	theDriveTrainRobotDriveController = new RobotDrive(theDriveTrainLeftDriveMotorOne, theDriveTrainLeftDriveMotorTwo,
              theDriveTrainRightDriveMotorOne, theDriveTrainRightDriveMotorTwo);
	
	theDriveTrainRobotDriveController->SetSafetyEnabled(true);
        theDriveTrainRobotDriveController->SetExpiration(0.1);
        theDriveTrainRobotDriveController->SetSensitivity(0.5);
        theDriveTrainRobotDriveController->SetMaxOutput(1.0);
        theDriveTrainRobotDriveController->SetInvertedMotor(RobotDrive::kFrontLeftMotor, true);
        theDriveTrainRobotDriveController->SetInvertedMotor(RobotDrive::kRearLeftMotor, true);
        theDriveTrainRobotDriveController->SetInvertedMotor(RobotDrive::kFrontRightMotor, true);
        theDriveTrainRobotDriveController->SetInvertedMotor(RobotDrive::kRearRightMotor, true);
	theDriveTrainLeftDriveEncoder = new Encoder(1, 1, 1, 2, false, Encoder::k4X);
	lw->AddSensor("TheDriveTrain", "LeftDriveEncoder", theDriveTrainLeftDriveEncoder);
	theDriveTrainLeftDriveEncoder->SetDistancePerPulse(1.0);
        theDriveTrainLeftDriveEncoder->SetPIDSourceParameter(Encoder::kRate);
        theDriveTrainLeftDriveEncoder->Start();
	theDriveTrainRightDriveEncoder = new Encoder(1, 3, 1, 4, true, Encoder::k4X);
	lw->AddSensor("TheDriveTrain", "RightDriveEncoder", theDriveTrainRightDriveEncoder);
	theDriveTrainRightDriveEncoder->SetDistancePerPulse(1.0);
        theDriveTrainRightDriveEncoder->SetPIDSourceParameter(Encoder::kRate);
        theDriveTrainRightDriveEncoder->Start();
	throwerArmThrowerMotorOne = new Talon(1, 5);
	lw->AddActuator("ThrowerArm", "ThrowerMotorOne", (Talon*) throwerArmThrowerMotorOne);
	
	throwerArmThrowerMotorTwo = new Talon(1, 6);
	lw->AddActuator("ThrowerArm", "ThrowerMotorTwo", (Talon*) throwerArmThrowerMotorTwo);
	
	throwerArmThrowerMotorThree = new Talon(1, 7);
	lw->AddActuator("ThrowerArm", "ThrowerMotorThree", (Talon*) throwerArmThrowerMotorThree);
	
	throwerArmThrowerPotentiometer = new AnalogChannel(1, 1);
	lw->AddSensor("ThrowerArm", "ThrowerPotentiometer", throwerArmThrowerPotentiometer);
	
	intakeArmRollerMotor = new Talon(1, 10);
	lw->AddActuator("IntakeArm", "RollerMotor", (Talon*) intakeArmRollerMotor);
	
	intakeArmFullyRetractedLimitSwitch = new DigitalInput(1, 5);
	lw->AddSensor("IntakeArm", "FullyRetractedLimitSwitch", intakeArmFullyRetractedLimitSwitch);
	
	intakeArmSafeToShootLimitSwitch = new DigitalInput(1, 6);
	lw->AddSensor("IntakeArm", "SafeToShootLimitSwitch", intakeArmSafeToShootLimitSwitch);
	
	intakeArmIntakeArmMotorOne = new Talon(1, 8);
	lw->AddActuator("IntakeArm", "IntakeArmMotorOne", (Talon*) intakeArmIntakeArmMotorOne);
	
	intakeArmIntakeArmMotorTwo = new Talon(1, 9);
	lw->AddActuator("IntakeArm", "IntakeArmMotorTwo", (Talon*) intakeArmIntakeArmMotorTwo);
	
	intakeArmWinchMotorController = new RobotDrive(intakeArmIntakeArmMotorOne, intakeArmIntakeArmMotorTwo);
	
	intakeArmWinchMotorController->SetSafetyEnabled(true);
        intakeArmWinchMotorController->SetExpiration(0.1);
        intakeArmWinchMotorController->SetSensitivity(0.5);
        intakeArmWinchMotorController->SetMaxOutput(1.0);
        intakeArmWinchMotorController->SetInvertedMotor(RobotDrive::kRearRightMotor, true);        
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
