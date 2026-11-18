#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define AJAJCNMFLAP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16481E20)
#define AJAJCNMFLAP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16481D80)
#define AJAJCNMFLAP__CTOR_OFFSET UNITYSDK_OFFSET(0x16481E10)

inline static constexpr unsigned int AJAJCNMFLAP_TypeDefinitionIndex = 51905;

class AJAJCNMFLAP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* PNCNPGAACAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJAJCNMFLAP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AJAJCNMFLAP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AJAJCNMFLAP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
