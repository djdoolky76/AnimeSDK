#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadRegion; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralActivityTagInfoWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define BLDOKOMCGMO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15080FF0)
#define BLDOKOMCGMO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15080F40)
#define BLDOKOMCGMO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15080D30)
#define BLDOKOMCGMO__CTOR_OFFSET UNITYSDK_OFFSET(0x15080FE0)

inline static constexpr unsigned int BLDOKOMCGMO_TypeDefinitionIndex = 63075;

class BLDOKOMCGMO : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x20
	::LGINJIKKBJA* PHFJCEIPFIH; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* KICJCCHFEFM; // 0x30
	::MoleMole::MonoGamepadRegion* EAENJJNADKJ; // 0x38
	::MEKABAIJMNM_1<::MoleMole::UIGeneralActivityTagInfoWidgetController*>* EOMGAEONDMD; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* EGCLKHPGJHI; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* ENIBKHLDKNG; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDOKOMCGMO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BLDOKOMCGMO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BLDOKOMCGMO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDOKOMCGMO_KGEBDLGBGNM_OFFSET))(this);
	}
};
