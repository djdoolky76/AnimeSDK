#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int Pointer_1_TypeDefinitionIndex = 8853;

	template <typename T>
	struct alignas(8) Pointer_1
	{
		::PVOID _buffer; // 0x0
		::System::Int64 Stride; // 0x0
	};
}
