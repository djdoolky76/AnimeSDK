#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PPHCJOMLIBK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A807700)
#define PPHCJOMLIBK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A807630)
#define PPHCJOMLIBK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A8073E0)
#define PPHCJOMLIBK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8076F0)

inline static constexpr unsigned int PPHCJOMLIBK_TypeDefinitionIndex = 48472;

class PPHCJOMLIBK : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* FDDAMLEALPJ; // 0x18
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x20
	::UnityEngine::RectTransform* BJHPNJKHFAL; // 0x28
	::FGCOIBFFCHB* ANDFIBAKEAE; // 0x30
	::MoleMole::MonoGamepadSelectable* AJIJIJKJAPF; // 0x38
	::UnityEngine::GameObject* DEAPLILJLJD; // 0x40
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x48
	::UnityEngine::GameObject* ANDHLPBLPBG; // 0x50
	::UnityEngine::GameObject* PPJKENAFHHH; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* MCJKDBEDPBJ; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPHCJOMLIBK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PPHCJOMLIBK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPHCJOMLIBK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PPHCJOMLIBK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
