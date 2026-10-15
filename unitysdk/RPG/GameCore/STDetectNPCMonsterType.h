#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class STDetectNPCMonsterType : ::System::Int32
	{
		None = 0,
		CurrentPlayerLockTarget = 1,
		CurrentPlayerNearest = 2,
		OwnerNearest = 3,
	};
}
