#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int EAttractorSlotState_TypeDefinitionIndex = 77801;

	enum class EAttractorSlotState : ::System::Int32
	{
		InValid = 0,
		Valid = 1,
		Occupied = 3,
		Claimed = 2,
	};
}
