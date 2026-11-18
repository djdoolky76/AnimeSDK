#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define OAAOKAJHDBC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE0E0D10)
#define OAAOKAJHDBC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE0E0C50)
#define OAAOKAJHDBC__CTOR_OFFSET UNITYSDK_OFFSET(0xE0E0D00)

inline static constexpr unsigned int OAAOKAJHDBC_TypeDefinitionIndex = 67346;

class OAAOKAJHDBC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* OBEMLOACGAF; // 0x18
	::UnityEngine::GameObject* GHAJPGIDPHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAAOKAJHDBC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OAAOKAJHDBC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OAAOKAJHDBC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
