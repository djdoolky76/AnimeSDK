#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_PoseInertializationState_TypeDefinitionIndex = 81239;

	enum class AnimationSubManager_PoseInertializationState : ::System::Int32
	{
		Pending = 1,
		Active = 2,
		Inactive = 0,
	};
}
