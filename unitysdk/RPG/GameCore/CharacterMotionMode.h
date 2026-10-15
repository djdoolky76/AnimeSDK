#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class CharacterMotionMode : ::System::Int32
	{
		Default = 0,
		ForceWalk = 1,
		ForceRun = 2,
		ForbidFastRun = 3,
		ForbidWalk = 4,
	};
}
