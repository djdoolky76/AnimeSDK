#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int FNPCCrowdTimelineSnapshot_TypeDefinitionIndex = 65713;

	struct alignas(4) FNPCCrowdTimelineSnapshot
	{
		::System::UInt32 EntityId; // 0x10
		::System::Int32 ClipId; // 0x14
		::System::Int32 ClipConfigIndex; // 0x18
		::System::Single NormalizedTime; // 0x1C
		::System::Single Speed; // 0x20
		::System::Single AnimLength; // 0x24
		::System::UInt32 FrameId; // 0x28
	};
}
