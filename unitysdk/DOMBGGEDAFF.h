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

#define DOMBGGEDAFF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16BC51D0)
#define DOMBGGEDAFF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16BC5120)
#define DOMBGGEDAFF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16BC4EE0)
#define DOMBGGEDAFF__CTOR_OFFSET UNITYSDK_OFFSET(0x16BC51C0)

inline static constexpr unsigned int DOMBGGEDAFF_TypeDefinitionIndex = 48320;

class DOMBGGEDAFF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* DEIPJONPFNG; // 0x18
	::LGINJIKKBJA* NPHPKPAPBNF; // 0x20
	::MoleMole::NotificationBadgeEx* FLANDOHPICD; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* IKOFJEHPPAN; // 0x30
	::UnityEngine::GameObject* NDPFKBKABLI; // 0x38
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x40
	::UnityEngine::GameObject* JOBJDBBKHBM; // 0x48
	::UnityEngine::GameObject* FKKFDIACHKN; // 0x50
	::UnityEngine::GameObject* COEGDCPBBAB; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* LONDMNEMFKN; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMBGGEDAFF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DOMBGGEDAFF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMBGGEDAFF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DOMBGGEDAFF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
