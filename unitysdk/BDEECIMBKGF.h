#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHCLHGCLLBF.h"

class CJIEIHEDMME;

#define BDEECIMBKGF_GKCLAFJFBNF_OFFSET UNITYSDK_OFFSET(0x13616E40)
#define BDEECIMBKGF_OPMPMDMAENO_OFFSET UNITYSDK_OFFSET(0x13616C60)
#define BDEECIMBKGF__CTOR_OFFSET UNITYSDK_OFFSET(0x13616C50)

inline static constexpr unsigned int BDEECIMBKGF_TypeDefinitionIndex = 59145;

class BDEECIMBKGF : public ::JHCLHGCLLBF
{
public:
	::CJIEIHEDMME* LADPIPOMBJM; // 0x18

	::System::Void _ctor(::CJIEIHEDMME* PJBDLMBIIBH)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + BDEECIMBKGF__CTOR_OFFSET))(this, PJBDLMBIIBH);
	}

	::System::Void OPMPMDMAENO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEECIMBKGF_OPMPMDMAENO_OFFSET))(this);
	}

	::System::Void GKCLAFJFBNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEECIMBKGF_GKCLAFJFBNF_OFFSET))(this);
	}
};
