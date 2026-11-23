#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define E0C20AD2AF75F4AB_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x3F40980)

inline static constexpr unsigned int E0C20AD2AF75F4AB_TypeDefinitionIndex = 20552;

struct alignas(8) E0C20AD2AF75F4AB
{
	::PVOID A91AF8D985C289AE; // 0x10

	::System::Void E8AF1E0387A100FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E0C20AD2AF75F4AB_E8AF1E0387A100FA_OFFSET))(this);
	}
};
