#ifndef GLOBALS_H_
#define GLOBALS_H_

//#define PID_SENSOR_SCALE    1
#define PID_MOTOR_SCALE     -1
#define PID_DRIVE_MAX       127
#define PID_DRIVE_MIN     (-127)
#define PID_INTEGRAL_LIMIT  50
#define PI 3.1415
#define MOTOR_AMOUNT 9
#define PIDSensorType encoderGet(encoder1)//analogRead(potentiometer)
#define CW 1
#define CCW -1

extern int goalChainBar, goalLift, goalMoGo;
//sensor Values
extern int FourBarMAX, FourBarMIN;
extern int LiftMAX, LiftMIN;
extern int MoGoMAX, MoGoMIN;

extern volatile bool toggle;
volatile bool MoGoAuton;
volatile bool MoGoToggle;
volatile bool slewRunning;

extern float circum, velocity;
float avg(float val1, float val2);
float getSign(float check);
struct robot{
   float Xpos;
   float Ypos;
   float deg;
};
struct maintainPosition{
   bool isRunning, armGoalIsSet;
   int threshold;
   int error, integral, derivative, lastError;//could be floats
   int currentPos;
   int requestedValue;//could be float
   //, kI, kD;
};
#define SensorValue encoderGet
//quad1 encoderInit (1,2,false)

#endif
