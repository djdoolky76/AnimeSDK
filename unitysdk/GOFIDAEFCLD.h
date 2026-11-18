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

#define GOFIDAEFCLD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16CD9630)
#define GOFIDAEFCLD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16CD94D0)
#define GOFIDAEFCLD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16CD9270)
#define GOFIDAEFCLD__CTOR_OFFSET UNITYSDK_OFFSET(0x16CD9620)

inline static constexpr unsigned int GOFIDAEFCLD_TypeDefinitionIndex = 85436;

class GOFIDAEFCLD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* DEAPLILJLJD; // 0x18
	::UnityEngine::GameObject* PPJKENAFHHH; // 0x20
	::FGCOIBFFCHB* ANDFIBAKEAE; // 0x28
	::UnityEngine::GameObject* ANDHLPBLPBG; // 0x30
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x38
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x40
	::LGINJIKKBJA* FDDAMLEALPJ; // 0x48
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x50
	::MoleMole::MonoGamepadSelectable* AJIJIJKJAPF; // 0x58
	::FGCOIBFFCHB* IMENBGPAJOM; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFIDAEFCLD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GOFIDAEFCLD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFIDAEFCLD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GOFIDAEFCLD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
