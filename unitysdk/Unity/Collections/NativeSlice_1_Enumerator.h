#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeSlice_1_Enumerator_TypeDefinitionIndex = 3991;

	template <typename T>
	struct alignas(8) NativeSlice_1_Enumerator
	{
		::Unity::Collections::NativeSlice_1<T> m_Array; // 0x0
		::System::Int32 m_Index; // 0x0
	};
}
