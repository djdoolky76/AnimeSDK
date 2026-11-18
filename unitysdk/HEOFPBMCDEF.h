#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/AssetPath.h"

class NBDLJECLJJO;

#define HEOFPBMCDEF_CMOPJDHGBHG_OFFSET UNITYSDK_OFFSET(0x660390)
#define HEOFPBMCDEF_EGNKAPHOIKM_OFFSET UNITYSDK_OFFSET(0x6602E0)

inline static constexpr unsigned int HEOFPBMCDEF_TypeDefinitionIndex = 52394;

struct alignas(4) HEOFPBMCDEF
{
	::Foundation::AssetPath EGNKAPHOIKM(::NBDLJECLJJO* KJNKCDKCNPJ)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::NBDLJECLJJO*))((::PBYTE)hIl2Cpp + HEOFPBMCDEF_EGNKAPHOIKM_OFFSET))(this, KJNKCDKCNPJ);
	}

	::Foundation::AssetPath CMOPJDHGBHG(::NBDLJECLJJO* KJNKCDKCNPJ)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::NBDLJECLJJO*))((::PBYTE)hIl2Cpp + HEOFPBMCDEF_CMOPJDHGBHG_OFFSET))(this, KJNKCDKCNPJ);
	}
};
