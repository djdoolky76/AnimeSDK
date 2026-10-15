#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class SmartObjectState : ::System::Int32
	{
		Free = 0,
		Occupied = 1,
		Disabled = 2,
	};
}
