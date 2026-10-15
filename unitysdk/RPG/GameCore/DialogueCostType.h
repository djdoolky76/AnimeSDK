#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class DialogueCostType : ::System::Int32
	{
		None = 0,
		CostItemValue = 1,
		CostItemPercent = 2,
		CostHpMaxPercent = 3,
		CostHpCurrentPercent = 4,
		RemoveRogueAvatarNotInLineup = 5,
		CostHpSpToPercent = 6,
	};
}
