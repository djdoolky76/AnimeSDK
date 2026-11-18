#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LICBHCFJLNF.h"

class COICIIHCHGO;

#define KHHCIFLPKKE_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1A2CB1F0)
#define KHHCIFLPKKE_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x1A2CB280)
#define KHHCIFLPKKE_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x1A2CB100)
#define KHHCIFLPKKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2CB1E0)

inline static constexpr unsigned int KHHCIFLPKKE_TypeDefinitionIndex = 74959;

class KHHCIFLPKKE : public ::LICBHCFJLNF
{
public:
	::COICIIHCHGO* DKIEOGCOBKD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHCIFLPKKE__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHCIFLPKKE_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHCIFLPKKE_ANEOCOIFDDJ_OFFSET))(this);
	}

	static ::KHHCIFLPKKE* BBPCBEEHALC()
	{
		return ((::KHHCIFLPKKE*(*)())((::PBYTE)hIl2Cpp + KHHCIFLPKKE_BBPCBEEHALC_OFFSET))();
	}
};
