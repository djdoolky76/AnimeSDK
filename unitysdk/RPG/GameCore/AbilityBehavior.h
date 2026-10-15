#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AbilityBehavior : ::System::Int32
	{
		None = 0,
		SkipCheckLogicState = 1,
	};
}
