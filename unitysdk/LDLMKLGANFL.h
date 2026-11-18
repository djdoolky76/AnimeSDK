#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KADJHGPENEG.h"

#define LDLMKLGANFL_DBMPBAKLKPG_OFFSET UNITYSDK_OFFSET(0x15BD4040)
#define LDLMKLGANFL_OHJBCGJFNFB_OFFSET UNITYSDK_OFFSET(0x15BD4100)
#define LDLMKLGANFL__CTOR_OFFSET UNITYSDK_OFFSET(0x15BD3FB0)

inline static constexpr unsigned int LDLMKLGANFL_TypeDefinitionIndex = 56905;

class LDLMKLGANFL : public ::KADJHGPENEG
{
public:
	::System::Void _ctor(::System::Int32 EOGLMAEPALE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDLMKLGANFL__CTOR_OFFSET))(this, EOGLMAEPALE);
	}

	::System::Void DBMPBAKLKPG(::System::Int32 CCJKBEFICAD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDLMKLGANFL_DBMPBAKLKPG_OFFSET))(this, CCJKBEFICAD);
	}

	::System::Void OHJBCGJFNFB(::System::Int32 MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDLMKLGANFL_OHJBCGJFNFB_OFFSET))(this, MIALFKCCCPI);
	}
};
