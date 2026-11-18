#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class PHGIJHEPAOH_FFCONGKEKPD;

#define PHGIJHEPAOH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A48F0)
#define PHGIJHEPAOH__CTOR_OFFSET UNITYSDK_OFFSET(0x358B00)

inline static constexpr unsigned int PHGIJHEPAOH_TypeDefinitionIndex = 28188;

struct alignas(8) PHGIJHEPAOH
{
	::PHGIJHEPAOH_FFCONGKEKPD* GJBHEJGENMI; // 0x10

	::System::Void _ctor(::PHGIJHEPAOH_FFCONGKEKPD* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::PHGIJHEPAOH_FFCONGKEKPD*))((::PBYTE)hIl2Cpp + PHGIJHEPAOH__CTOR_OFFSET))(this, GJBHEJGENMI);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHGIJHEPAOH_DISPOSE_OFFSET))(this);
	}
};
