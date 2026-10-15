#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class LevelNavNodeInnerConditionType : ::System::Int32
	{
		FSV = 0,
		FloorConstValue = 1,
		GroupProperty = 2,
	};
}
