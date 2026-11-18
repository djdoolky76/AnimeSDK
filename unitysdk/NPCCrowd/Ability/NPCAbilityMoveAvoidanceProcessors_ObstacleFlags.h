#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityMoveAvoidanceProcessors_ObstacleFlags_TypeDefinitionIndex = 92855;

	enum class NPCAbilityMoveAvoidanceProcessors_ObstacleFlags : ::System::Byte
	{
		IsMoving = 2,
		None = 0,
		CanAvoid = 1,
	};
}
