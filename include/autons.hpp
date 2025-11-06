#pragma once
#include "pros/adi.hpp"
#include "pros/motors.hpp"
#include "lemlib/chassis/chassis.hpp"
#include "pros/optical.hpp"
#include "pros/rotation.hpp"


// motor constructors
extern pros::Motor Lintake;
extern pros::Motor Uintake;

// pneumatic constructors
extern pros::adi::Pneumatics midGoal;
extern pros::adi::Pneumatics mLoader;

// chassis constructor
extern lemlib::Chassis chassis;

// tasks
extern bool midGoalToggle;
extern bool mLoaderToggle;

// match auton
void rightSide();