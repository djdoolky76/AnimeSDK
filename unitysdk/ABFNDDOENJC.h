#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/AssetPath.h"

class NBDLJECLJJO;

#define ABFNDDOENJC_CMOPJDHGBHG_OFFSET UNITYSDK_OFFSET(0x7260C0)
#define ABFNDDOENJC_EGNKAPHOIKM_OFFSET UNITYSDK_OFFSET(0x7260A0)

inline static constexpr unsigned int ABFNDDOENJC_TypeDefinitionIndex = 45527;

struct alignas(4) ABFNDDOENJC
{
	::Foundation::AssetPath EGNKAPHOIKM(::NBDLJECLJJO* KJNKCDKCNPJ)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::NBDLJECLJJO*))((::PBYTE)hIl2Cpp + ABFNDDOENJC_EGNKAPHOIKM_OFFSET))(this, KJNKCDKCNPJ);
	}

	::Foundation::AssetPath CMOPJDHGBHG(::NBDLJECLJJO* KJNKCDKCNPJ)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::NBDLJECLJJO*))((::PBYTE)hIl2Cpp + ABFNDDOENJC_CMOPJDHGBHG_OFFSET))(this, KJNKCDKCNPJ);
	}
};
