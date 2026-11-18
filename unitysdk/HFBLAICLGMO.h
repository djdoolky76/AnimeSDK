#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HFBLAICLGMO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15DA5310)
#define HFBLAICLGMO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15DA5260)
#define HFBLAICLGMO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15DA5080)
#define HFBLAICLGMO__CTOR_OFFSET UNITYSDK_OFFSET(0x15DA5300)

inline static constexpr unsigned int HFBLAICLGMO_TypeDefinitionIndex = 53507;

class HFBLAICLGMO : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* NBFCNDIFJHF; // 0x18
	::UnityEngine::GameObject* EHMLMJKEJMM; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* GANCEGMMNMB; // 0x28
	::FGCOIBFFCHB* AMEEMEPHGEL; // 0x30
	::UnityEngine::GameObject* FICJLJEDNOI; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBLAICLGMO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HFBLAICLGMO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HFBLAICLGMO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBLAICLGMO_KGEBDLGBGNM_OFFSET))(this);
	}
};
