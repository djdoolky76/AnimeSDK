#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ModifierInterrupt : ::System::Int32
	{
		Unknow = 0,
		None = 2,
		Negative = 4,
		Positive = 8,
	};
}
