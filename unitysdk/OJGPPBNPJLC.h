#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHCLHGCLLBF.h"

class CJIEIHEDMME;

#define OJGPPBNPJLC_GKCLAFJFBNF_OFFSET UNITYSDK_OFFSET(0x15FE48D0)
#define OJGPPBNPJLC_OPMPMDMAENO_OFFSET UNITYSDK_OFFSET(0x15FE4710)
#define OJGPPBNPJLC__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE4700)

inline static constexpr unsigned int OJGPPBNPJLC_TypeDefinitionIndex = 78468;

class OJGPPBNPJLC : public ::JHCLHGCLLBF
{
public:
	::System::Void _ctor(::CJIEIHEDMME* PJBDLMBIIBH)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + OJGPPBNPJLC__CTOR_OFFSET))(this, PJBDLMBIIBH);
	}

	::System::Void OPMPMDMAENO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGPPBNPJLC_OPMPMDMAENO_OFFSET))(this);
	}

	::System::Void GKCLAFJFBNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGPPBNPJLC_GKCLAFJFBNF_OFFSET))(this);
	}
};
