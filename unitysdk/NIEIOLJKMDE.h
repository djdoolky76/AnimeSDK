#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NIEIOLJKMDE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x105BB5C0)
#define NIEIOLJKMDE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x105BB4F0)
#define NIEIOLJKMDE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x105BB260)
#define NIEIOLJKMDE__CTOR_OFFSET UNITYSDK_OFFSET(0x105BB5B0)

inline static constexpr unsigned int NIEIOLJKMDE_TypeDefinitionIndex = 78210;

class NIEIOLJKMDE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* IDLAPAJKNHK; // 0x18
	::UnityEngine::RectTransform* ELPIHKJPLPH; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* EFBAKMJHOPD; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* OFJFGAEDAPP; // 0x30
	::FGCOIBFFCHB* MCIDCLFHEIJ; // 0x38
	::UnityEngine::RectTransform* DLENHJCILCD; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* KMCJDLNKHEM; // 0x48
	::LGINJIKKBJA* BHJFEMFHNIN; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* LIBDBNAFKKL; // 0x58
	::UnityEngine::RectTransform* LGBFFNODKAH; // 0x60
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x68
	::MoleMole::MonoGamepadSpaceList* AIMDPKHBCEO; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* DPBOCJIIOCG; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEIOLJKMDE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NIEIOLJKMDE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NIEIOLJKMDE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEIOLJKMDE_KGEBDLGBGNM_OFFSET))(this);
	}
};
