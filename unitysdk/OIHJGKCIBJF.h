#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define OIHJGKCIBJF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15FE2E40)
#define OIHJGKCIBJF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15FE2DE0)
#define OIHJGKCIBJF__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE2E30)

inline static constexpr unsigned int OIHJGKCIBJF_TypeDefinitionIndex = 85225;

class OIHJGKCIBJF : public ::GIBMJLOJLKD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHJGKCIBJF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OIHJGKCIBJF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OIHJGKCIBJF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
