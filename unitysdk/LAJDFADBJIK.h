#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/AssetPath.h"

class NBDLJECLJJO;

#define LAJDFADBJIK_CMOPJDHGBHG_OFFSET UNITYSDK_OFFSET(0x7B0310)
#define LAJDFADBJIK_EGNKAPHOIKM_OFFSET UNITYSDK_OFFSET(0x7B0260)

inline static constexpr unsigned int LAJDFADBJIK_TypeDefinitionIndex = 55444;

struct alignas(4) LAJDFADBJIK
{
	::Foundation::AssetPath EGNKAPHOIKM(::NBDLJECLJJO* KJNKCDKCNPJ)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::NBDLJECLJJO*))((::PBYTE)hIl2Cpp + LAJDFADBJIK_EGNKAPHOIKM_OFFSET))(this, KJNKCDKCNPJ);
	}

	::Foundation::AssetPath CMOPJDHGBHG(::NBDLJECLJJO* KJNKCDKCNPJ)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::NBDLJECLJJO*))((::PBYTE)hIl2Cpp + LAJDFADBJIK_CMOPJDHGBHG_OFFSET))(this, KJNKCDKCNPJ);
	}
};
