#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FEKINMBIHCL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11D71710)
#define FEKINMBIHCL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11D71660)
#define FEKINMBIHCL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11D71460)
#define FEKINMBIHCL__CTOR_OFFSET UNITYSDK_OFFSET(0x11D71700)

inline static constexpr unsigned int FEKINMBIHCL_TypeDefinitionIndex = 84044;

class FEKINMBIHCL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::HorizontalLayoutGroup* APACFNEFFEF; // 0x18
	::FGCOIBFFCHB* DPNLLKMJMMB; // 0x20
	::UnityEngine::CanvasGroup* DMFEPOIHIDB; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* BIGMAIMFEOB; // 0x38
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x40
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKINMBIHCL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FEKINMBIHCL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FEKINMBIHCL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKINMBIHCL_KGEBDLGBGNM_OFFSET))(this);
	}
};
