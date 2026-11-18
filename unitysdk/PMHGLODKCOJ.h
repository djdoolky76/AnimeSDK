#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIWorkBenchInformation02InfoPanelWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define PMHGLODKCOJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13724F40)
#define PMHGLODKCOJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13724E30)
#define PMHGLODKCOJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13724C30)
#define PMHGLODKCOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13724F30)

inline static constexpr unsigned int PMHGLODKCOJ_TypeDefinitionIndex = 54293;

class PMHGLODKCOJ : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* BKDDKDMILCA; // 0x18
	::MonoUITableScrollV2* OFJOLDGMCCD; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* GLJNKNMBKLF; // 0x28
	::MonoUITableScrollV2* PLINCOBCGIP; // 0x30
	::LGINJIKKBJA* MFLEBPBJGLH; // 0x38
	::UnityEngine::RectTransform* AGHCJPDEGGC; // 0x40
	::MEKABAIJMNM_1<::MoleMole::UIWorkBenchInformation02InfoPanelWidgetController*>* LALEJDBJFLA; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHGLODKCOJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PMHGLODKCOJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PMHGLODKCOJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHGLODKCOJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
