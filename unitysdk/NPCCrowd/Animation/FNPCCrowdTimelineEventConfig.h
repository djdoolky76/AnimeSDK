#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int FNPCCrowdTimelineEventConfig_TypeDefinitionIndex = 44414;

	struct alignas(4) FNPCCrowdTimelineEventConfig
	{
		::System::Boolean MaxFrame; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 Frame; // 0x14
		::System::Int32 ManagedEventIndex; // 0x18
	};
}
