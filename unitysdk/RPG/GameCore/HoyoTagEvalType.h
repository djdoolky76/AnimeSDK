#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class HoyoTagEvalType : ::System::Int32
	{
		HasAll = 0,
		HasAny = 1,
		HasAllExact = 2,
		HasAnyExact = 3,
		NotHasAll = 4,
		NotHasAny = 5,
		NotHasAllExact = 6,
		NotHasAnyExact = 7,
	};
}
