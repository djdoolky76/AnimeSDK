#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CGHLDLOGLDC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19A01850)
#define CGHLDLOGLDC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x19A01710)
#define CGHLDLOGLDC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19A014C0)
#define CGHLDLOGLDC__CTOR_OFFSET UNITYSDK_OFFSET(0x19A01840)

inline static constexpr unsigned int CGHLDLOGLDC_TypeDefinitionIndex = 59152;

class CGHLDLOGLDC : public ::GIBMJLOJLKD
{
public:
	::MoleMole::NotificationBadgeEx* JFDOOELFAOA; // 0x18
	::UnityEngine::RectTransform* FOGDDMCKIMH; // 0x20
	::FGCOIBFFCHB* JOMIDKMJJFM; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* GDANPDNHLDC; // 0x30
	::UnityEngine::RectTransform* GDLCCFGKNBD; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* IKEABEFJBGL; // 0x40
	::FGCOIBFFCHB* AJMHGBBKNJO; // 0x48
	::FGCOIBFFCHB* EKELFNAEHJD; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* CHIFHPLPCNN; // 0x60
	::FGCOIBFFCHB* CHCCPCCKJBG; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHLDLOGLDC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CGHLDLOGLDC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHLDLOGLDC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CGHLDLOGLDC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
