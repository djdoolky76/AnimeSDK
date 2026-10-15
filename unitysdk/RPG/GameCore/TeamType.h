#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TeamType : ::System::Int32
	{
		TeamUnknow = 0,
		TeamLight = 1,
		TeamDark = 2,
		TeamNeutral = 3,
		TeamNPC = 4,
		Count = 5,
	};
}
