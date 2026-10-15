#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeSlice_1_TypeDefinitionIndex = 3990;

	template <typename T>
	struct alignas(8) NativeSlice_1
	{
		::PVOID m_Buffer; // 0x0
		::System::Int32 m_Stride; // 0x0
		::System::Int32 m_Length; // 0x0
	};
}
