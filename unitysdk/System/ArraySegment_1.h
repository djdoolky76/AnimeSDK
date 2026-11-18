#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System
{
	inline static constexpr unsigned int ArraySegment_1_TypeDefinitionIndex = 185;

	template <typename T>
	struct alignas(8) ArraySegment_1
	{
		::Il2CppArray<T>* _array; // 0x0
		::System::Int32 _offset; // 0x0
		::System::Int32 _count; // 0x0
	};
}
