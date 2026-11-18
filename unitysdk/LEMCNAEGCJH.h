#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define LEMCNAEGCJH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x184E4250)
#define LEMCNAEGCJH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x184E4180)
#define LEMCNAEGCJH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x184E3F70)
#define LEMCNAEGCJH__CTOR_OFFSET UNITYSDK_OFFSET(0x184E4240)

inline static constexpr unsigned int LEMCNAEGCJH_TypeDefinitionIndex = 42600;

class LEMCNAEGCJH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UIToggleButton* ECLHHDJEFBJ; // 0x18
	::MonoUITableScrollV2* NJCOAEOCOBB; // 0x20
	::LGINJIKKBJA* BKDDKDMILCA; // 0x28
	::UnityEngine::RectTransform* NKCDLNIECHE; // 0x30
	::UnityEngine::UI::Extension::UIToggleButton* CIPLLBJJOJG; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* HBAFOAEKLBO; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* JOMJIIKENAE; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* AFBGMEKPFDD; // 0x50
	::UnityEngine::RectTransform* KKOJIGEFPBM; // 0x58
	::UnityEngine::RectTransform* DJNMFMGCCGP; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMCNAEGCJH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LEMCNAEGCJH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LEMCNAEGCJH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMCNAEGCJH_KGEBDLGBGNM_OFFSET))(this);
	}
};
