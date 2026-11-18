#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BJHFBCHDHCP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10E06F70)
#define BJHFBCHDHCP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10E06E70)
#define BJHFBCHDHCP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10E06BB0)
#define BJHFBCHDHCP__CTOR_OFFSET UNITYSDK_OFFSET(0x10E06F60)

inline static constexpr unsigned int BJHFBCHDHCP_TypeDefinitionIndex = 45550;

class BJHFBCHDHCP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* EKFNNJIKOPL; // 0x18
	::MoleMole::NotificationBadgeEx* JFDOOELFAOA; // 0x20
	::UnityEngine::GameObject* EJHNNMBHAPK; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x38
	::UnityEngine::CanvasGroup* CPGNEPMDANH; // 0x40
	::FGCOIBFFCHB* KEHECMCDLFC; // 0x48
	::UnityEngine::GameObject* NDPFKBKABLI; // 0x50
	::UnityEngine::GameObject* MCGPPADHCLJ; // 0x58
	::FGCOIBFFCHB* DCMADJIMGIG; // 0x60
	::UnityEngine::GameObject* EIJENPHHHDN; // 0x68
	::UnityEngine::GameObject* GJOIFJKPHPL; // 0x70
	::UnityEngine::GameObject* LELNPCADHHE; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHFBCHDHCP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BJHFBCHDHCP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHFBCHDHCP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BJHFBCHDHCP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
