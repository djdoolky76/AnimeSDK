#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

class OLHCPDPPIIH;

#define PODMGKJGCHO_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x1C1E35E0)
#define PODMGKJGCHO_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x1C1E36E0)
#define PODMGKJGCHO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1E3670)

inline static constexpr unsigned int PODMGKJGCHO_TypeDefinitionIndex = 84268;

class PODMGKJGCHO : public ::PKMJPMFCNBK
{
public:
	::OLHCPDPPIIH* FJNOAAONPLG; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PODMGKJGCHO__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PODMGKJGCHO_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PODMGKJGCHO_KHJELIBOECB_OFFSET))(this);
	}
};
