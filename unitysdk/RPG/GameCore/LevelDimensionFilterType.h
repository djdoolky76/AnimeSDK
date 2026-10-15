#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class LevelDimensionFilterType : ::System::Int32
	{
		None = 0,
		All = 1,
		Expression = 2,
	};
}
