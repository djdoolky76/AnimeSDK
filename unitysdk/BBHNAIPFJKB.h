#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHCLHGCLLBF.h"

class CJIEIHEDMME;

#define BBHNAIPFJKB_GKCLAFJFBNF_OFFSET UNITYSDK_OFFSET(0x18549FC0)
#define BBHNAIPFJKB_OPMPMDMAENO_OFFSET UNITYSDK_OFFSET(0x18549DE0)
#define BBHNAIPFJKB__CTOR_OFFSET UNITYSDK_OFFSET(0x18549DC0)

inline static constexpr unsigned int BBHNAIPFJKB_TypeDefinitionIndex = 92112;

class BBHNAIPFJKB : public ::JHCLHGCLLBF
{
public:
	::System::Void _ctor(::CJIEIHEDMME* PJBDLMBIIBH)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + BBHNAIPFJKB__CTOR_OFFSET))(this, PJBDLMBIIBH);
	}

	::System::Void OPMPMDMAENO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHNAIPFJKB_OPMPMDMAENO_OFFSET))(this);
	}

	::System::Void GKCLAFJFBNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHNAIPFJKB_GKCLAFJFBNF_OFFSET))(this);
	}
};
