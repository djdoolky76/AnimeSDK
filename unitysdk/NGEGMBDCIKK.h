#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NGEGMBDCIKK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE73A880)
#define NGEGMBDCIKK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xE73A7D0)
#define NGEGMBDCIKK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE73A5D0)
#define NGEGMBDCIKK__CTOR_OFFSET UNITYSDK_OFFSET(0xE73A870)

inline static constexpr unsigned int NGEGMBDCIKK_TypeDefinitionIndex = 72495;

class NGEGMBDCIKK : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* HBDEBGDBCDO; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* LDBAKIKPLDP; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* NKPLAJOMKPD; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x38
	::LGINJIKKBJA* OEEDEBIOPBL; // 0x40
	::MoleMole::NotificationBadgeEx* LHOADKMDIDG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEGMBDCIKK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NGEGMBDCIKK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NGEGMBDCIKK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEGMBDCIKK_KGEBDLGBGNM_OFFSET))(this);
	}
};
