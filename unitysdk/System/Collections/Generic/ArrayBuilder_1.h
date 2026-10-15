#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic
{
	template <typename T>
	struct alignas(8) ArrayBuilder_1
	{
		::Il2CppArray<T>* _array; // 0x0
		::System::Int32 _count; // 0x0
	};
}
