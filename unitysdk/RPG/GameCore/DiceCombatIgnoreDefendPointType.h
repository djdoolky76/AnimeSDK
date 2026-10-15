#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class DiceCombatIgnoreDefendPointType : ::System::Int32
	{
		None = 0,
		All = 1,
		Partial = 2,
	};
}
