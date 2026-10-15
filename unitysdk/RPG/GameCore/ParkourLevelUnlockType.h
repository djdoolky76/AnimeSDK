#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ParkourLevelUnlockType : ::System::Int32
	{
		None = 0,
		FinishSubMission = 1,
		FinishLevel = 2,
	};
}
