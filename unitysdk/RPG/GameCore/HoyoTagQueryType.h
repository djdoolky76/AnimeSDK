#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class HoyoTagQueryType : ::System::Int32
	{
		MatchAny = 1,
		MatchAnyExact = 2,
		MatchAll = 3,
		MatchAllExact = 4,
	};
}
