#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int ConstPointer_1_TypeDefinitionIndex = 9014;

	template <typename T>
	struct alignas(8) ConstPointer_1
	{
		::PVOID _buffer; // 0x0
		::System::Int64 Stride; // 0x0
	};
}
