#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class FreezeMovementReason : ::System::Int32
	{
		FreezeFeature = 1,
		TimeLock = 2,
		FreezeByPlayInteraction = 4,
		FreezeDie = 8,
	};
}
