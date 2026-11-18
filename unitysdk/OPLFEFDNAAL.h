#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/AssetPath.h"

class NBDLJECLJJO;

#define OPLFEFDNAAL_CMOPJDHGBHG_OFFSET UNITYSDK_OFFSET(0x7CB840)
#define OPLFEFDNAAL_EGNKAPHOIKM_OFFSET UNITYSDK_OFFSET(0x7CB790)

inline static constexpr unsigned int OPLFEFDNAAL_TypeDefinitionIndex = 46996;

struct alignas(4) OPLFEFDNAAL
{
	::Foundation::AssetPath EGNKAPHOIKM(::NBDLJECLJJO* KJNKCDKCNPJ)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::NBDLJECLJJO*))((::PBYTE)hIl2Cpp + OPLFEFDNAAL_EGNKAPHOIKM_OFFSET))(this, KJNKCDKCNPJ);
	}

	::Foundation::AssetPath CMOPJDHGBHG(::NBDLJECLJJO* KJNKCDKCNPJ)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::NBDLJECLJJO*))((::PBYTE)hIl2Cpp + OPLFEFDNAAL_CMOPJDHGBHG_OFFSET))(this, KJNKCDKCNPJ);
	}
};
