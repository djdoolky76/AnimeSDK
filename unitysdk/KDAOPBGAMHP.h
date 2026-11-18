#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define KDAOPBGAMHP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13C53910)
#define KDAOPBGAMHP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13C53850)
#define KDAOPBGAMHP__CTOR_OFFSET UNITYSDK_OFFSET(0x13C53900)

inline static constexpr unsigned int KDAOPBGAMHP_TypeDefinitionIndex = 41917;

class KDAOPBGAMHP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* AJIBHBJNOCE; // 0x18
	::UnityEngine::GameObject* PNPJPEJKANA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDAOPBGAMHP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KDAOPBGAMHP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KDAOPBGAMHP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
