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

#define KGNELOJOIHC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17909510)
#define KGNELOJOIHC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17909410)
#define KGNELOJOIHC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17909170)
#define KGNELOJOIHC__CTOR_OFFSET UNITYSDK_OFFSET(0x17909500)

inline static constexpr unsigned int KGNELOJOIHC_TypeDefinitionIndex = 68440;

class KGNELOJOIHC : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* BPHIGCJAFMN; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HPBFCJFKHDI; // 0x20
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* ACHECKCMIGI; // 0x30
	::UnityEngine::RectTransform* KEHPAOOHNOI; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* OIPFGJCABOH; // 0x40
	::FGCOIBFFCHB* FFJMMCAAEII; // 0x48
	::UnityEngine::RectTransform* ODGJDJJGBML; // 0x50
	::UnityEngine::RectTransform* GIEOJNEICLE; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* NCNOMKFIJIH; // 0x60
	::LGINJIKKBJA* DNGFGABBHEG; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* IMIEDOHNHNI; // 0x70
	::LGINJIKKBJA* MBKONFHOAEK; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNELOJOIHC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KGNELOJOIHC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KGNELOJOIHC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNELOJOIHC_KGEBDLGBGNM_OFFSET))(this);
	}
};
