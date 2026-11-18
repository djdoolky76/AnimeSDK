#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AdjustmentBlendingTransformData_1_TypeDefinitionIndex = 81147;

	template <typename T>
	struct alignas(8) AnimationSubManager_AdjustmentBlendingTransformData_1
	{
		T Angle; // 0x0
		T TranslationX; // 0x0
		T TranslationY; // 0x0
		T TranslationZ; // 0x0
	};
}
