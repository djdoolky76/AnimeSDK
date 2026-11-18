#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNestedListDelegate; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define DNLBBADNOAE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17214040)
#define DNLBBADNOAE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17213F50)
#define DNLBBADNOAE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17213D50)
#define DNLBBADNOAE__CTOR_OFFSET UNITYSDK_OFFSET(0x17214030)

inline static constexpr unsigned int DNLBBADNOAE_TypeDefinitionIndex = 43910;

class DNLBBADNOAE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* POAANBBNPKG; // 0x18
	::MoleMole::UIGeneralButtonController* AFLMMFFCJNO; // 0x20
	::MoleMole::MonoGamepadNestedListDelegate* GJDIINKPLBK; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* NIFCHKDNHPC; // 0x30
	::UnityEngine::UI::Extension::UITabButtonGroup* HDBJPLDPFEM; // 0x38
	::UnityEngine::Transform* KIMAPMJPBNJ; // 0x40
	::MonoUITableScrollV2* NCJECMPOGFB; // 0x48
	::LGINJIKKBJA* BBLAOLFAMIA; // 0x50
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLBBADNOAE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DNLBBADNOAE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLBBADNOAE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DNLBBADNOAE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
