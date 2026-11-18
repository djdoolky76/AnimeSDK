#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorStateFlag_TypeDefinitionIndex = 82185;

	enum class AttractorStateFlag : ::System::Int32
	{
		InValid = 1,
		Claimed = 4,
		Occupied = 8,
		Valid = 2,
	};
}
