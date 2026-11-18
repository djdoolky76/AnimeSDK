#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_PoseInertializationSpace_TypeDefinitionIndex = 81128;

	enum class AnimationSubManager_PoseInertializationSpace : ::System::Int32
	{
		LocalSpace = 0,
		WorldRotation = 2,
		WorldSpace = 1,
	};
}
