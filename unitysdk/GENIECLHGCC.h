#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIJPHJOBLBI.h"

#define GENIECLHGCC_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x13DD2970)
#define GENIECLHGCC_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x13DD2A50)
#define GENIECLHGCC_PBGJKMAEINN_OFFSET UNITYSDK_OFFSET(0x13DD2AF0)
#define GENIECLHGCC_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x13DD2B90)
#define GENIECLHGCC__CTOR_OFFSET UNITYSDK_OFFSET(0x13DD2AE0)

inline static constexpr unsigned int GENIECLHGCC_TypeDefinitionIndex = 78634;

class GENIECLHGCC : public ::PIJPHJOBLBI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GENIECLHGCC__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::Int32 HJOBJCCCJOD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GENIECLHGCC_BBOMJDBNHIC_OFFSET))(this, HJOBJCCCJOD);
	}

	::System::Void DFJPMOOOLHM(::System::Int32 HNOPAJLDCFB, ::System::Int32 GEGOALONGBI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GENIECLHGCC_DFJPMOOOLHM_OFFSET))(this, HNOPAJLDCFB, GEGOALONGBI);
	}

	::System::Void PBGJKMAEINN(::System::Int32 MIALFKCCCPI, ::System::Int32 KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GENIECLHGCC_PBGJKMAEINN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void PNHPDOBPKKE(::System::Int32 MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GENIECLHGCC_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI);
	}
};
