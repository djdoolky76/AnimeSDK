#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	enum class SmartObjectState : ::System::Int32
	{
		Free = 0,
		Occupied = 1,
		Disabled = 2,
	};
}
