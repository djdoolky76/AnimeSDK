#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int FNPCCrowdTimelineZoneConfig_TypeDefinitionIndex = 47276;

	struct alignas(4) FNPCCrowdTimelineZoneConfig
	{
		::System::Boolean MaxStartFrame; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 StartFrame; // 0x14
		::System::Boolean MaxEndFrame; // 0x18
		::System::Byte _padding1[0x3];
		::System::Int32 EndFrame; // 0x1C
		::System::Boolean NeedUpdate; // 0x20
		::System::Byte _padding2[0x3];
		::System::Int32 ManagedZoneIndex; // 0x24
	};
}
