#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TriggerSelectionType : ::System::Int32
	{
		None = 0,
		AllDynamic = 1,
		PropInteractionTrigger = 2,
		PropOptionTrigger = 3,
		CustomTrigger = 4,
		HintTrigger = 5,
	};
}
