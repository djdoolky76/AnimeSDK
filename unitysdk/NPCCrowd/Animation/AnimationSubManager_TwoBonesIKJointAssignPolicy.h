#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_TwoBonesIKJointAssignPolicy_TypeDefinitionIndex = 81251;

	enum class AnimationSubManager_TwoBonesIKJointAssignPolicy : ::System::Int32
	{
		DontCare = 0,
		UseMiddleBone = 1,
		RelativeToEffector = 2,
		ManuallySet = 4,
		RelativeToCenter = 3,
	};
}
