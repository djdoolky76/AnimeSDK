#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/Unreal/Unsafe/Interval.h"

#define DMHAFAIPNGJ_EFMAOEKJIAB_COMPARE_OFFSET UNITYSDK_OFFSET(0x7EEC90)

inline static constexpr unsigned int DMHAFAIPNGJ_EFMAOEKJIAB_TypeDefinitionIndex = 91070;

struct alignas(4) DMHAFAIPNGJ_EFMAOEKJIAB
{
	::System::Int32 Compare(::Foundation::Unreal::Unsafe::Interval HAAEBCOBKFF, ::Foundation::Unreal::Unsafe::Interval BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::Foundation::Unreal::Unsafe::Interval, ::Foundation::Unreal::Unsafe::Interval))((::PBYTE)hIl2Cpp + DMHAFAIPNGJ_EFMAOEKJIAB_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
