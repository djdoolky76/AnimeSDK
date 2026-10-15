#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class DiceCombatValueOperation : ::System::Int32
	{
		Set = 0,
		Add = 1,
		Sub = 2,
		Multiply = 3,
		Divide = 4,
	};
}
