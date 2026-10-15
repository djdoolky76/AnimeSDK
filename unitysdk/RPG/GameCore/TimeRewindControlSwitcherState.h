#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TimeRewindControlSwitcherState : ::System::Int32
	{
		Lock = 0,
		Close = 1,
		Open = 2,
	};
}
