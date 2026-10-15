#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class DiceCombatInsertAbilityPriority : ::System::Int32
	{
		Highest = -1000000,
		DCIAP_StrikeBack = -500000,
		Default = 0,
		Lowest = 1000000,
	};
}
