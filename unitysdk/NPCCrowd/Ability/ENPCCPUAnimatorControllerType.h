#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int ENPCCPUAnimatorControllerType_TypeDefinitionIndex = 78891;

	enum class ENPCCPUAnimatorControllerType : ::System::Byte
	{
		StateMachine = 1,
		PathFollow = 0,
		Bits = 1,
		Mask = 1,
	};
}
