#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RogueCellMarkType : ::System::Int32
	{
		None = 0,
		Enhance = 1,
		Buff = 2,
		Heteromorphosis = 3,
		Miracle = 5,
		Double = 6,
		Choice = 7,
	};
}
