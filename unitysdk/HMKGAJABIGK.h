#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HMKGAJABIGK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1011FAA0)
#define HMKGAJABIGK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1011F9D0)
#define HMKGAJABIGK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1011F740)
#define HMKGAJABIGK__CTOR_OFFSET UNITYSDK_OFFSET(0x1011FA90)

inline static constexpr unsigned int HMKGAJABIGK_TypeDefinitionIndex = 59698;

class HMKGAJABIGK : public ::GIBMJLOJLKD
{
public:
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* IMIEDOHNHNI; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* NCNOMKFIJIH; // 0x28
	::UnityEngine::RectTransform* GIEOJNEICLE; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* HPBFCJFKHDI; // 0x38
	::LGINJIKKBJA* DNGFGABBHEG; // 0x40
	::UnityEngine::RectTransform* MBKONFHOAEK; // 0x48
	::UnityEngine::RectTransform* KEHPAOOHNOI; // 0x50
	::UnityEngine::RectTransform* ODGJDJJGBML; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* ACHECKCMIGI; // 0x60
	::FGCOIBFFCHB* BPHIGCJAFMN; // 0x68
	::FGCOIBFFCHB* FFJMMCAAEII; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* OIPFGJCABOH; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMKGAJABIGK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HMKGAJABIGK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HMKGAJABIGK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMKGAJABIGK_KGEBDLGBGNM_OFFSET))(this);
	}
};
