#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define JPLDAGFJFLE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17633A80)
#define JPLDAGFJFLE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x176339F0)
#define JPLDAGFJFLE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17633760)
#define JPLDAGFJFLE__CTOR_OFFSET UNITYSDK_OFFSET(0x17633A70)

inline static constexpr unsigned int JPLDAGFJFLE_TypeDefinitionIndex = 82303;

class JPLDAGFJFLE : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x18
	::UnityEngine::GameObject* IBGHKNFJAPF; // 0x20
	::MoleMole::MonoGamepadCustomList* IDOFLBBAALO; // 0x28
	::UnityEngine::GameObject* JONKKOCDBIP; // 0x30
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x38
	::MoleMole::MonoGamepadSelectable* KNKBLLDEODG; // 0x40
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x48
	::UnityEngine::GameObject* EHKABBEFECN; // 0x50
	::UnityEngine::RectTransform* MBAPIIPLLGD; // 0x58
	::UnityEngine::GameObject* OEDOPPGMKLO; // 0x60
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x68
	::UnityEngine::GameObject* CJFEPEJHCHO; // 0x70
	::MoleMole::MonoGamepadModule* LBBEFFPJHAC; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLDAGFJFLE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JPLDAGFJFLE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLDAGFJFLE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JPLDAGFJFLE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
