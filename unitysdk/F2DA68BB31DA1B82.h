#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define F2DA68BB31DA1B82_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x3F40940)

inline static constexpr unsigned int F2DA68BB31DA1B82_TypeDefinitionIndex = 20584;

struct alignas(8) F2DA68BB31DA1B82
{
	::PVOID F2C622C0CC806E52; // 0x10

	::System::Void E8AF1E0387A100FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F2DA68BB31DA1B82_E8AF1E0387A100FA_OFFSET))(this);
	}
};
