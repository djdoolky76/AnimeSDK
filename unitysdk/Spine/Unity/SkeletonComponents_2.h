#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonComponents_2_TypeDefinitionIndex = 38152;

	template <typename T1, typename T2>
	struct alignas(8) SkeletonComponents_2
	{
		T1 skeletonRenderer; // 0x0
		T2 skeletonAnimation; // 0x0
	};
}
