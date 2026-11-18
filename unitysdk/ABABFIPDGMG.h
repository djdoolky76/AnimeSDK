#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UISlider; }

#define ABABFIPDGMG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x144B3400)
#define ABABFIPDGMG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x144B3260)
#define ABABFIPDGMG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x144B2F80)
#define ABABFIPDGMG__CTOR_OFFSET UNITYSDK_OFFSET(0x144B33F0)

inline static constexpr unsigned int ABABFIPDGMG_TypeDefinitionIndex = 63507;

class ABABFIPDGMG : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadModule* CNEJADNJLOA; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* BMLHGEJLNHK; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x28
	::FGCOIBFFCHB* FBIJGJIHEII; // 0x30
	::MoleMole::MonoGamepadModule* NMHPPLKCGBC; // 0x38
	::FGCOIBFFCHB* OGKMJJAIHFG; // 0x40
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x48
	::LGINJIKKBJA* CCLPLBPBAOD; // 0x50
	::LGINJIKKBJA* BKBMFOJCMOJ; // 0x58
	::FGCOIBFFCHB* DMKCLOEANGP; // 0x60
	::UnityEngine::Animation* MGJELFBPLEA; // 0x68
	::FGCOIBFFCHB* CCCLJPFADEL; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* FJPJPEHDKLP; // 0x78
	::UnityEngine::UI::Extension::UISlider* EGAGEFLKHHA; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABABFIPDGMG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ABABFIPDGMG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ABABFIPDGMG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABABFIPDGMG_KGEBDLGBGNM_OFFSET))(this);
	}
};
