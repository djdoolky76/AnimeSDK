#pragma once
#include "unitysdk/unitysdk.h"

namespace ZLinq
{
	template <typename T1, typename T2>
	struct alignas(8) ValueEnumerator_2
	{
		T1 enumerator; // 0x0
		T2 current; // 0x0
	};
}
