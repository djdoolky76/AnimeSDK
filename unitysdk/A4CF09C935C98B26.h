#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEB15D0F6A26C506_F16640C7A7FF8A7F.h"
#include "unitysdk/System/ValueType.h"

#define A4CF09C935C98B26_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x3F409C0)

inline static constexpr unsigned int A4CF09C935C98B26_TypeDefinitionIndex = 20543;

struct alignas(8) A4CF09C935C98B26
{
	::PVOID A0934395BFC267AB; // 0x10
	::FEB15D0F6A26C506_F16640C7A7FF8A7F FEEAB22B933EF1AB; // 0x18

	::System::Void E8AF1E0387A100FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A4CF09C935C98B26_E8AF1E0387A100FA_OFFSET))(this);
	}
};
