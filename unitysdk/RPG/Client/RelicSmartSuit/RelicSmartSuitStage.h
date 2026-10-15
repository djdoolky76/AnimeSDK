#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::RelicSmartSuit
{
	enum class RelicSmartSuitStage : ::System::Int32
	{
		None = 0,
		SelfPlanStage = 1,
		SystemPlanStage = 2,
		HighlyPlanStage = 4,
		CustomPlanStage = 8,
		AllStages = 15,
	};
}
