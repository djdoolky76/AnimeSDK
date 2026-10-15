#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	template <typename T>
	struct alignas(8) RuntimeType_ListBuilder_1
	{
		::Il2CppArray<T>* _items; // 0x0
		T _item; // 0x0
		::System::Int32 _count; // 0x0
		::System::Int32 _capacity; // 0x0
	};
}
