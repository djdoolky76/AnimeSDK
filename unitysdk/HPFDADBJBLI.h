#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDPCOFANLGK.h"

#define HPFDADBJBLI_EEPCBJNEMAJ_OFFSET UNITYSDK_OFFSET(0xEB760F0)
#define HPFDADBJBLI_GEBLBCFGGBB_OFFSET UNITYSDK_OFFSET(0xEB760E0)
#define HPFDADBJBLI_IHGGJCNKEDG_OFFSET UNITYSDK_OFFSET(0xEB76110)
#define HPFDADBJBLI_LADPNKHKIDP_OFFSET UNITYSDK_OFFSET(0xEB76100)
#define HPFDADBJBLI__CTOR_OFFSET UNITYSDK_OFFSET(0xEB76120)

inline static constexpr unsigned int HPFDADBJBLI_TypeDefinitionIndex = 78384;

class HPFDADBJBLI : public ::KDPCOFANLGK
{
public:
	::System::Boolean _AEHPCBFNBNA_k__BackingField; // 0x70
	::System::Boolean _BDHBKNDCGLL_k__BackingField; // 0x71

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPFDADBJBLI__CTOR_OFFSET))(this);
	}

	::System::Boolean GEBLBCFGGBB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPFDADBJBLI_GEBLBCFGGBB_OFFSET))(this);
	}

	::System::Void EEPCBJNEMAJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HPFDADBJBLI_EEPCBJNEMAJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LADPNKHKIDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPFDADBJBLI_LADPNKHKIDP_OFFSET))(this);
	}

	::System::Void IHGGJCNKEDG(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HPFDADBJBLI_IHGGJCNKEDG_OFFSET))(this, EGEGIMGMJHN);
	}
};
