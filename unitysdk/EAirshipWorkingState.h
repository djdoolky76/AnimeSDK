#pragma once
#include "unitysdk/unitysdk.h"
	enum class EAirshipWorkingState : ::System::Int32
	{
		Floating = 0,
		Working = 1,
		WorkingToFloating = 2,
		FloatingToWorking = 3,
	};
