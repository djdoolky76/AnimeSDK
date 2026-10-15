#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class GroupInvisibleReason : ::System::Int32
	{
		GameplayLock = 1,
		EraRegionState = 2,
		FiveDimGame = 3,
	};
}
