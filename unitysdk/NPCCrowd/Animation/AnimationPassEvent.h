#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationPassEvent_TypeDefinitionIndex = 58251;

	enum class AnimationPassEvent : ::System::Int32
	{
		BeforeInverseKinematics = 400,
		AfterAnimation = 1000,
		BeforeForwardKinematics = 100,
		BeforeAnimation = 0,
		AfterInverseKinematics = 600,
		AfterForwardKinematics = 300,
		ForwardKinematics = 200,
		InverseKinematics = 500,
	};
}
