#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation::CPUStateMachine
{
	inline static constexpr unsigned int AnimationFlags_TypeDefinitionIndex = 82220;

	enum class AnimationFlags : ::System::Byte
	{
		AdjustmentBlending = 16,
		Looping = 1,
		MultipleClips = 8,
		StripBipMotion = 32,
		PhaseMatching = 4,
		None = 0,
		RootMotion = 2,
	};
}
