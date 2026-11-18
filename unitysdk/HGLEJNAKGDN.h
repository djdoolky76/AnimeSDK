#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define HGLEJNAKGDN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x110195F0)
#define HGLEJNAKGDN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x110194E0)
#define HGLEJNAKGDN__CTOR_OFFSET UNITYSDK_OFFSET(0x110195E0)

inline static constexpr unsigned int HGLEJNAKGDN_TypeDefinitionIndex = 77824;

class HGLEJNAKGDN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* NIAELBKHGNH; // 0x18
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x20
	::GCIMMDDIFBJ* LLMPECAIODE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLEJNAKGDN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HGLEJNAKGDN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HGLEJNAKGDN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
