#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Linq
{
	inline static constexpr unsigned int Buffer_1_TypeDefinitionIndex = 3182;

	template <typename T>
	struct alignas(8) Buffer_1
	{
		::Il2CppArray<T>* items; // 0x0
		::System::Int32 count; // 0x0
	};
}
