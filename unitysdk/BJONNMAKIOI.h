#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHCLHGCLLBF.h"

class CJIEIHEDMME;

#define BJONNMAKIOI_GKCLAFJFBNF_OFFSET UNITYSDK_OFFSET(0x128AD390)
#define BJONNMAKIOI_OPMPMDMAENO_OFFSET UNITYSDK_OFFSET(0x128AD140)
#define BJONNMAKIOI__CTOR_OFFSET UNITYSDK_OFFSET(0x128AD020)

inline static constexpr unsigned int BJONNMAKIOI_TypeDefinitionIndex = 56261;

class BJONNMAKIOI : public ::JHCLHGCLLBF
{
public:
	::System::Boolean OCPMFMDMMDA; // 0x18

	::System::Void _ctor(::CJIEIHEDMME* PJBDLMBIIBH, ::System::Boolean OCPMFMDMMDA)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*, ::System::Boolean))((::PBYTE)hIl2Cpp + BJONNMAKIOI__CTOR_OFFSET))(this, PJBDLMBIIBH, OCPMFMDMMDA);
	}

	::System::Void OPMPMDMAENO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJONNMAKIOI_OPMPMDMAENO_OFFSET))(this);
	}

	::System::Void GKCLAFJFBNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJONNMAKIOI_GKCLAFJFBNF_OFFSET))(this);
	}
};
