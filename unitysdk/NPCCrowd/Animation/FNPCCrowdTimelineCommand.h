#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdTimelineCommandType.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int FNPCCrowdTimelineCommand_TypeDefinitionIndex = 86536;

	struct alignas(4) FNPCCrowdTimelineCommand
	{
		::System::Int32 CrowdIndex; // 0x10
		::System::UInt32 EntityId; // 0x14
		::NPCCrowd::Animation::FNPCCrowdTimelineCommandType Type; // 0x18
		::System::Int32 ManagedIndex; // 0x1C
		::System::Single From; // 0x20
		::System::Single To; // 0x24
		::System::Single StateLength; // 0x28
		::System::Int32 EventTriggerMode; // 0x2C
	};
}
