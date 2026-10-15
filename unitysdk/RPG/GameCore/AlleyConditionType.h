#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AlleyConditionType : ::System::Int32
	{
		None = 0,
		FinishMainMission = 1,
		AlleyCoin = 2,
		TriggerTiming = 3,
		TakeMainMission = 4,
		AlleyOrderFinish = 5,
	};
}
