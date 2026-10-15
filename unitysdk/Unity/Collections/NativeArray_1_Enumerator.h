#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace Unity::Collections
{
	template <typename T>
	struct alignas(8) NativeArray_1_Enumerator
	{
		::Unity::Collections::NativeArray_1<T> m_Array; // 0x0
		::System::Int32 m_Index; // 0x0
	};
}
