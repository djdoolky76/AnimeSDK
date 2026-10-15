#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class MatchThreeOpponentType : ::System::Int32
	{
		Invalid = 0,
		Self = 1,
		Player = 2,
		AI = 3,
	};
}
