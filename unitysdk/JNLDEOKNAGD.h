#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JNLDEOKNAGD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18A272E0)
#define JNLDEOKNAGD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18A27180)
#define JNLDEOKNAGD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18A26EC0)
#define JNLDEOKNAGD__CTOR_OFFSET UNITYSDK_OFFSET(0x18A272D0)

inline static constexpr unsigned int JNLDEOKNAGD_TypeDefinitionIndex = 74272;

class JNLDEOKNAGD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* DOHBFOPMFHN; // 0x18
	::UnityEngine::RectTransform* DBJCNKCCNKC; // 0x20
	::UnityEngine::RectTransform* MLNKAEFAIFI; // 0x28
	::MoleMole::MonoGamepadCustomList* IHGNFKCAJBE; // 0x30
	::UnityEngine::UI::Text* CABGCJLGGNA; // 0x38
	::FGCOIBFFCHB* KDBBPPCFLIM; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x48
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x50
	::LGINJIKKBJA* IIAPIPEOJCO; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x60
	::LGINJIKKBJA* ONOINJOLLPK; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* MAFBMEHCDFJ; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* CKDMOLAHECD; // 0x78
	::LGINJIKKBJA* DKEFFKBJAMA; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLDEOKNAGD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JNLDEOKNAGD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLDEOKNAGD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JNLDEOKNAGD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
