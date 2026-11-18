#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHCLHGCLLBF.h"

class CJIEIHEDMME;

#define GBOEENJDDHF_GKCLAFJFBNF_OFFSET UNITYSDK_OFFSET(0x11D9A1B0)
#define GBOEENJDDHF_OPMPMDMAENO_OFFSET UNITYSDK_OFFSET(0x11D9A000)
#define GBOEENJDDHF__CTOR_OFFSET UNITYSDK_OFFSET(0x11D99FF0)

inline static constexpr unsigned int GBOEENJDDHF_TypeDefinitionIndex = 70166;

class GBOEENJDDHF : public ::JHCLHGCLLBF
{
public:
	::System::Void _ctor(::CJIEIHEDMME* PJBDLMBIIBH)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + GBOEENJDDHF__CTOR_OFFSET))(this, PJBDLMBIIBH);
	}

	::System::Void OPMPMDMAENO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBOEENJDDHF_OPMPMDMAENO_OFFSET))(this);
	}

	::System::Void GKCLAFJFBNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBOEENJDDHF_GKCLAFJFBNF_OFFSET))(this);
	}
};
