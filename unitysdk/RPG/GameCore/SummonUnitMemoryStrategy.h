#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class SummonUnitMemoryStrategy : ::System::Int32
	{
		NotCache = 0,
		ClearOnSwitchMap = 1,
		NotClear = 2,
	};
}
