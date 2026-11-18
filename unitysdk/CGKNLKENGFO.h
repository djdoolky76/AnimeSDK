#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CGKNLKENGFO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18DD0770)
#define CGKNLKENGFO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18DD06E0)
#define CGKNLKENGFO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18DD04D0)
#define CGKNLKENGFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD0760)

inline static constexpr unsigned int CGKNLKENGFO_TypeDefinitionIndex = 75359;

class CGKNLKENGFO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* AGCCEHDJPID; // 0x18
	::UnityEngine::RectTransform* KNANEHOADKC; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* NLFEHCFAKNK; // 0x28
	::LGINJIKKBJA* LLKFPNJNFAF; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* IKIJJKGHFDP; // 0x38
	::UnityEngine::RectTransform* FMALFEFDMAL; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* AAMNDOJAAKP; // 0x48
	::UnityEngine::RectTransform* DPDOFDHIBCP; // 0x50
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x58
	::UnityEngine::CanvasGroup* DEIPJONPFNG; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKNLKENGFO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CGKNLKENGFO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CGKNLKENGFO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGKNLKENGFO_KGEBDLGBGNM_OFFSET))(this);
	}
};
