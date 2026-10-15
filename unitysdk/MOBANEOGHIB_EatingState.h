#pragma once
#include "unitysdk/unitysdk.h"
	enum class MOBANEOGHIB_EatingState : ::System::Int32
	{
		Eating = 0,
		AfterEating = 1,
		WaitEvent = 2,
		EatComplete = 3,
		Paying = 4,
		Leave = 5,
		Waiting = 6,
	};
