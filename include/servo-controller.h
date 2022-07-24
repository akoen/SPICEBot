#ifndef SERVO_CONTROLLER
#define SERVO_CONTROLLER

#include <Arduino.h>
#include <Servo.h>
#include "config.h"
namespace Servos {
    extern const int claw_close_angle;  // deg
    extern const int claw_part_open_angle;  // so it doesn't hit box when lifted
    extern const int claw_full_open_angle;
    extern const int claw_bomb_detect_angle;
    
    extern const int arm_bomb_detect_angle;
    extern const int arm_lowered_angle;
    extern const int arm_lifted_angle;

    extern Servo clawServo;
    extern Servo armServo;
    extern Servo bridgeServo;
    extern Servo boxServo;

    extern bool pinsConfiged;

    /**
     * Configures all servo pins if they have yet been configured.
     */
    void configServoPins();

    /**
     * Claw picks up and drops treasure into storage. Handles bomb detection
     * Starting from arm lifted, claw in part open position and ends in
     * this position.
     */
    void collectTreasure();

}

#endif