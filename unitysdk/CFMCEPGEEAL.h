#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KADJHGPENEG.h"

#define CFMCEPGEEAL_CNANDGKEMMM_OFFSET UNITYSDK_OFFSET(0x18DCE300)
#define CFMCEPGEEAL_DBMPBAKLKPG_OFFSET UNITYSDK_OFFSET(0x18DCE150)
#define CFMCEPGEEAL_EJIJNJLBGOI_OFFSET UNITYSDK_OFFSET(0x18DCE290)
#define CFMCEPGEEAL_FFGCPIHKLFO_OFFSET UNITYSDK_OFFSET(0x18DCE590)
#define CFMCEPGEEAL_GGANKGGOAOJ_OFFSET UNITYSDK_OFFSET(0x18DCE580)
#define CFMCEPGEEAL_OHJBCGJFNFB_OFFSET UNITYSDK_OFFSET(0x18DCE570)
#define CFMCEPGEEAL__CTOR_OFFSET UNITYSDK_OFFSET(0x18DCE0C0)

inline static constexpr unsigned int CFMCEPGEEAL_TypeDefinitionIndex = 54381;

class CFMCEPGEEAL : public ::KADJHGPENEG
{
public:
	::System::Void _ctor(::System::Int32 EOGLMAEPALE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFMCEPGEEAL__CTOR_OFFSET))(this, EOGLMAEPALE);
	}

	::System::Void DBMPBAKLKPG(::System::Int32 CCJKBEFICAD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFMCEPGEEAL_DBMPBAKLKPG_OFFSET))(this, CCJKBEFICAD);
	}

	::System::Boolean EJIJNJLBGOI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMCEPGEEAL_EJIJNJLBGOI_OFFSET))(this);
	}

	::System::Boolean CNANDGKEMMM(::System::Int32 NACGJJKHEJE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFMCEPGEEAL_CNANDGKEMMM_OFFSET))(this, NACGJJKHEJE);
	}

	::System::Void OHJBCGJFNFB(::System::Int32 MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFMCEPGEEAL_OHJBCGJFNFB_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean GGANKGGOAOJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMCEPGEEAL_GGANKGGOAOJ_OFFSET))(this);
	}

	::System::Boolean FFGCPIHKLFO(::System::Int32 MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFMCEPGEEAL_FFGCPIHKLFO_OFFSET))(this, MIALFKCCCPI);
	}
};
