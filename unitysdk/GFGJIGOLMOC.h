#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KCCDJGBJGLD.h"

#define GFGJIGOLMOC_DGEJBIKMFPG_OFFSET UNITYSDK_OFFSET(0x15CE12F0)
#define GFGJIGOLMOC_IPECOHIBGLC_OFFSET UNITYSDK_OFFSET(0x15CE12E0)
#define GFGJIGOLMOC__CTOR_OFFSET UNITYSDK_OFFSET(0x15CE1230)

inline static constexpr unsigned int GFGJIGOLMOC_TypeDefinitionIndex = 62504;

class GFGJIGOLMOC : public ::KCCDJGBJGLD
{
public:
	::System::UInt32 _HPKCKKLILHF_k__BackingField; // 0x40

	::System::Void _ctor(::System::UInt32 OMDIPCJNPJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFGJIGOLMOC__CTOR_OFFSET))(this, OMDIPCJNPJC);
	}

	::System::Void IPECOHIBGLC(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFGJIGOLMOC_IPECOHIBGLC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt32 DGEJBIKMFPG()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGJIGOLMOC_DGEJBIKMFPG_OFFSET))(this);
	}
};
