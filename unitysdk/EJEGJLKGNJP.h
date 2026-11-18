#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define EJEGJLKGNJP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF9D2B70)
#define EJEGJLKGNJP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF9D29F0)
#define EJEGJLKGNJP__CTOR_OFFSET UNITYSDK_OFFSET(0xF9D2B60)

inline static constexpr unsigned int EJEGJLKGNJP_TypeDefinitionIndex = 47768;

class EJEGJLKGNJP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* FNPDENHLGLO; // 0x18
	::UnityEngine::GameObject* LONDIFBPJNJ; // 0x20
	::UnityEngine::GameObject* IBHEOAICEID; // 0x28
	::UnityEngine::GameObject* DGNKBAOPPCO; // 0x30
	::UnityEngine::GameObject* FIHOBOCPHJA; // 0x38
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x40
	::UnityEngine::GameObject* LAIMGEKJCPA; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEGJLKGNJP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EJEGJLKGNJP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EJEGJLKGNJP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
