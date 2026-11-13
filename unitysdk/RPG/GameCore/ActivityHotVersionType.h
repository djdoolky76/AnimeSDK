#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHotVersionType_TypeDefinitionIndex = 11732;

	enum class ActivityHotVersionType : ::System::Int32
	{
		None = 0,
		CycleScore = 1,
		ChallengeMemory = 2,
		ChallengeStory = 3,
		ChallengeBoss = 4,
		Trial = 5,
		Mainline = 6,
	};
}
