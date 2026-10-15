#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class PatrolType : ::System::Int32
	{
		Loop = 0,
		Reverse = 1,
		RandomGraph = 2,
		FullRandom = 3,
	};
}
