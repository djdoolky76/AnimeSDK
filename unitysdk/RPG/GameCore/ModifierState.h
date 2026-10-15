#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ModifierState : ::System::Int32
	{
		ToBeAdded = 0,
		Alive = 1,
		ToBeRemoved = 2,
		Removed = 3,
	};
}
