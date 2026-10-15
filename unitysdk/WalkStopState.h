#pragma once
#include "unitysdk/unitysdk.h"
	enum class WalkStopState : ::System::Int32
	{
		eIdleState = 0,
		eWalkState = 1,
		eWalkStopLState = 2,
		eWalkStopRState = 3,
		eWalkStopCount = 4,
	};
