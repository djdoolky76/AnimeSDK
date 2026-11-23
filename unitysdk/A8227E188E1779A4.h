#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEB15D0F6A26C506_F16640C7A7FF8A7F.h"
#include "unitysdk/System/ValueType.h"

#define A8227E188E1779A4_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x3F43C60)

inline static constexpr unsigned int A8227E188E1779A4_TypeDefinitionIndex = 20604;

struct alignas(8) A8227E188E1779A4
{
	::PVOID B0699A5C353D6853; // 0x10
	::FEB15D0F6A26C506_F16640C7A7FF8A7F FEEAB22B933EF1AB; // 0x18

	::System::Void E8AF1E0387A100FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A8227E188E1779A4_E8AF1E0387A100FA_OFFSET))(this);
	}
};
