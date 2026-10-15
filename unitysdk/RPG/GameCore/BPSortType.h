#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class BPSortType : ::System::Int32
	{
		Stack = 0,
		Queue = 1,
		SpecialFirstStack = 2,
	};
}
