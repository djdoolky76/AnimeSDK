#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int ENPCCPUAnimatorFlags_TypeDefinitionIndex = 65075;

	enum class ENPCCPUAnimatorFlags : ::System::Byte
	{
		ControllerMask = 1,
		IsMoving = 4,
		None = 0,
		HasAnimation = 2,
		IsTurning = 8,
	};
}
