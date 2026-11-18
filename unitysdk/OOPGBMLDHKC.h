#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralSortWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class MEKABAIJMNM_1;

#define OOPGBMLDHKC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15F8EB70)
#define OOPGBMLDHKC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15F8EA30)
#define OOPGBMLDHKC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15F8E750)
#define OOPGBMLDHKC__CTOR_OFFSET UNITYSDK_OFFSET(0x15F8EB60)

inline static constexpr unsigned int OOPGBMLDHKC_TypeDefinitionIndex = 42328;

class OOPGBMLDHKC : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* PBBHIOABJLP; // 0x18
	::UnityEngine::UI::Extension::UITabButtonGroup* FJPCAHJIAGA; // 0x20
	::LGINJIKKBJA* NGPLFELILJC; // 0x28
	::LGINJIKKBJA* MOBHKKJKOAJ; // 0x30
	::MoleMole::MonoGamepadModule* ODALDIOFMPH; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* NLADLFCHHBO; // 0x40
	::LGINJIKKBJA* EAKFABFPOJJ; // 0x48
	::MoleMole::MonoGamepadNavigatableList* PNGDOGEFFOP; // 0x50
	::UnityEngine::RectTransform* BOGHCBIHHBF; // 0x58
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x60
	::MEKABAIJMNM_1<::MoleMole::UIGeneralSortWidgetController*>* ICGNLCGIKNG; // 0x68
	::LGINJIKKBJA* BOAIJNBONKK; // 0x70
	::MonoUITableScrollV2* OKIILKAPINP; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOPGBMLDHKC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OOPGBMLDHKC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OOPGBMLDHKC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOPGBMLDHKC_KGEBDLGBGNM_OFFSET))(this);
	}
};
