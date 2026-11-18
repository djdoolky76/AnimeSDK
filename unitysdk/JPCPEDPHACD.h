#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class ADEJAGFCBHK;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralSortWidgetController; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define JPCPEDPHACD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18A29320)
#define JPCPEDPHACD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18A29220)
#define JPCPEDPHACD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18A28F40)
#define JPCPEDPHACD__CTOR_OFFSET UNITYSDK_OFFSET(0x18A29310)

inline static constexpr unsigned int JPCPEDPHACD_TypeDefinitionIndex = 87180;

class JPCPEDPHACD : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* JGBLLAEKDLO; // 0x18
	::UnityEngine::RectTransform* OFNDMBEELON; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIGeneralSortWidgetController*>* NCINIIBLMNJ; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* GECACAHIMAB; // 0x30
	::MoleMole::MonoGamepadNavigatableList* HMIBLBNACMC; // 0x38
	::MonoUITableScrollV2* EOMFDCFLCDK; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* KCHMKNCCCOL; // 0x48
	::ADEJAGFCBHK* CKBCJBHOOLM; // 0x50
	::MEKABAIJMNM_1<::MoleMole::UIGeneralToggleWidgetController*>* NAHNKFIGMGB; // 0x58
	::UnityEngine::RectTransform* ADEPIHHHGEP; // 0x60
	::UnityEngine::RectTransform* PNBPJJNGOFB; // 0x68
	::LGINJIKKBJA* DFMEBNOEHLB; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPCPEDPHACD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JPCPEDPHACD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JPCPEDPHACD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPCPEDPHACD_KGEBDLGBGNM_OFFSET))(this);
	}
};
