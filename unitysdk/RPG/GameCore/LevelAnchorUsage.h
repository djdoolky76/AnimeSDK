#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class LevelAnchorUsage : ::System::Int32
	{
		Unspecified = 0,
		Camera = 1,
		LookAtCamera = 2,
		Actor = 3,
		GamePlay = 4,
		Coin40 = 5,
	};
}
