#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AIStatus : ::System::Int32
	{
		Dummy = 0,
		Escape = 1,
		Attack = 2,
		Attracted = 3,
		Max = 4,
	};
}
