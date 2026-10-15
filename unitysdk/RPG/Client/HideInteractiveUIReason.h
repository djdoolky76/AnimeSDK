#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class HideInteractiveUIReason : ::System::Int32
	{
		InPerformance = 0,
		InPropInteract = 1,
		InPuzzlePerformance = 2,
	};
}
