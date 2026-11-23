#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEB15D0F6A26C506_F16640C7A7FF8A7F.h"
#include "unitysdk/System/ValueType.h"

#define BDAEC238CAB3304C_BAF1A5AD9A18D2CF_OFFSET UNITYSDK_OFFSET(0x3F43BB0)

inline static constexpr unsigned int BDAEC238CAB3304C_TypeDefinitionIndex = 20589;

struct alignas(8) BDAEC238CAB3304C
{
	::PVOID ED0C1130590A0CC9; // 0x10
	::FEB15D0F6A26C506_F16640C7A7FF8A7F E37CD5C40C5E2277; // 0x18

	::System::Void BAF1A5AD9A18D2CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDAEC238CAB3304C_BAF1A5AD9A18D2CF_OFFSET))(this);
	}
};
