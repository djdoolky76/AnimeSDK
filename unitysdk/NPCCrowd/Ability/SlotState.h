#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int SlotState_TypeDefinitionIndex = 40284;

	enum class SlotState : ::System::Int32
	{
		Occupied = 2,
		Releasing = 3,
		Occupying = 1,
		Released = 0,
	};
}
