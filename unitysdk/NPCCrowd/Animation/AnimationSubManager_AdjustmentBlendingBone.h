#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AdjustmentBlendingBone_TypeDefinitionIndex = 81126;

	enum class AnimationSubManager_AdjustmentBlendingBone : ::System::Int32
	{
		Neck = 8,
		LeftHand = 9,
		LeftFoot = 1,
		Spine = 5,
		Spine2 = 7,
		Count = 11,
		Spine1 = 6,
		Root = 0,
		Pelvis = 4,
		Bip001 = 3,
		RightFoot = 2,
		RightHand = 10,
	};
}
