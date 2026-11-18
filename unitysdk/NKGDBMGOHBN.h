#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

#define NKGDBMGOHBN_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0xE1A7D00)
#define NKGDBMGOHBN_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0xE1A7E00)
#define NKGDBMGOHBN__CTOR_OFFSET UNITYSDK_OFFSET(0xE1A7D90)

inline static constexpr unsigned int NKGDBMGOHBN_TypeDefinitionIndex = 84643;

class NKGDBMGOHBN : public ::PKMJPMFCNBK
{
public:
	::System::Boolean LOLDHKIHLIB; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKGDBMGOHBN__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKGDBMGOHBN_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKGDBMGOHBN_KHJELIBOECB_OFFSET))(this);
	}
};
