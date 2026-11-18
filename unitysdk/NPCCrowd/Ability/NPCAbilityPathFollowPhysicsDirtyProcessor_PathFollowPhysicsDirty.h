#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityPathFollowPhysicsDirtyProcessor_PathFollowPhysicsDirty_TypeDefinitionIndex = 85607;

	struct alignas(4) NPCAbilityPathFollowPhysicsDirtyProcessor_PathFollowPhysicsDirty
	{
		::System::UInt32 EntityId; // 0x10
		::System::Boolean Enable; // 0x14
	};
}
