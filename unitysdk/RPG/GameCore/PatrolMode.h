#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class PatrolMode : ::System::Int32
	{
		SameTask = 0,
		PerWaypointTask = 1,
	};
}
