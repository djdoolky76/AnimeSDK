#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class EMatchAIState : ::System::Int32
	{
		Drive = 0,
		ChaseDelay = 1,
		Chase = 2,
		SprintYield = 3,
	};
}
