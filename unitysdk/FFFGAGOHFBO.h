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

#define FFFGAGOHFBO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14AC4CF0)
#define FFFGAGOHFBO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14AC4C40)
#define FFFGAGOHFBO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14AC4A10)
#define FFFGAGOHFBO__CTOR_OFFSET UNITYSDK_OFFSET(0x14AC4CE0)

inline static constexpr unsigned int FFFGAGOHFBO_TypeDefinitionIndex = 66311;

class FFFGAGOHFBO : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* BKDDKDMILCA; // 0x18
	::MonoUITableScrollV2* EAOPKKIGANC; // 0x20
	::MonoUITableScrollV2* PCAFNKOBAHG; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* DKJHOHJEIEF; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* NJCPPNBDNID; // 0x38
	::UnityEngine::RectTransform* NHAHMJOKDNP; // 0x40
	::MonoUITableScrollV2* ADIHEDCMBHA; // 0x48
	::LGINJIKKBJA* AKEDDMNCCEE; // 0x50
	::UnityEngine::RectTransform* IIANKFEACBO; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* DAKOCINNIJK; // 0x60
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFGAGOHFBO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFFGAGOHFBO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFFGAGOHFBO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFGAGOHFBO_KGEBDLGBGNM_OFFSET))(this);
	}
};
