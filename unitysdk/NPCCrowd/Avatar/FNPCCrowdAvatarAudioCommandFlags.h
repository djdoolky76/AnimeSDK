#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int FNPCCrowdAvatarAudioCommandFlags_TypeDefinitionIndex = 56214;

	enum class FNPCCrowdAvatarAudioCommandFlags : ::System::Int32
	{
		None = 0,
		AudioTrigger = 1,
		AudioRtpcChanged = 2,
	};
}
