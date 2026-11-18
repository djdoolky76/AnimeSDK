#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadRegion; }
namespace MoleMole { class UIActivityWeaponRewardGetWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralActivityTagInfoWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define GOCAHNOIKGG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x149F04E0)
#define GOCAHNOIKGG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x149F0410)
#define GOCAHNOIKGG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x149F01E0)
#define GOCAHNOIKGG__CTOR_OFFSET UNITYSDK_OFFSET(0x149F04D0)

inline static constexpr unsigned int GOCAHNOIKGG_TypeDefinitionIndex = 86229;

class GOCAHNOIKGG : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadRegion* EAENJJNADKJ; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::MEKABAIJMNM_1<::MoleMole::UIActivityWeaponRewardGetWidgetController*>* BLJPDKPFGFK; // 0x30
	::MEKABAIJMNM_1<::MoleMole::UIGeneralActivityTagInfoWidgetController*>* EOMGAEONDMD; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* EGCLKHPGJHI; // 0x40
	::LGINJIKKBJA* PHFJCEIPFIH; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCAHNOIKGG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GOCAHNOIKGG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCAHNOIKGG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GOCAHNOIKGG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
