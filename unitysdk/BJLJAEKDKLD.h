#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHCLHGCLLBF.h"

class CJIEIHEDMME;

#define BJLJAEKDKLD_GKCLAFJFBNF_OFFSET UNITYSDK_OFFSET(0x169F7C80)
#define BJLJAEKDKLD_OPMPMDMAENO_OFFSET UNITYSDK_OFFSET(0x169F7C30)
#define BJLJAEKDKLD__CTOR_OFFSET UNITYSDK_OFFSET(0x169F7C10)

inline static constexpr unsigned int BJLJAEKDKLD_TypeDefinitionIndex = 60310;

class BJLJAEKDKLD : public ::JHCLHGCLLBF
{
public:
	::CJIEIHEDMME* LADPIPOMBJM; // 0x18

	::System::Void _ctor(::CJIEIHEDMME* PJBDLMBIIBH)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + BJLJAEKDKLD__CTOR_OFFSET))(this, PJBDLMBIIBH);
	}

	::System::Void OPMPMDMAENO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLJAEKDKLD_OPMPMDMAENO_OFFSET))(this);
	}

	::System::Void GKCLAFJFBNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLJAEKDKLD_GKCLAFJFBNF_OFFSET))(this);
	}
};
