#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCD40D41720E11F0.h"
#include "unitysdk/System/ValueType.h"

#define AB0C6540C22840A0_BAF1A5AD9A18D2CF_OFFSET UNITYSDK_OFFSET(0x3F40A00)

inline static constexpr unsigned int AB0C6540C22840A0_TypeDefinitionIndex = 20582;

struct alignas(4) AB0C6540C22840A0
{
	::FCD40D41720E11F0 AD13C6A9CD32769F; // 0x10

	::System::Void BAF1A5AD9A18D2CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AB0C6540C22840A0_BAF1A5AD9A18D2CF_OFFSET))(this);
	}
};
