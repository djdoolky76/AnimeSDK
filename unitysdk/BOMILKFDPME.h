#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class FILNFMCNCFE;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BOMILKFDPME_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1509B9E0)
#define BOMILKFDPME_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1509B8E0)
#define BOMILKFDPME_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1509B650)
#define BOMILKFDPME__CTOR_OFFSET UNITYSDK_OFFSET(0x1509B9D0)

inline static constexpr unsigned int BOMILKFDPME_TypeDefinitionIndex = 50941;

class BOMILKFDPME : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* BAPGIBLMHPJ; // 0x18
	::FGCOIBFFCHB* NFCIPDGCFLP; // 0x20
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* KLIHHCHCJMG; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* ALLGGPFBOPG; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* KFBJHIGMPIC; // 0x48
	::FGCOIBFFCHB* PGAPPEEDCAO; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* DGJNCIFBOJN; // 0x58
	::FILNFMCNCFE* CALJMMPPAOE; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* PBCOACBFEAM; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMILKFDPME__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BOMILKFDPME_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMILKFDPME_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BOMILKFDPME_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
