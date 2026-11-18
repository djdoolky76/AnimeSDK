#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHCLHGCLLBF.h"

class CJIEIHEDMME;

#define JFOIKMGFLOC_GKCLAFJFBNF_OFFSET UNITYSDK_OFFSET(0x1383D990)
#define JFOIKMGFLOC_OPMPMDMAENO_OFFSET UNITYSDK_OFFSET(0x1383D4C0)
#define JFOIKMGFLOC__CTOR_OFFSET UNITYSDK_OFFSET(0x1383D4A0)

inline static constexpr unsigned int JFOIKMGFLOC_TypeDefinitionIndex = 69872;

class JFOIKMGFLOC : public ::JHCLHGCLLBF
{
public:
	::System::Void _ctor(::CJIEIHEDMME* PJBDLMBIIBH)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + JFOIKMGFLOC__CTOR_OFFSET))(this, PJBDLMBIIBH);
	}

	::System::Void OPMPMDMAENO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOIKMGFLOC_OPMPMDMAENO_OFFSET))(this);
	}

	::System::Void GKCLAFJFBNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOIKMGFLOC_GKCLAFJFBNF_OFFSET))(this);
	}
};
