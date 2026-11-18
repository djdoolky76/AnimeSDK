#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IDLEOPCGOAL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xEBB8090)
#define IDLEOPCGOAL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xEBB8000)
#define IDLEOPCGOAL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xEBB7D70)
#define IDLEOPCGOAL__CTOR_OFFSET UNITYSDK_OFFSET(0xEBB8080)

inline static constexpr unsigned int IDLEOPCGOAL_TypeDefinitionIndex = 48856;

class IDLEOPCGOAL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* KLEAEBCODPG; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* KJLOEDCNNBK; // 0x20
	::UnityEngine::RectTransform* LBEOLEEBMNE; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* DBOONCCADFG; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* BLLBMCGJFBF; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* FFGECNGKJDH; // 0x40
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x48
	::MoleMole::MonoGamepadSelectable* DANNBOGNOEH; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* EELOHONFAEF; // 0x58
	::UnityEngine::RectTransform* NDPFKBKABLI; // 0x60
	::UnityEngine::RectTransform* HMPNHFMMJBE; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* HDOKFAPJFHO; // 0x70
	::MoleMole::NotificationBadgeEx* MAMKMHKDPCA; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* AKGALLCDEDC; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* JEHBKCMHDPG; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLEOPCGOAL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IDLEOPCGOAL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLEOPCGOAL_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IDLEOPCGOAL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
