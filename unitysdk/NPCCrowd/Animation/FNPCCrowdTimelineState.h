#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int FNPCCrowdTimelineState_TypeDefinitionIndex = 80039;

	struct alignas(4) FNPCCrowdTimelineState
	{
		::System::Boolean Initialized; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 ClipId; // 0x14
		::System::Int32 ClipConfigIndex; // 0x18
		::System::Single PlayNormalizedTime; // 0x1C
		::System::Int32 LastEventIdx; // 0x20
		::System::Int32 ReadyZoneCursor; // 0x24
		::System::Int32 ActiveZoneCount; // 0x28
	};
}
