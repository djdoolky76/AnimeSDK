#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class DisableBillboardReason : ::System::Int32
	{
		Default = 0,
		PropState = 1,
		MapRotation = 2,
	};
}
