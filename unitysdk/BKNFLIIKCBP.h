#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/AssetPath.h"

class NBDLJECLJJO;

#define BKNFLIIKCBP_CMOPJDHGBHG_OFFSET UNITYSDK_OFFSET(0x7502A0)
#define BKNFLIIKCBP_EGNKAPHOIKM_OFFSET UNITYSDK_OFFSET(0x750280)
#define BKNFLIIKCBP_LMGGJFOOGKH_OFFSET UNITYSDK_OFFSET(0x750350)

inline static constexpr unsigned int BKNFLIIKCBP_TypeDefinitionIndex = 51748;

struct alignas(4) BKNFLIIKCBP
{
	::Foundation::AssetPath EGNKAPHOIKM(::NBDLJECLJJO* KJNKCDKCNPJ)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::NBDLJECLJJO*))((::PBYTE)hIl2Cpp + BKNFLIIKCBP_EGNKAPHOIKM_OFFSET))(this, KJNKCDKCNPJ);
	}

	::Foundation::AssetPath CMOPJDHGBHG(::NBDLJECLJJO* KJNKCDKCNPJ)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::NBDLJECLJJO*))((::PBYTE)hIl2Cpp + BKNFLIIKCBP_CMOPJDHGBHG_OFFSET))(this, KJNKCDKCNPJ);
	}

	::System::Boolean LMGGJFOOGKH(::NBDLJECLJJO* KJNKCDKCNPJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::NBDLJECLJJO*))((::PBYTE)hIl2Cpp + BKNFLIIKCBP_LMGGJFOOGKH_OFFSET))(this, KJNKCDKCNPJ);
	}
};
