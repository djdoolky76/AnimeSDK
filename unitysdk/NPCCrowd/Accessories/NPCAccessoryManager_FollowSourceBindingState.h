#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Accessories/CpuAccessoryPoseBinding.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryManager_FollowSourceBindingState_TypeDefinitionIndex = 52993;

	struct alignas(4) NPCAccessoryManager_FollowSourceBindingState
	{
		::System::UInt32 OwnerEntityId; // 0x10
		::NPCCrowd::Accessories::CpuAccessoryPoseBinding CpuBinding; // 0x14
	};
}
