#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHCLHGCLLBF.h"

class CJIEIHEDMME;

#define OOMAEDEDBDI_GKCLAFJFBNF_OFFSET UNITYSDK_OFFSET(0x136E17B0)
#define OOMAEDEDBDI_OPMPMDMAENO_OFFSET UNITYSDK_OFFSET(0x136E1560)
#define OOMAEDEDBDI__CTOR_OFFSET UNITYSDK_OFFSET(0x136E1550)

inline static constexpr unsigned int OOMAEDEDBDI_TypeDefinitionIndex = 85248;

class OOMAEDEDBDI : public ::JHCLHGCLLBF
{
public:
	::System::Void _ctor(::CJIEIHEDMME* PJBDLMBIIBH)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + OOMAEDEDBDI__CTOR_OFFSET))(this, PJBDLMBIIBH);
	}

	::System::Void OPMPMDMAENO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMAEDEDBDI_OPMPMDMAENO_OFFSET))(this);
	}

	::System::Void GKCLAFJFBNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMAEDEDBDI_GKCLAFJFBNF_OFFSET))(this);
	}
};
