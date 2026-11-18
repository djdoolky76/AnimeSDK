#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DLCMPHAPDHN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16BA67C0)
#define DLCMPHAPDHN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16BA6710)
#define DLCMPHAPDHN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16BA6510)
#define DLCMPHAPDHN__CTOR_OFFSET UNITYSDK_OFFSET(0x16BA67B0)

inline static constexpr unsigned int DLCMPHAPDHN_TypeDefinitionIndex = 42877;

class DLCMPHAPDHN : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* JHNDNKLBOLD; // 0x28
	::LGINJIKKBJA* JBAGBGPNPDL; // 0x30
	::MoleMole::MonoGamepadCustomList* IBCNKMCOCHD; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* MDHHGDLPNFG; // 0x40
	::UnityEngine::RectTransform* EBGGJKEIFIO; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCMPHAPDHN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DLCMPHAPDHN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCMPHAPDHN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DLCMPHAPDHN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
