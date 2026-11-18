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

#define DKCNAACAAJA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15A4F340)
#define DKCNAACAAJA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15A4F270)
#define DKCNAACAAJA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15A4F020)
#define DKCNAACAAJA__CTOR_OFFSET UNITYSDK_OFFSET(0x15A4F330)

inline static constexpr unsigned int DKCNAACAAJA_TypeDefinitionIndex = 71804;

class DKCNAACAAJA : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x20
	::UnityEngine::GameObject* DEAPLILJLJD; // 0x28
	::MoleMole::MonoGamepadSelectable* AJIJIJKJAPF; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* MCJKDBEDPBJ; // 0x38
	::UnityEngine::GameObject* ANDHLPBLPBG; // 0x40
	::LGINJIKKBJA* FDDAMLEALPJ; // 0x48
	::UnityEngine::GameObject* PPJKENAFHHH; // 0x50
	::FGCOIBFFCHB* ANDFIBAKEAE; // 0x58
	::UnityEngine::RectTransform* BJHPNJKHFAL; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKCNAACAAJA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DKCNAACAAJA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKCNAACAAJA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DKCNAACAAJA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
