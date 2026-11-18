#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHCLHGCLLBF.h"

class CJIEIHEDMME;

#define KAJMEACDFLO_GKCLAFJFBNF_OFFSET UNITYSDK_OFFSET(0x13CD9E70)
#define KAJMEACDFLO_OPMPMDMAENO_OFFSET UNITYSDK_OFFSET(0x13CD9CB0)
#define KAJMEACDFLO__CTOR_OFFSET UNITYSDK_OFFSET(0x13CD9CA0)

inline static constexpr unsigned int KAJMEACDFLO_TypeDefinitionIndex = 78203;

class KAJMEACDFLO : public ::JHCLHGCLLBF
{
public:
	::System::Void _ctor(::CJIEIHEDMME* PJBDLMBIIBH)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + KAJMEACDFLO__CTOR_OFFSET))(this, PJBDLMBIIBH);
	}

	::System::Void OPMPMDMAENO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJMEACDFLO_OPMPMDMAENO_OFFSET))(this);
	}

	::System::Void GKCLAFJFBNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJMEACDFLO_GKCLAFJFBNF_OFFSET))(this);
	}
};
