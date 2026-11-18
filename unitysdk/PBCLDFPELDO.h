#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define PBCLDFPELDO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15F9DF60)
#define PBCLDFPELDO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15F9DEB0)
#define PBCLDFPELDO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15F9DC00)
#define PBCLDFPELDO__CTOR_OFFSET UNITYSDK_OFFSET(0x15F9DF50)

inline static constexpr unsigned int PBCLDFPELDO_TypeDefinitionIndex = 70344;

class PBCLDFPELDO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x18
	::MoleMole::MonoGamepadModule* LBBEFFPJHAC; // 0x20
	::GCIMMDDIFBJ* DHCKPIBEKNB; // 0x28
	::UnityEngine::GameObject* OEDOPPGMKLO; // 0x30
	::MoleMole::MonoGamepadCustomList* IDOFLBBAALO; // 0x38
	::FGCOIBFFCHB* JNFHEJOCGND; // 0x40
	::UnityEngine::GameObject* EHKABBEFECN; // 0x48
	::MoleMole::MonoGamepadSelectable* KNKBLLDEODG; // 0x50
	::UnityEngine::GameObject* CJFEPEJHCHO; // 0x58
	::UnityEngine::GameObject* IBGHKNFJAPF; // 0x60
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x68
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x70
	::UnityEngine::GameObject* JONKKOCDBIP; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBCLDFPELDO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PBCLDFPELDO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PBCLDFPELDO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBCLDFPELDO_KGEBDLGBGNM_OFFSET))(this);
	}
};
