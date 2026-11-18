#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define HBOAOEIMGAB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15D957D0)
#define HBOAOEIMGAB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15D956D0)
#define HBOAOEIMGAB__CTOR_OFFSET UNITYSDK_OFFSET(0x15D957C0)

inline static constexpr unsigned int HBOAOEIMGAB_TypeDefinitionIndex = 46546;

class HBOAOEIMGAB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* GDJDGAKAEDA; // 0x18
	::UnityEngine::GameObject* EDEFLFIKNFK; // 0x20
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x28
	::UnityEngine::GameObject* NIAELBKHGNH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOAOEIMGAB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HBOAOEIMGAB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HBOAOEIMGAB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
