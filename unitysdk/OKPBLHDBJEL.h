#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define OKPBLHDBJEL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14F89930)
#define OKPBLHDBJEL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14F89870)
#define OKPBLHDBJEL__CTOR_OFFSET UNITYSDK_OFFSET(0x14F89920)

inline static constexpr unsigned int OKPBLHDBJEL_TypeDefinitionIndex = 91755;

class OKPBLHDBJEL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* ADNOILHMPMJ; // 0x18
	::UnityEngine::GameObject* OJIPLJKHPLC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPBLHDBJEL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OKPBLHDBJEL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OKPBLHDBJEL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
