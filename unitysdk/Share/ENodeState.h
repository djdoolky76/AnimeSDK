#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ENodeState_TypeDefinitionIndex = 9351;

	enum class ENodeState : ::System::Int16
	{
		Unstable = 10,
		EnumCount = 12,
		BrightenOnlyVisible = 9,
		Brighten = 6,
		Finished = 3,
		Locked = 1,
		Door = 5,
		All = 0,
		Unlocked = 2,
		Target = 8,
		Empty = 11,
		Guide = 7,
		ShowEvent = 4,
	};
}
