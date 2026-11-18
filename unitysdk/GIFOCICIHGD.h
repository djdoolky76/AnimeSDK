#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

#define GIFOCICIHGD_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x11DB0060)
#define GIFOCICIHGD_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x11DB0160)
#define GIFOCICIHGD__CTOR_OFFSET UNITYSDK_OFFSET(0x11DB00F0)

inline static constexpr unsigned int GIFOCICIHGD_TypeDefinitionIndex = 90878;

class GIFOCICIHGD : public ::PKMJPMFCNBK
{
public:
	::System::Boolean CDCKLODICFI; // 0x80
	::System::Boolean CFGFBNMEFHK; // 0x81

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFOCICIHGD__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFOCICIHGD_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFOCICIHGD_KHJELIBOECB_OFFSET))(this);
	}
};
