#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	template <typename T>
	struct alignas(8) TrimmedSingleItemArray_1
	{
		T item; // 0x0
	};
}
