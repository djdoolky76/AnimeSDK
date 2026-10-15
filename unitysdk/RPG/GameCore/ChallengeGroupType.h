#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ChallengeGroupType : ::System::Int32
	{
		None = 0,
		Memory = 1,
		Story = 2,
		Boss = 3,
	};
}
