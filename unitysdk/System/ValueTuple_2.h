#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	template <typename T1, typename T2>
	struct alignas(8) ValueTuple_2
	{
		T1 Item1; // 0x0
		T2 Item2; // 0x0
	};
}
