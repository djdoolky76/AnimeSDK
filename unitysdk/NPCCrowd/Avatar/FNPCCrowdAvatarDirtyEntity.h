#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Avatar/FNPCCrowdAvatarDirtyFlags.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int FNPCCrowdAvatarDirtyEntity_TypeDefinitionIndex = 57127;

	struct alignas(4) FNPCCrowdAvatarDirtyEntity
	{
		::System::UInt32 EntityId; // 0x10
		::NPCCrowd::Avatar::FNPCCrowdAvatarDirtyFlags Flags; // 0x14
	};
}
