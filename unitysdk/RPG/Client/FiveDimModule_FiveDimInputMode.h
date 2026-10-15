#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class FiveDimModule_FiveDimInputMode : ::System::Int32
	{
		CircleJoyStickByPolarDeadZone = 0,
		CircleJoyStickButton = 1,
		UIJoyStick = 2,
		DirectionButton = 3,
	};
}
