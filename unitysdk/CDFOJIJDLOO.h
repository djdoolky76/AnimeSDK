#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CDFOJIJDLOO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10E317C0)
#define CDFOJIJDLOO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10E31730)
#define CDFOJIJDLOO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10E31500)
#define CDFOJIJDLOO__CTOR_OFFSET UNITYSDK_OFFSET(0x10E317B0)

inline static constexpr unsigned int CDFOJIJDLOO_TypeDefinitionIndex = 84814;

class CDFOJIJDLOO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* IMLBPOGCDJE; // 0x18
	::UnityEngine::RectTransform* NCFNNANANOO; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* JMKFNAKNJGH; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* GGLLPIGFCGI; // 0x30
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x38
	::UnityEngine::GameObject* ODALDIOFMPH; // 0x40
	::UnityEngine::RectTransform* GGOGAKNNILP; // 0x48
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x50
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x58
	::UnityEngine::RectTransform* FIEOIBGOABH; // 0x60
	::UnityEngine::RectTransform* OFFPCKNINEJ; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDFOJIJDLOO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CDFOJIJDLOO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CDFOJIJDLOO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDFOJIJDLOO_KGEBDLGBGNM_OFFSET))(this);
	}
};
