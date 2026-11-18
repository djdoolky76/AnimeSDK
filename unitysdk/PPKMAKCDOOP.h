#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PPKMAKCDOOP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x150E47D0)
#define PPKMAKCDOOP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x150E4720)
#define PPKMAKCDOOP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x150E44F0)
#define PPKMAKCDOOP__CTOR_OFFSET UNITYSDK_OFFSET(0x150E47C0)

inline static constexpr unsigned int PPKMAKCDOOP_TypeDefinitionIndex = 82552;

class PPKMAKCDOOP : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::MoleMole::NotificationBadgeEx* FLANDOHPICD; // 0x20
	::UnityEngine::GameObject* JOBJDBBKHBM; // 0x28
	::UnityEngine::GameObject* COEGDCPBBAB; // 0x30
	::UnityEngine::GameObject* FKKFDIACHKN; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* LONDMNEMFKN; // 0x40
	::UnityEngine::GameObject* DEIPJONPFNG; // 0x48
	::LGINJIKKBJA* NPHPKPAPBNF; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* IKOFJEHPPAN; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPKMAKCDOOP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PPKMAKCDOOP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPKMAKCDOOP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PPKMAKCDOOP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
