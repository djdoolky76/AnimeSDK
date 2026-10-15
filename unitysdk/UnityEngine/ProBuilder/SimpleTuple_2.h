#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	template <typename T1, typename T2>
	struct alignas(8) SimpleTuple_2
	{
		T1 m_Item1; // 0x0
		T2 m_Item2; // 0x0
	};
}
