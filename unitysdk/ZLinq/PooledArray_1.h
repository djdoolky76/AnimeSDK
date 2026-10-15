#pragma once
#include "unitysdk/unitysdk.h"

namespace ZLinq
{
	template <typename T>
	struct alignas(8) PooledArray_1
	{
		::Il2CppArray<T>* array; // 0x0
		::System::Int32 size; // 0x0
	};
}
