#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/AssetPath.h"

class NBDLJECLJJO;

#define JIPGPEAMANB_CMOPJDHGBHG_OFFSET UNITYSDK_OFFSET(0x71FA20)
#define JIPGPEAMANB_EGNKAPHOIKM_OFFSET UNITYSDK_OFFSET(0x71FA00)

inline static constexpr unsigned int JIPGPEAMANB_TypeDefinitionIndex = 42529;

struct alignas(4) JIPGPEAMANB
{
	::Foundation::AssetPath EGNKAPHOIKM(::NBDLJECLJJO* KJNKCDKCNPJ)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::NBDLJECLJJO*))((::PBYTE)hIl2Cpp + JIPGPEAMANB_EGNKAPHOIKM_OFFSET))(this, KJNKCDKCNPJ);
	}

	::Foundation::AssetPath CMOPJDHGBHG(::NBDLJECLJJO* KJNKCDKCNPJ)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::NBDLJECLJJO*))((::PBYTE)hIl2Cpp + JIPGPEAMANB_CMOPJDHGBHG_OFFSET))(this, KJNKCDKCNPJ);
	}
};
