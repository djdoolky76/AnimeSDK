#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	template <typename T>
	struct alignas(8) TrimmedArray_1
	{
		::Il2CppArray<T>* _instancedArray; // 0x0
	};
}
