#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E77FCC84701E7DA2.h"
#include "unitysdk/System/ValueType.h"

#define EA107DD4ECB556DB_BAF1A5AD9A18D2CF_OFFSET UNITYSDK_OFFSET(0x3F40900)

inline static constexpr unsigned int EA107DD4ECB556DB_TypeDefinitionIndex = 20500;

struct alignas(4) EA107DD4ECB556DB
{
	::E77FCC84701E7DA2 AD13C6A9CD32769F; // 0x10

	::System::Void BAF1A5AD9A18D2CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EA107DD4ECB556DB_BAF1A5AD9A18D2CF_OFFSET))(this);
	}
};
