#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ChenLingFesItemPredicateState : ::System::Int32
	{
		None = 0,
		IsFirst = 1,
		IsLast = 2,
		ContainsStartCell = 3,
		ContainsEndCell = 4,
		ContainsOtherItem = 5,
		ContainsOtherItemThroughout = 6,
	};
}
