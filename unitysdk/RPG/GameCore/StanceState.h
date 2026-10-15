#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class StanceState : ::System::Int32
	{
		Normal = 0,
		Break = 1,
		RedStance = 2,
		RedStanceBreak = 3,
	};
}
