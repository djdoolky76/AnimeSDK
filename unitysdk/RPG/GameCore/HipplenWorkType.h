#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class HipplenWorkType : ::System::Int32
	{
		None = 0,
		MiniGame = 1,
		Interaction = 2,
		Incident = 3,
		Performance = 4,
	};
}
