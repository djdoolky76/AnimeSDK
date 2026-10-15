#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	enum class MonopolySwitchState : ::System::Int32
	{
		None = 0,
		WaitForSwitch = 1,
		Switching = 2,
		Switched = 3,
	};
}
