#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Avatar/FNPCCrowdAvatarAudioCommandFlags.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int FNPCCrowdAvatarAudioCommand_TypeDefinitionIndex = 55053;

	struct alignas(4) FNPCCrowdAvatarAudioCommand
	{
		::System::Int32 CrowdIndex; // 0x10
		::NPCCrowd::Avatar::FNPCCrowdAvatarAudioCommandFlags Flags; // 0x14
	};
}
