#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MKEBKDOKNLK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16C932D0)
#define MKEBKDOKNLK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16C93220)
#define MKEBKDOKNLK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16C93000)
#define MKEBKDOKNLK__CTOR_OFFSET UNITYSDK_OFFSET(0x16C932C0)

inline static constexpr unsigned int MKEBKDOKNLK_TypeDefinitionIndex = 47124;

class MKEBKDOKNLK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x18
	::FGCOIBFFCHB* IBMHJGACMCO; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* EKDGHJBEKEE; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* IOPKGHMBPPH; // 0x30
	::UnityEngine::UI::Extension::UITabButton* NAKGMDFDEOO; // 0x38
	::FGCOIBFFCHB* JFOLFNBFDFG; // 0x40
	::MoleMole::NotificationBadge* JFDOOELFAOA; // 0x48
	::UnityEngine::RectTransform* PNPJPEJKANA; // 0x50
	::MoleMole::NotificationBadgeEx* MAMKMHKDPCA; // 0x58
	::UnityEngine::RectTransform* AJIBHBJNOCE; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEBKDOKNLK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MKEBKDOKNLK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MKEBKDOKNLK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEBKDOKNLK_KGEBDLGBGNM_OFFSET))(this);
	}
};
