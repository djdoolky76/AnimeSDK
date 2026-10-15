#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	template <typename T1, typename T2, typename T3>
	struct alignas(8) ValueTuple_3
	{
		T1 Item1; // 0x0
		T2 Item2; // 0x0
		T3 Item3; // 0x0
	};
}
