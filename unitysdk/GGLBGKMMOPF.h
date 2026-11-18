#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define GGLBGKMMOPF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x2006D100)
#define GGLBGKMMOPF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x2006D0A0)
#define GGLBGKMMOPF__CTOR_OFFSET UNITYSDK_OFFSET(0x2006D0F0)

inline static constexpr unsigned int GGLBGKMMOPF_TypeDefinitionIndex = 96573;

class GGLBGKMMOPF : public ::GIBMJLOJLKD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLBGKMMOPF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GGLBGKMMOPF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GGLBGKMMOPF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
