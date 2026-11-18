#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdLookAtIKCommandType.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int FNPCCrowdLookAtIKCommand_TypeDefinitionIndex = 64200;

	struct alignas(4) FNPCCrowdLookAtIKCommand
	{
		::System::Int32 CrowdIndex; // 0x10
		::System::UInt32 EntityId; // 0x14
		::System::Int32 TargetType; // 0x18
		::System::Int32 TargetParam; // 0x1C
		::System::Int32 TargetGeneration; // 0x20
		::NPCCrowd::Animation::FNPCCrowdLookAtIKCommandType Type; // 0x24
	};
}
