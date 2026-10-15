#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TeamFormationSortingRule : ::System::Int32
	{
		None = 0,
		Edge = 1,
		LeftEdge = 2,
		RightEdge = 3,
	};
}
