#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NBKBOBCKCFG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13ED1590)
#define NBKBOBCKCFG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13ED1490)
#define NBKBOBCKCFG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13ED1080)
#define NBKBOBCKCFG__CTOR_OFFSET UNITYSDK_OFFSET(0x13ED1580)

inline static constexpr unsigned int NBKBOBCKCFG_TypeDefinitionIndex = 65329;

class NBKBOBCKCFG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* BEIHDOGFOIF; // 0x18
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* LDIGGHDANKJ; // 0x28
	::UnityEngine::GameObject* KJNMHAFMELC; // 0x30
	::UnityEngine::GameObject* PGCHFPCLCFO; // 0x38
	::UnityEngine::RectTransform* BBPPMGJOGKG; // 0x40
	::MoleMole::MonoGamepadModule* KNAAIBKGFCJ; // 0x48
	::FGCOIBFFCHB* BONLEIHNDBN; // 0x50
	::UnityEngine::GameObject* GGNDEGPHKJO; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* ODDLNMJEFNJ; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* LJHNBOCEKEI; // 0x68
	::UnityEngine::GameObject* NFLBGINGDFC; // 0x70
	::UnityEngine::GameObject* OKKBOOCCKGE; // 0x78
	::FGCOIBFFCHB* LFPIAMKMOFN; // 0x80
	::UnityEngine::GameObject* AGJDONMJEGB; // 0x88
	::GCIMMDDIFBJ* LOLJCDMKEFK; // 0x90
	::UnityEngine::UI::Extension::UILocalizationText* DLCEJOLGHIH; // 0x98
	::LGINJIKKBJA* HJDAMCBKNEI; // 0xA0
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0xA8
	::UnityEngine::UI::Extension::UILocalizationText* GGGHGIOEBGD; // 0xB0
	::UnityEngine::GameObject* GGINOKKKJAA; // 0xB8
	::UnityEngine::GameObject* MCIBEBDDILO; // 0xC0
	::UnityEngine::GameObject* FJGPOOLCOEP; // 0xC8
	::UnityEngine::UI::Extension::UILocalizationText* CCDLGGINAHA; // 0xD0
	::MoleMole::NotificationBadgeEx* JIHLAMBLKGI; // 0xD8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKBOBCKCFG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NBKBOBCKCFG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKBOBCKCFG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NBKBOBCKCFG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
