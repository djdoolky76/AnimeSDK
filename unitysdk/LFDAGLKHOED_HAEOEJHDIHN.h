#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LFDAGLKHOED_HAEOEJHDIHN_JMOPEIPPCEP_OFFSET UNITYSDK_OFFSET(0x1A605610)
#define LFDAGLKHOED_HAEOEJHDIHN_PPNACLHAEEN_OFFSET UNITYSDK_OFFSET(0x1A605600)
#define LFDAGLKHOED_HAEOEJHDIHN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6055F0)

inline static constexpr unsigned int LFDAGLKHOED_HAEOEJHDIHN_TypeDefinitionIndex = 53714;

class LFDAGLKHOED_HAEOEJHDIHN : public ::System::Object
{
public:
	::System::Boolean PCIEHDPJIDE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDAGLKHOED_HAEOEJHDIHN__CTOR_OFFSET))(this);
	}

	::System::Boolean PPNACLHAEEN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDAGLKHOED_HAEOEJHDIHN_PPNACLHAEEN_OFFSET))(this);
	}

	::System::Void JMOPEIPPCEP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDAGLKHOED_HAEOEJHDIHN_JMOPEIPPCEP_OFFSET))(this);
	}
};
