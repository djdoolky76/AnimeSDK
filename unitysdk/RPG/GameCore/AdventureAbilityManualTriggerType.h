#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AdventureAbilityManualTriggerType : ::System::Int32
	{
		None = 0,
		Free = 1,
		BySummonUnit = 2,
	};
}
