#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationScheduler_PhaseEvent_TypeDefinitionIndex = 81196;

	enum class AnimationSubManager_AnimationScheduler_PhaseEvent : ::System::Int32
	{
		BeforePostLateUpdate = 8,
		AfterLateUpdate = 7,
		Count = 10,
		AfterPreUpdate = 1,
		BeforeUpdate = 2,
		BeforePostUpdate = 4,
		AfterUpdate = 3,
		BeforeLateUpdate = 6,
		AfterPostUpdate = 5,
		AfterPostLateUpdate = 9,
		BeforePreUpdate = 0,
	};
}
