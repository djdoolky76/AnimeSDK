#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEB15D0F6A26C506_F16640C7A7FF8A7F.h"
#include "unitysdk/System/ValueType.h"

#define BA617F6EBFA2935E_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x3F40860)

inline static constexpr unsigned int BA617F6EBFA2935E_TypeDefinitionIndex = 20498;

struct alignas(8) BA617F6EBFA2935E
{
	::PVOID A11284D43E9E1E82; // 0x10
	::FEB15D0F6A26C506_F16640C7A7FF8A7F FEC821F840AAFFF6; // 0x18

	::System::Void E8AF1E0387A100FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BA617F6EBFA2935E_E8AF1E0387A100FA_OFFSET))(this);
	}
};
