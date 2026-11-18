#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralItemBtnWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define DNKJEJEDFAM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17213CB0)
#define DNKJEJEDFAM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17213BE0)
#define DNKJEJEDFAM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17213980)
#define DNKJEJEDFAM__CTOR_OFFSET UNITYSDK_OFFSET(0x17213CA0)

inline static constexpr unsigned int DNKJEJEDFAM_TypeDefinitionIndex = 62175;

class DNKJEJEDFAM : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x18
	::LGINJIKKBJA* KGLKEAODHLM; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* GCDICMMDPPG; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* PNDHOGLJAHH; // 0x38
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x40
	::UnityEngine::RectTransform* CHMCMCJHKCG; // 0x48
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x50
	::MEKABAIJMNM_1<::MoleMole::UIGeneralItemBtnWidgetController*>* MMGPHDNAEOP; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNKJEJEDFAM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DNKJEJEDFAM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DNKJEJEDFAM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNKJEJEDFAM_KGEBDLGBGNM_OFFSET))(this);
	}
};
