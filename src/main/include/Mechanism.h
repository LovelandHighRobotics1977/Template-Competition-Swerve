// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <Headers.h>

/**
 * Represents a mechanism
*/
class Mechanism {
    public:
        Mechanism();

        /**
			* Takes A Do and does Something with it
			*
			* @param Do The inputted Do
		*/
        void DoSomething(double Do);

    private:
        // Declare all mechanism variables, motors, sensors, ect here

        double Something;
};