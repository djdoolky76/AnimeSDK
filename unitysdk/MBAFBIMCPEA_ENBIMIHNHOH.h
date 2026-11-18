#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MBAFBIMCPEA_ENBIMIHNHOH_CADJHOFHAAA_OFFSET UNITYSDK_OFFSET(0x358800)
#define MBAFBIMCPEA_ENBIMIHNHOH_DKBHLNIBCMP_OFFSET UNITYSDK_OFFSET(0x5C7520)
#define MBAFBIMCPEA_ENBIMIHNHOH_FHOIPEJPEGP_OFFSET UNITYSDK_OFFSET(0x358A70)
#define MBAFBIMCPEA_ENBIMIHNHOH_MCDFOIAJHJL_OFFSET UNITYSDK_OFFSET(0x409330)

inline static constexpr unsigned int MBAFBIMCPEA_ENBIMIHNHOH_TypeDefinitionIndex = 92164;

struct alignas(4) MBAFBIMCPEA_ENBIMIHNHOH
{
	::System::Single _IEKGKNCPIGP_k__BackingField; // 0x10
	::System::Single _HELACPMABNF_k__BackingField; // 0x14

	::System::Void CADJHOFHAAA(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MBAFBIMCPEA_ENBIMIHNHOH_CADJHOFHAAA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single MCDFOIAJHJL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAFBIMCPEA_ENBIMIHNHOH_MCDFOIAJHJL_OFFSET))(this);
	}

	::System::Single FHOIPEJPEGP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAFBIMCPEA_ENBIMIHNHOH_FHOIPEJPEGP_OFFSET))(this);
	}

	::System::Void DKBHLNIBCMP(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MBAFBIMCPEA_ENBIMIHNHOH_DKBHLNIBCMP_OFFSET))(this, EGEGIMGMJHN);
	}
};
