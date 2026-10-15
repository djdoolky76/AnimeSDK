#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class CharacterMotionFlag : ::System::Int32
	{
		None = 0,
		Walk = 1,
		Run = 2,
		FastRun = 3,
	};
}
