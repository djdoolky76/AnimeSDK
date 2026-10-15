#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ActivityFarmMultipleDropType : ::System::Int32
	{
		None = 0,
		VersionLimited = 1,
		PlayerReturn = 2,
		Gameplay = 3,
	};
}
