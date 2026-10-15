#pragma once
#include "unitysdk/unitysdk.h"

namespace ZLinq::Internal
{
	template <typename T>
	struct alignas(8) ValueQueue_1
	{
		::Il2CppArray<T>* items; // 0x0
		::System::Int32 head; // 0x0
		::System::Int32 tail; // 0x0
		::System::Int32 size; // 0x0
	};
}
