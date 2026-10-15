#pragma once
#include "unitysdk/unitysdk.h"

#define SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_NUMBERBUFFER_GET_DIGITS_OFFSET UNITYSDK_OFFSET(0x94D0)

namespace System::Globalization
{
	inline static constexpr unsigned int FormatProvider_Number_NumberBuffer_TypeDefinitionIndex = 3847;

	struct alignas(8) FormatProvider_Number_NumberBuffer
	{
		::System::Int32 precision; // 0x10
		::System::Int32 scale; // 0x14
		::System::Boolean sign; // 0x18
		::System::Byte _padding0[0x7];
		::PVOID overrideDigits; // 0x20
		::PVOID get_digits()
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_FORMATPROVIDER_NUMBER_NUMBERBUFFER_GET_DIGITS_OFFSET))(this);
		}

	};
}
