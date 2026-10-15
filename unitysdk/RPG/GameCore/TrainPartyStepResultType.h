#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TrainPartyStepResultType : ::System::Int32
	{
		TrainPartyStepResultNone = 0,
		TrainPartyStepResultMission = 1,
		TrainPartyStepResultStatic = 2,
		TrainPartyStepResultDynamicConfig = 3,
	};
}
