#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHCLHGCLLBF.h"

class CJIEIHEDMME;

#define FMOCCJCLNIN_GKCLAFJFBNF_OFFSET UNITYSDK_OFFSET(0x10EC2AC0)
#define FMOCCJCLNIN_OPMPMDMAENO_OFFSET UNITYSDK_OFFSET(0x10EC28C0)
#define FMOCCJCLNIN__CTOR_OFFSET UNITYSDK_OFFSET(0x10EC28A0)

inline static constexpr unsigned int FMOCCJCLNIN_TypeDefinitionIndex = 49780;

class FMOCCJCLNIN : public ::JHCLHGCLLBF
{
public:
	::System::Void _ctor(::CJIEIHEDMME* PJBDLMBIIBH)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + FMOCCJCLNIN__CTOR_OFFSET))(this, PJBDLMBIIBH);
	}

	::System::Void OPMPMDMAENO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOCCJCLNIN_OPMPMDMAENO_OFFSET))(this);
	}

	::System::Void GKCLAFJFBNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOCCJCLNIN_GKCLAFJFBNF_OFFSET))(this);
	}
};
