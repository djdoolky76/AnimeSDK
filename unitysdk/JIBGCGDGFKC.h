#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JIBGCGDGFKC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13845170)
#define JIBGCGDGFKC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13844FD0)
#define JIBGCGDGFKC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13844D60)
#define JIBGCGDGFKC__CTOR_OFFSET UNITYSDK_OFFSET(0x13845160)

inline static constexpr unsigned int JIBGCGDGFKC_TypeDefinitionIndex = 66271;

class JIBGCGDGFKC : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* HKKGAIBNKPK; // 0x18
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x20
	::FGCOIBFFCHB* DPNLLKMJMMB; // 0x28
	::FGCOIBFFCHB* KHNJKKDCJIO; // 0x30
	::FGCOIBFFCHB* MPMBCEGFGPI; // 0x38
	::FGCOIBFFCHB* MLDHFJKCBBD; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x50
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x58
	::MoleMole::NotificationBadgeEx* JFDOOELFAOA; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIBGCGDGFKC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JIBGCGDGFKC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JIBGCGDGFKC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIBGCGDGFKC_KGEBDLGBGNM_OFFSET))(this);
	}
};
