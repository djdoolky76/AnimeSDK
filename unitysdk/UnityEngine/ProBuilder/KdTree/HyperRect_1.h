#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder::KdTree
{
	template <typename T>
	struct alignas(8) HyperRect_1
	{
		::Il2CppArray<T>* minPoint; // 0x0
		::Il2CppArray<T>* maxPoint; // 0x0
	};
}
