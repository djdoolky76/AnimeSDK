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

#define HAHPNMFMEBL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1816FDC0)
#define HAHPNMFMEBL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1816FD30)
#define HAHPNMFMEBL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1816FAC0)
#define HAHPNMFMEBL__CTOR_OFFSET UNITYSDK_OFFSET(0x1816FDB0)

inline static constexpr unsigned int HAHPNMFMEBL_TypeDefinitionIndex = 59617;

class HAHPNMFMEBL : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadSelectable* KNKBLLDEODG; // 0x18
	::UnityEngine::GameObject* JONKKOCDBIP; // 0x20
	::MoleMole::MonoGamepadModule* LBBEFFPJHAC; // 0x28
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x30
	::UnityEngine::GameObject* OEDOPPGMKLO; // 0x38
	::MoleMole::MonoGamepadCustomList* IDOFLBBAALO; // 0x40
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x48
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x50
	::UnityEngine::GameObject* EHKABBEFECN; // 0x58
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x60
	::UnityEngine::GameObject* CJFEPEJHCHO; // 0x68
	::UnityEngine::GameObject* IBGHKNFJAPF; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHPNMFMEBL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HAHPNMFMEBL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HAHPNMFMEBL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHPNMFMEBL_KGEBDLGBGNM_OFFSET))(this);
	}
};
