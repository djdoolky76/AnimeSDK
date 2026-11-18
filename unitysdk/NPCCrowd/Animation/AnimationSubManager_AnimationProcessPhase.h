#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationProcessPhase_TypeDefinitionIndex = 81142;

	enum class AnimationSubManager_AnimationProcessPhase : ::System::Int32
	{
		Update = 1,
		Count = 5,
		PostLateUpdate = 4,
		LateUpdate = 3,
		PreUpdate = 0,
		PostUpdate = 2,
	};
}
