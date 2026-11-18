#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KADJHGPENEG.h"

#define MELGIAFAFPJ_DBMPBAKLKPG_OFFSET UNITYSDK_OFFSET(0x13D1F5F0)
#define MELGIAFAFPJ_OHJBCGJFNFB_OFFSET UNITYSDK_OFFSET(0x13D1F670)
#define MELGIAFAFPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13D1F560)

inline static constexpr unsigned int MELGIAFAFPJ_TypeDefinitionIndex = 56116;

class MELGIAFAFPJ : public ::KADJHGPENEG
{
public:
	::System::Void _ctor(::System::Int32 EOGLMAEPALE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MELGIAFAFPJ__CTOR_OFFSET))(this, EOGLMAEPALE);
	}

	::System::Void DBMPBAKLKPG(::System::Int32 CCJKBEFICAD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MELGIAFAFPJ_DBMPBAKLKPG_OFFSET))(this, CCJKBEFICAD);
	}

	::System::Void OHJBCGJFNFB(::System::Int32 MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MELGIAFAFPJ_OHJBCGJFNFB_OFFSET))(this, MIALFKCCCPI);
	}
};
