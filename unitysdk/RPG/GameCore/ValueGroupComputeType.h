#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ValueGroupComputeType : ::System::Int32
	{
		Add = 0,
		Mul = 1,
		Max = 2,
		Min = 3,
		Avg = 4,
	};
}
