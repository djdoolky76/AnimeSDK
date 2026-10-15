#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AdvPauseMovementFloatingAndRotationReason : ::System::Int32
	{
		Freeze = 1,
		TimeLock = 2,
		FreezeDie = 4,
	};
}
