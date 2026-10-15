#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ModifierStateFilter : ::System::Int32
	{
		AliveOrToBeAdded = 0,
		Alive = 1,
		None = 2,
	};
}
