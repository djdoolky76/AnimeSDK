#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder::KdTree
{
	template <typename T1, typename T2>
	struct alignas(8) ItemPriority_2
	{
		T1 Item; // 0x0
		T2 Priority; // 0x0
	};
}
