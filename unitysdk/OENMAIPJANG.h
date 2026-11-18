#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHCLHGCLLBF.h"

class CJIEIHEDMME;

#define OENMAIPJANG_GKCLAFJFBNF_OFFSET UNITYSDK_OFFSET(0x15F66390)
#define OENMAIPJANG_OPMPMDMAENO_OFFSET UNITYSDK_OFFSET(0x15F661B0)
#define OENMAIPJANG__CTOR_OFFSET UNITYSDK_OFFSET(0x15F66190)

inline static constexpr unsigned int OENMAIPJANG_TypeDefinitionIndex = 91144;

class OENMAIPJANG : public ::JHCLHGCLLBF
{
public:
	::System::Void _ctor(::CJIEIHEDMME* PJBDLMBIIBH)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + OENMAIPJANG__CTOR_OFFSET))(this, PJBDLMBIIBH);
	}

	::System::Void OPMPMDMAENO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OENMAIPJANG_OPMPMDMAENO_OFFSET))(this);
	}

	::System::Void GKCLAFJFBNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OENMAIPJANG_GKCLAFJFBNF_OFFSET))(this);
	}
};
