#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdLookAtIKDirtyFlags.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int FNPCCrowdLookAtIKDirtyEntity_TypeDefinitionIndex = 45948;

	struct alignas(4) FNPCCrowdLookAtIKDirtyEntity
	{
		::System::UInt32 EntityId; // 0x10
		::NPCCrowd::Animation::FNPCCrowdLookAtIKDirtyFlags Flags; // 0x14
	};
}
