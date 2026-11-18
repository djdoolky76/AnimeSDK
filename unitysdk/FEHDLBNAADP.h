#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIZenkovWorkbenchRowWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define FEHDLBNAADP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x169CCDA0)
#define FEHDLBNAADP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x169CCCF0)
#define FEHDLBNAADP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x169CCAD0)
#define FEHDLBNAADP__CTOR_OFFSET UNITYSDK_OFFSET(0x169CCD90)

inline static constexpr unsigned int FEHDLBNAADP_TypeDefinitionIndex = 78195;

class FEHDLBNAADP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* BLLBMCGJFBF; // 0x18
	::UnityEngine::RectTransform* DPDOFDHIBCP; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* KLEAEBCODPG; // 0x28
	::MoleMole::NotificationBadgeEx* FBFEFCIAJBL; // 0x30
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x38
	::MEKABAIJMNM_1<::MoleMole::UIZenkovWorkbenchRowWidgetController*>* HAECJHCJIFD; // 0x40
	::MEKABAIJMNM_1<::MoleMole::UIZenkovWorkbenchRowWidgetController*>* EGAEMJPKMKH; // 0x48
	::UnityEngine::UI::Button* CAMCIACCNJG; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* OEDOKBJLPJI; // 0x58
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHDLBNAADP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FEHDLBNAADP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FEHDLBNAADP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHDLBNAADP_KGEBDLGBGNM_OFFSET))(this);
	}
};
