#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define MKPBFPGJGCK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x177C9CA0)
#define MKPBFPGJGCK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x177C9BB0)
#define MKPBFPGJGCK__CTOR_OFFSET UNITYSDK_OFFSET(0x177C9C90)

inline static constexpr unsigned int MKPBFPGJGCK_TypeDefinitionIndex = 80832;

class MKPBFPGJGCK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* GDLCCFGKNBD; // 0x18
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKPBFPGJGCK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MKPBFPGJGCK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MKPBFPGJGCK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
