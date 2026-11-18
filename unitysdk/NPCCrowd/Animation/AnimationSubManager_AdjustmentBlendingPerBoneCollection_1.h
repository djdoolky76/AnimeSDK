#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AdjustmentBlendingPerBoneCollection_1_TypeDefinitionIndex = 81150;

	template <typename T>
	struct alignas(8) AnimationSubManager_AdjustmentBlendingPerBoneCollection_1
	{
		T Root; // 0x0
		T LeftFoot; // 0x0
		T RightFoot; // 0x0
		T Bip001; // 0x0
		T Pelvis; // 0x0
		T Spine; // 0x0
		T Spine1; // 0x0
		T Spine2; // 0x0
		T Neck; // 0x0
		T LeftHand; // 0x0
		T RightHand; // 0x0
	};
}
