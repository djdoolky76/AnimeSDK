#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FCD40D41720E11F0_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x3F40A00)

inline static constexpr unsigned int FCD40D41720E11F0_TypeDefinitionIndex = 20572;

struct alignas(8) FCD40D41720E11F0
{
	::PVOID A91AF8D985C289AE; // 0x10

	::System::Void E8AF1E0387A100FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCD40D41720E11F0_E8AF1E0387A100FA_OFFSET))(this);
	}
};
