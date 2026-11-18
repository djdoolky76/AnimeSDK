#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPFDADBJBLI.h"

#define CFOCMIHBDIB_CHEFLPNGHGC_OFFSET UNITYSDK_OFFSET(0x16A23390)
#define CFOCMIHBDIB_EEPCBJNEMAJ_OFFSET UNITYSDK_OFFSET(0x16A233C0)
#define CFOCMIHBDIB_FCNCEAFAEOO_OFFSET UNITYSDK_OFFSET(0x16A233A0)
#define CFOCMIHBDIB_GEBLBCFGGBB_OFFSET UNITYSDK_OFFSET(0x16A233B0)
#define CFOCMIHBDIB_IHGGJCNKEDG_OFFSET UNITYSDK_OFFSET(0x16A233E0)
#define CFOCMIHBDIB_LADPNKHKIDP_OFFSET UNITYSDK_OFFSET(0x16A233D0)
#define CFOCMIHBDIB__CTOR_OFFSET UNITYSDK_OFFSET(0x16A233F0)

inline static constexpr unsigned int CFOCMIHBDIB_TypeDefinitionIndex = 63538;

class CFOCMIHBDIB : public ::HPFDADBJBLI
{
public:
	::System::Boolean _AEHPCBFNBNA_k__BackingField; // 0x78
	::System::Boolean _PDALGKDNLDO_k__BackingField; // 0x79
	::System::Boolean _BDHBKNDCGLL_k__BackingField; // 0x7A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFOCMIHBDIB__CTOR_OFFSET))(this);
	}

	::System::Boolean CHEFLPNGHGC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFOCMIHBDIB_CHEFLPNGHGC_OFFSET))(this);
	}

	::System::Void FCNCEAFAEOO(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CFOCMIHBDIB_FCNCEAFAEOO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean GEBLBCFGGBB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFOCMIHBDIB_GEBLBCFGGBB_OFFSET))(this);
	}

	::System::Void EEPCBJNEMAJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CFOCMIHBDIB_EEPCBJNEMAJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LADPNKHKIDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFOCMIHBDIB_LADPNKHKIDP_OFFSET))(this);
	}

	::System::Void IHGGJCNKEDG(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CFOCMIHBDIB_IHGGJCNKEDG_OFFSET))(this, EGEGIMGMJHN);
	}
};
