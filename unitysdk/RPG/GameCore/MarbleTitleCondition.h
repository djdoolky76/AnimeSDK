#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class MarbleTitleCondition : ::System::Int32
	{
		None = 0,
		Max = 1,
		Min = 2,
		Equal = 3,
		EqualOrGreater = 4,
		First = 5,
	};
}
