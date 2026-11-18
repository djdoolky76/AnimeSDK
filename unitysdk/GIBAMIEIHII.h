#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIShareBtnWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationImage; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define GIBAMIEIHII_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10FDABB0)
#define GIBAMIEIHII_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10FDAA90)
#define GIBAMIEIHII_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10FDA7C0)
#define GIBAMIEIHII__CTOR_OFFSET UNITYSDK_OFFSET(0x10FDABA0)

inline static constexpr unsigned int GIBAMIEIHII_TypeDefinitionIndex = 39145;

class GIBAMIEIHII : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* HJHJONIFJEJ; // 0x18
	::UnityEngine::RectTransform* PJLLCFNNMBB; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HFKAJKPLIBK; // 0x28
	::MEKABAIJMNM_1<::MoleMole::UIShareBtnWidgetController*>* KOFDFMEEENM; // 0x30
	::UnityEngine::Transform* FPBLCBFOHEM; // 0x38
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x40
	::FGCOIBFFCHB* LDDPDCIEJKO; // 0x48
	::UnityEngine::Transform* MCCFMBFIACB; // 0x50
	::LGINJIKKBJA* OBOFILOKOJB; // 0x58
	::UnityEngine::UI::Extension::UILocalizationImage* MFPBLMHMKJE; // 0x60
	::UnityEngine::Transform* KJCCCBHMEHL; // 0x68
	::LGINJIKKBJA* IIAPIPEOJCO; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* MLKKFBEOHIB; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIBAMIEIHII__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GIBAMIEIHII_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIBAMIEIHII_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GIBAMIEIHII_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
