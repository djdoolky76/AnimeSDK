#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }

#define GMGIPDKEJAJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14912A80)
#define GMGIPDKEJAJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x149129F0)
#define GMGIPDKEJAJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x149128B0)
#define GMGIPDKEJAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14912A70)

inline static constexpr unsigned int GMGIPDKEJAJ_TypeDefinitionIndex = 64536;

class GMGIPDKEJAJ : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGIPDKEJAJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GMGIPDKEJAJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GMGIPDKEJAJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGIPDKEJAJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
