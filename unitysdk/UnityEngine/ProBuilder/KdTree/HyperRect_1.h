#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder::KdTree
{
	inline static constexpr unsigned int HyperRect_1_TypeDefinitionIndex = 38719;

	template <typename T>
	struct alignas(8) HyperRect_1
	{
		::Il2CppArray<T>* minPoint; // 0x0
		::Il2CppArray<T>* maxPoint; // 0x0
	};
}
