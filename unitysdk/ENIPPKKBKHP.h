#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

#define ENIPPKKBKHP_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x10F47210)
#define ENIPPKKBKHP_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x10F47310)
#define ENIPPKKBKHP__CTOR_OFFSET UNITYSDK_OFFSET(0x10F472A0)

inline static constexpr unsigned int ENIPPKKBKHP_TypeDefinitionIndex = 59032;

class ENIPPKKBKHP : public ::PKMJPMFCNBK
{
public:
	::System::Single IEPPOCDAMDC; // 0x80
	::System::Int32 CPNDLDPGKNB; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIPPKKBKHP__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIPPKKBKHP_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIPPKKBKHP_KHJELIBOECB_OFFSET))(this);
	}
};
