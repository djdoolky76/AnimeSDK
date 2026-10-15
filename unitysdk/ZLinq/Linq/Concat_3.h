#pragma once
#include "unitysdk/unitysdk.h"

namespace ZLinq::Linq
{
	template <typename T1, typename T2, typename T3>
	struct alignas(8) Concat_3
	{
		T1 first; // 0x0
		T2 second; // 0x0
		::System::Boolean firstCompleted; // 0x0
	};
}
