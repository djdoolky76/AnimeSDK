#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define OIBPOMAHDGN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xFB8F690)
#define OIBPOMAHDGN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xFB8F5C0)
#define OIBPOMAHDGN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xFB8F3A0)
#define OIBPOMAHDGN__CTOR_OFFSET UNITYSDK_OFFSET(0xFB8F680)

inline static constexpr unsigned int OIBPOMAHDGN_TypeDefinitionIndex = 60888;

class OIBPOMAHDGN : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* ANDFIBAKEAE; // 0x18
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::UnityEngine::GameObject* ANDHLPBLPBG; // 0x30
	::MoleMole::MonoGamepadSelectable* AJIJIJKJAPF; // 0x38
	::UnityEngine::GameObject* PPJKENAFHHH; // 0x40
	::UnityEngine::GameObject* DEAPLILJLJD; // 0x48
	::LGINJIKKBJA* FDDAMLEALPJ; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBPOMAHDGN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OIBPOMAHDGN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBPOMAHDGN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OIBPOMAHDGN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
