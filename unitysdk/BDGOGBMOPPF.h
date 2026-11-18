#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BDGOGBMOPPF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x186662F0)
#define BDGOGBMOPPF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18666260)
#define BDGOGBMOPPF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18666020)
#define BDGOGBMOPPF__CTOR_OFFSET UNITYSDK_OFFSET(0x186662E0)

inline static constexpr unsigned int BDGOGBMOPPF_TypeDefinitionIndex = 74302;

class BDGOGBMOPPF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Canvas* NKGJGOIKICF; // 0x18
	::LGINJIKKBJA* JDOPMLKKOCI; // 0x20
	::UnityEngine::RectTransform* BGOLPFAIMKI; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* LCJFILKHPAL; // 0x30
	::UnityEngine::CanvasGroup* ANDJFFPFPMI; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* PLLKGPPDLKK; // 0x40
	::UnityEngine::RectTransform* NAJMDBLOMLA; // 0x48
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* GPPIHMIBFIB; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* KCHMKNCCCOL; // 0x58
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* IGGOPLGOHMA; // 0x60
	::UnityEngine::RectTransform* PEFNEBEDKBH; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* ELKJEOOAIKH; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDGOGBMOPPF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BDGOGBMOPPF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDGOGBMOPPF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BDGOGBMOPPF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
