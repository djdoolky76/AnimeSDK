#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class InteractCostType : ::System::Int32
	{
		None = 0,
		CostItem = 1,
		CheckItem = 2,
	};
}
