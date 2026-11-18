#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIJPHJOBLBI.h"

#define NDJPKAHIIPM_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1288C620)
#define NDJPKAHIIPM_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x1288C710)
#define NDJPKAHIIPM_PBGJKMAEINN_OFFSET UNITYSDK_OFFSET(0x1288C860)
#define NDJPKAHIIPM_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x1288C7C0)
#define NDJPKAHIIPM__CTOR_OFFSET UNITYSDK_OFFSET(0x1288C7B0)

inline static constexpr unsigned int NDJPKAHIIPM_TypeDefinitionIndex = 71676;

class NDJPKAHIIPM : public ::PIJPHJOBLBI
{
public:
	::System::Int32 ALOGOFABKDB; // 0x20
	::System::Int32 KCNOHOOPNAH; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJPKAHIIPM__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::Int32 HJOBJCCCJOD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NDJPKAHIIPM_BBOMJDBNHIC_OFFSET))(this, HJOBJCCCJOD);
	}

	::System::Void DFJPMOOOLHM(::System::Int32 HNOPAJLDCFB, ::System::Int32 GEGOALONGBI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NDJPKAHIIPM_DFJPMOOOLHM_OFFSET))(this, HNOPAJLDCFB, GEGOALONGBI);
	}

	::System::Void PNHPDOBPKKE(::System::Int32 MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NDJPKAHIIPM_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void PBGJKMAEINN(::System::Int32 MIALFKCCCPI, ::System::Int32 KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NDJPKAHIIPM_PBGJKMAEINN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
