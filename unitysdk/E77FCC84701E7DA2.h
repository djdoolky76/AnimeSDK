#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEB15D0F6A26C506_F16640C7A7FF8A7F.h"
#include "unitysdk/System/ValueType.h"

#define E77FCC84701E7DA2_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x3F40900)

inline static constexpr unsigned int E77FCC84701E7DA2_TypeDefinitionIndex = 20563;

struct alignas(8) E77FCC84701E7DA2
{
	::PVOID BDE74A1E3933BDA2; // 0x10
	::FEB15D0F6A26C506_F16640C7A7FF8A7F FEC821F840AAFFF6; // 0x18

	::System::Void E8AF1E0387A100FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E77FCC84701E7DA2_E8AF1E0387A100FA_OFFSET))(this);
	}
};
