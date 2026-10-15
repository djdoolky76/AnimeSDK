#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ModifierInfectType : ::System::Int32
	{
		Current = 0,
		Initial = 1,
		Override = 2,
		StackIncrement = 3,
	};
}
