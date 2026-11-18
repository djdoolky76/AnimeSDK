#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Avatar/FNPCCrowdAvatarAudioCommandFlags.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int FNPCCrowdAvatarAudioDecisionFragment_TypeDefinitionIndex = 72788;

	struct alignas(4) FNPCCrowdAvatarAudioDecisionFragment
	{
		::System::Boolean Valid; // 0x10
		::System::Byte _padding0[0x3];
		::NPCCrowd::Avatar::FNPCCrowdAvatarAudioCommandFlags Flags; // 0x14
		::System::Int32 SpeedPercent; // 0x18
		::System::Single AudioTriggerTime; // 0x1C
	};
}
