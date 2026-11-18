#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHCLHGCLLBF.h"

class CJIEIHEDMME;

#define APDFJFLOHBN_GKCLAFJFBNF_OFFSET UNITYSDK_OFFSET(0x113CA1E0)
#define APDFJFLOHBN_OPMPMDMAENO_OFFSET UNITYSDK_OFFSET(0x113C9980)
#define APDFJFLOHBN__CTOR_OFFSET UNITYSDK_OFFSET(0x113C9970)

inline static constexpr unsigned int APDFJFLOHBN_TypeDefinitionIndex = 73691;

class APDFJFLOHBN : public ::JHCLHGCLLBF
{
public:
	::CJIEIHEDMME* LADPIPOMBJM; // 0x18

	::System::Void _ctor(::CJIEIHEDMME* PJBDLMBIIBH)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + APDFJFLOHBN__CTOR_OFFSET))(this, PJBDLMBIIBH);
	}

	::System::Void OPMPMDMAENO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDFJFLOHBN_OPMPMDMAENO_OFFSET))(this);
	}

	::System::Void GKCLAFJFBNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDFJFLOHBN_GKCLAFJFBNF_OFFSET))(this);
	}
};
