#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/AssetPath.h"

class NBDLJECLJJO;

#define CJIIHOIAEDB_CMOPJDHGBHG_OFFSET UNITYSDK_OFFSET(0x731590)
#define CJIIHOIAEDB_EGNKAPHOIKM_OFFSET UNITYSDK_OFFSET(0x7314E0)

inline static constexpr unsigned int CJIIHOIAEDB_TypeDefinitionIndex = 89816;

struct alignas(4) CJIIHOIAEDB
{
	::Foundation::AssetPath EGNKAPHOIKM(::NBDLJECLJJO* KJNKCDKCNPJ)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::NBDLJECLJJO*))((::PBYTE)hIl2Cpp + CJIIHOIAEDB_EGNKAPHOIKM_OFFSET))(this, KJNKCDKCNPJ);
	}

	::Foundation::AssetPath CMOPJDHGBHG(::NBDLJECLJJO* KJNKCDKCNPJ)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::NBDLJECLJJO*))((::PBYTE)hIl2Cpp + CJIIHOIAEDB_CMOPJDHGBHG_OFFSET))(this, KJNKCDKCNPJ);
	}
};
