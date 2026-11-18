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

#define CJFACCANKGL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x193DAC40)
#define CJFACCANKGL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x193DAB70)
#define CJFACCANKGL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x193DA950)
#define CJFACCANKGL__CTOR_OFFSET UNITYSDK_OFFSET(0x193DAC30)

inline static constexpr unsigned int CJFACCANKGL_TypeDefinitionIndex = 80275;

class CJFACCANKGL : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* ANDFIBAKEAE; // 0x18
	::LGINJIKKBJA* FDDAMLEALPJ; // 0x20
	::UnityEngine::GameObject* DEAPLILJLJD; // 0x28
	::UnityEngine::GameObject* ANDHLPBLPBG; // 0x30
	::UnityEngine::GameObject* PPJKENAFHHH; // 0x38
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x40
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x48
	::MoleMole::MonoGamepadSelectable* AJIJIJKJAPF; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFACCANKGL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CJFACCANKGL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFACCANKGL_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CJFACCANKGL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
