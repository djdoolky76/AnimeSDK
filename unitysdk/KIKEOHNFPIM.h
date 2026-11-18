#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KIKEOHNFPIM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15B91F10)
#define KIKEOHNFPIM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15B91E60)
#define KIKEOHNFPIM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15B91C20)
#define KIKEOHNFPIM__CTOR_OFFSET UNITYSDK_OFFSET(0x15B91F00)

inline static constexpr unsigned int KIKEOHNFPIM_TypeDefinitionIndex = 66068;

class KIKEOHNFPIM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* LFNJIDHACHM; // 0x18
	::UnityEngine::RectTransform* IPOLLNPLEPM; // 0x20
	::MoleMole::NotificationBadgeEx* JFDOOELFAOA; // 0x28
	::UnityEngine::RectTransform* KIBOIEBHFOH; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* BPPBINJKHGN; // 0x38
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* MNGIGHPMPKI; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* LKBNFIKOHBM; // 0x50
	::UnityEngine::RectTransform* JIDDCJACLJA; // 0x58
	::FGCOIBFFCHB* OBJMLNLJOJL; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKEOHNFPIM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KIKEOHNFPIM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KIKEOHNFPIM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKEOHNFPIM_KGEBDLGBGNM_OFFSET))(this);
	}
};
