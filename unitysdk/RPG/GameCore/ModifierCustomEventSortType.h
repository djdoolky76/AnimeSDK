#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ModifierCustomEventSortType : ::System::Int32
	{
		Undefine = 0,
		Shuffle = 1,
		Phase1Priority = 2,
		EnterBattlePriority = 3,
	};
}
