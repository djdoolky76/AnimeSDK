#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageTrackTypeFlags_TypeDefinitionIndex = 44635;

	enum class MontageTrackTypeFlags : ::System::Byte
	{
		AnimTrack = 1,
		SequenceTrack = 2,
		None = 0,
	};
}
