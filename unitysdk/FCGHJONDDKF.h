#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KADJHGPENEG.h"

#define FCGHJONDDKF_DBMPBAKLKPG_OFFSET UNITYSDK_OFFSET(0x14ABB640)
#define FCGHJONDDKF_OHJBCGJFNFB_OFFSET UNITYSDK_OFFSET(0x14ABB6C0)
#define FCGHJONDDKF__CTOR_OFFSET UNITYSDK_OFFSET(0x14ABB5B0)

inline static constexpr unsigned int FCGHJONDDKF_TypeDefinitionIndex = 64303;

class FCGHJONDDKF : public ::KADJHGPENEG
{
public:
	::System::Void _ctor(::System::Int32 EOGLMAEPALE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FCGHJONDDKF__CTOR_OFFSET))(this, EOGLMAEPALE);
	}

	::System::Void DBMPBAKLKPG(::System::Int32 CCJKBEFICAD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FCGHJONDDKF_DBMPBAKLKPG_OFFSET))(this, CCJKBEFICAD);
	}

	::System::Void OHJBCGJFNFB(::System::Int32 MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FCGHJONDDKF_OHJBCGJFNFB_OFFSET))(this, MIALFKCCCPI);
	}
};
