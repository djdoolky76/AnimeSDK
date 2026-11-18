#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Globalization
{
	inline static constexpr unsigned int FormatProvider_Number_NumberBuffer_TypeDefinitionIndex = 6402;

	struct alignas(8) FormatProvider_Number_NumberBuffer
	{
		::System::Int32 precision; // 0x10
		::System::Int32 scale; // 0x14
		::System::Boolean sign; // 0x18
		::System::Byte _padding0[0x7];
		::PVOID overrideDigits; // 0x20
	};
}
