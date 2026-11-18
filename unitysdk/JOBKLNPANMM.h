#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class FILNFMCNCFE;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JOBKLNPANMM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19470540)
#define JOBKLNPANMM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x19470400)
#define JOBKLNPANMM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x194700D0)
#define JOBKLNPANMM__CTOR_OFFSET UNITYSDK_OFFSET(0x19470530)

inline static constexpr unsigned int JOBKLNPANMM_TypeDefinitionIndex = 85941;

class JOBKLNPANMM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x20
	::UnityEngine::RectTransform* OOEKJBNNIMN; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* EFDNODJPIHA; // 0x30
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x38
	::UnityEngine::RectTransform* BGOLPFAIMKI; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* JNHMINBECPE; // 0x48
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x50
	::UnityEngine::RectTransform* AJOMDPDKPMP; // 0x58
	::FGCOIBFFCHB* LFEAAEBMIJO; // 0x60
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x68
	::UnityEngine::CanvasGroup* KJIODBNPLIN; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* PMHGAJEKMAI; // 0x78
	::LGINJIKKBJA* BKDDKDMILCA; // 0x80
	::FILNFMCNCFE* CHCCPCCKJBG; // 0x88
	::UnityEngine::Animation* NDIEOPDFNDM; // 0x90
	::LGINJIKKBJA* DDJCPNIGEKH; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBKLNPANMM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JOBKLNPANMM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBKLNPANMM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JOBKLNPANMM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
