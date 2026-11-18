#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int FNPCCrowdTimelineClipConfig_TypeDefinitionIndex = 42260;

	struct alignas(4) FNPCCrowdTimelineClipConfig
	{
		::System::Int32 EnterEventStart; // 0x10
		::System::Int32 EnterEventCount; // 0x14
		::System::Int32 ExitEventStart; // 0x18
		::System::Int32 ExitEventCount; // 0x1C
		::System::Int32 NormalEventStart; // 0x20
		::System::Int32 NormalEventCount; // 0x24
		::System::Int32 ZoneStart; // 0x28
		::System::Int32 ZoneCount; // 0x2C
	};
}
