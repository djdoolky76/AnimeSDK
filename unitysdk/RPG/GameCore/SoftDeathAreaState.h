#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class SoftDeathAreaState : ::System::Int32
	{
		None = 0,
		Decelerating = 1,
		Accelerating = 2,
	};
}
