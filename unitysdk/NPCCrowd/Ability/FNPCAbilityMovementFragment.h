#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCAbilityMovementFragment_TypeDefinitionIndex = 62581;

	struct alignas(4) FNPCAbilityMovementFragment
	{
		::System::Boolean UseSteering; // 0x10
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 Velocity; // 0x14
		::UnityEngine::Vector3 Force; // 0x20
	};
}
