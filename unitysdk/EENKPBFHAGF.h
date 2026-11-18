#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FILNFMCNCFE;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUIBtnScaleAnim;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define EENKPBFHAGF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x161392D0)
#define EENKPBFHAGF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x161391E0)
#define EENKPBFHAGF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16138FB0)
#define EENKPBFHAGF__CTOR_OFFSET UNITYSDK_OFFSET(0x161392C0)

inline static constexpr unsigned int EENKPBFHAGF_TypeDefinitionIndex = 43853;

class EENKPBFHAGF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x18
	::UnityEngine::GameObject* IODBDPOLPKA; // 0x20
	::MonoUIBtnScaleAnim* JJKNFHLLNIH; // 0x28
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x30
	::FILNFMCNCFE* JNIAEBKPLBP; // 0x38
	::UnityEngine::GameObject* LKCPFCFFILO; // 0x40
	::UnityEngine::GameObject* ILOBEELCFOK; // 0x48
	::UnityEngine::GameObject* ICNIHACFEEN; // 0x50
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EENKPBFHAGF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EENKPBFHAGF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EENKPBFHAGF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EENKPBFHAGF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
