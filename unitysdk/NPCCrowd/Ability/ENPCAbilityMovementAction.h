#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int ENPCAbilityMovementAction_TypeDefinitionIndex = 49448;

	enum class ENPCAbilityMovementAction : ::System::Int32
	{
		Freeze = 2,
		Move = 1,
		MotionMove = 5,
		Stand = 0,
		Animate = 4,
		Turn = 3,
	};
}
