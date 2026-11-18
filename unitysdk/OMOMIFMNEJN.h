#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MKEAICMIBPL.h"

class KDAMKPJPCME;

#define OMOMIFMNEJN_CJBCHJLHELG_OFFSET UNITYSDK_OFFSET(0x1ED4B0F0)
#define OMOMIFMNEJN__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED4B0B0)

inline static constexpr unsigned int OMOMIFMNEJN_TypeDefinitionIndex = 94434;

class OMOMIFMNEJN : public ::MKEAICMIBPL
{
public:
	::System::Void _ctor(::KDAMKPJPCME* JLLAMEIACCM)
	{
		return ((::System::Void(*)(::PVOID, ::KDAMKPJPCME*))((::PBYTE)hIl2Cpp + OMOMIFMNEJN__CTOR_OFFSET))(this, JLLAMEIACCM);
	}

	::System::Void CJBCHJLHELG(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OMOMIFMNEJN_CJBCHJLHELG_OFFSET))(this, PMNLNNGEIFM);
	}
};
