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

#define PHDEEMLBBEP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1846E150)
#define PHDEEMLBBEP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1846DFF0)
#define PHDEEMLBBEP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1846DD90)
#define PHDEEMLBBEP__CTOR_OFFSET UNITYSDK_OFFSET(0x1846E140)

inline static constexpr unsigned int PHDEEMLBBEP_TypeDefinitionIndex = 68372;

class PHDEEMLBBEP : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* FDDAMLEALPJ; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::FGCOIBFFCHB* DEAPLILJLJD; // 0x28
	::UnityEngine::GameObject* ANDHLPBLPBG; // 0x30
	::MoleMole::MonoGamepadSelectable* AJIJIJKJAPF; // 0x38
	::UnityEngine::GameObject* PPJKENAFHHH; // 0x40
	::UnityEngine::GameObject* LKMBHFMLGDO; // 0x48
	::FGCOIBFFCHB* ANDFIBAKEAE; // 0x50
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x58
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDEEMLBBEP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PHDEEMLBBEP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PHDEEMLBBEP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDEEMLBBEP_KGEBDLGBGNM_OFFSET))(this);
	}
};
