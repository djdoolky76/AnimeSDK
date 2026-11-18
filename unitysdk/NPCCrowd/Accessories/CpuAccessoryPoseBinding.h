#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int CpuAccessoryPoseBinding_TypeDefinitionIndex = 75411;

	struct alignas(4) CpuAccessoryPoseBinding
	{
		::System::Int32 FollowIndex; // 0x10
		::System::Int32 BoneIndex; // 0x14
	};
}
