#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LEABCANNGFG.h"
#include "unitysdk/System/ValueType.h"

#define MHAKJKLLPBA_BAICKPPPCJC_OFFSET UNITYSDK_OFFSET(0x36C210)
#define MHAKJKLLPBA_JOGDDLNMABH_OFFSET UNITYSDK_OFFSET(0x36BEF0)

inline static constexpr unsigned int MHAKJKLLPBA_TypeDefinitionIndex = 38359;

struct alignas(4) MHAKJKLLPBA
{
	::LEABCANNGFG _BJIBFCDGPFM_k__BackingField; // 0x10

	::System::Void JOGDDLNMABH(::LEABCANNGFG EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LEABCANNGFG))((::PBYTE)hIl2Cpp + MHAKJKLLPBA_JOGDDLNMABH_OFFSET))(this, EGEGIMGMJHN);
	}

	::LEABCANNGFG BAICKPPPCJC()
	{
		return ((::LEABCANNGFG(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAKJKLLPBA_BAICKPPPCJC_OFFSET))(this);
	}
};
