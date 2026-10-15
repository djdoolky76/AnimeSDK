#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ChimeraPhaseConditionType : ::System::Int32
	{
		None = 0,
		HPGreater = 1,
		HPLess = 2,
	};
}
