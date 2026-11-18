#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIInputFieldEx; }

#define ANFCANAFIAJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12D0C3D0)
#define ANFCANAFIAJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12D0C2E0)
#define ANFCANAFIAJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12D0C140)
#define ANFCANAFIAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12D0C3C0)

inline static constexpr unsigned int ANFCANAFIAJ_TypeDefinitionIndex = 47015;

class ANFCANAFIAJ : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x18
	::MoleMole::UIInputFieldEx* NLAKLMGLFCI; // 0x20
	::MoleMole::UIGeneralButtonController* JOANKKMEODM; // 0x28
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x30
	::MoleMole::UIGeneralButtonController* BKBMFOJCMOJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANFCANAFIAJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ANFCANAFIAJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ANFCANAFIAJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANFCANAFIAJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
