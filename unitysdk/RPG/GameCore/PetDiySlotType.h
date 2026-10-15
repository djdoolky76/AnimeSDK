#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class PetDiySlotType : ::System::Int32
	{
		Default = 0,
		Patrol = 1,
		TeamFollowCurve = 2,
		RandomWander = 3,
	};
}
