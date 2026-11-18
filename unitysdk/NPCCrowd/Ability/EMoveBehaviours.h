#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int EMoveBehaviours_TypeDefinitionIndex = 69873;

	enum class EMoveBehaviours : ::System::Int32
	{
		FollowQueue = 1,
		None = 0,
		WaitingSlot = 2,
	};
}
