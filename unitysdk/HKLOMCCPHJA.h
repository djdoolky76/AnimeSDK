#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/AssetPath.h"

class NBDLJECLJJO;

#define HKLOMCCPHJA_CMOPJDHGBHG_OFFSET UNITYSDK_OFFSET(0x742D10)
#define HKLOMCCPHJA_EGNKAPHOIKM_OFFSET UNITYSDK_OFFSET(0x742C60)

inline static constexpr unsigned int HKLOMCCPHJA_TypeDefinitionIndex = 65827;

struct alignas(4) HKLOMCCPHJA
{
	::Foundation::AssetPath EGNKAPHOIKM(::NBDLJECLJJO* KJNKCDKCNPJ)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::NBDLJECLJJO*))((::PBYTE)hIl2Cpp + HKLOMCCPHJA_EGNKAPHOIKM_OFFSET))(this, KJNKCDKCNPJ);
	}

	::Foundation::AssetPath CMOPJDHGBHG(::NBDLJECLJJO* KJNKCDKCNPJ)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::NBDLJECLJJO*))((::PBYTE)hIl2Cpp + HKLOMCCPHJA_CMOPJDHGBHG_OFFSET))(this, KJNKCDKCNPJ);
	}
};
