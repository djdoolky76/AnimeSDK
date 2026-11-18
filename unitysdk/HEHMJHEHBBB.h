#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LKKBFJKECBJ.h"
#include "unitysdk/System/ValueType.h"

#define HEHMJHEHBBB_LKELBEBFICP_OFFSET UNITYSDK_OFFSET(0x282350)
#define HEHMJHEHBBB_NDDGOOFFDFH_OFFSET UNITYSDK_OFFSET(0x358B00)

inline static constexpr unsigned int HEHMJHEHBBB_TypeDefinitionIndex = 76766;

struct alignas(4) HEHMJHEHBBB
{
	::LKKBFJKECBJ _BDNNHIGIMKM_k__BackingField; // 0x10

	::LKKBFJKECBJ LKELBEBFICP()
	{
		return ((::LKKBFJKECBJ(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHMJHEHBBB_LKELBEBFICP_OFFSET))(this);
	}

	::System::Void NDDGOOFFDFH(::LKKBFJKECBJ EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LKKBFJKECBJ))((::PBYTE)hIl2Cpp + HEHMJHEHBBB_NDDGOOFFDFH_OFFSET))(this, EGEGIMGMJHN);
	}
};
