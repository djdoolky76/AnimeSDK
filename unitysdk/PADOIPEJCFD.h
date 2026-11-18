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

#define PADOIPEJCFD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x194937B0)
#define PADOIPEJCFD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x194936E0)
#define PADOIPEJCFD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19493490)
#define PADOIPEJCFD__CTOR_OFFSET UNITYSDK_OFFSET(0x194937A0)

inline static constexpr unsigned int PADOIPEJCFD_TypeDefinitionIndex = 69554;

class PADOIPEJCFD : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* FDDAMLEALPJ; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::UnityEngine::GameObject* ANDHLPBLPBG; // 0x28
	::MoleMole::MonoGamepadSelectable* AJIJIJKJAPF; // 0x30
	::UnityEngine::RectTransform* BJHPNJKHFAL; // 0x38
	::FGCOIBFFCHB* ANDFIBAKEAE; // 0x40
	::UnityEngine::GameObject* DEAPLILJLJD; // 0x48
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* MCJKDBEDPBJ; // 0x58
	::UnityEngine::GameObject* PPJKENAFHHH; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PADOIPEJCFD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PADOIPEJCFD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PADOIPEJCFD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PADOIPEJCFD_KGEBDLGBGNM_OFFSET))(this);
	}
};
