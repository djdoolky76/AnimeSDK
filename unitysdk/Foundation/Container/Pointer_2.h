#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int Pointer_2_TypeDefinitionIndex = 9054;

	template <typename T1, typename T2>
	struct alignas(8) Pointer_2
	{
		::PVOID _buffer; // 0x0
		::System::Int64 Stride; // 0x0
	};
}
