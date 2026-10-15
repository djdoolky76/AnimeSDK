#pragma once
#include "unitysdk/unitysdk.h"

namespace ZLinq::Linq
{
	template <typename T>
	struct alignas(8) FromArray_1
	{
		::Il2CppArray<T>* _source_P; // 0x0
		::System::Int32 index; // 0x0
	};
}
