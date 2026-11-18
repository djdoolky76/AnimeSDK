#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/AssetPath.h"

class NBDLJECLJJO;

#define EMBDAEPOIDE_CMOPJDHGBHG_OFFSET UNITYSDK_OFFSET(0x706F60)
#define EMBDAEPOIDE_EGNKAPHOIKM_OFFSET UNITYSDK_OFFSET(0x706F40)
#define EMBDAEPOIDE_LMGGJFOOGKH_OFFSET UNITYSDK_OFFSET(0x707010)

inline static constexpr unsigned int EMBDAEPOIDE_TypeDefinitionIndex = 57762;

struct alignas(4) EMBDAEPOIDE
{
	::Foundation::AssetPath EGNKAPHOIKM(::NBDLJECLJJO* KJNKCDKCNPJ)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::NBDLJECLJJO*))((::PBYTE)hIl2Cpp + EMBDAEPOIDE_EGNKAPHOIKM_OFFSET))(this, KJNKCDKCNPJ);
	}

	::Foundation::AssetPath CMOPJDHGBHG(::NBDLJECLJJO* KJNKCDKCNPJ)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::NBDLJECLJJO*))((::PBYTE)hIl2Cpp + EMBDAEPOIDE_CMOPJDHGBHG_OFFSET))(this, KJNKCDKCNPJ);
	}

	::System::Boolean LMGGJFOOGKH(::NBDLJECLJJO* KJNKCDKCNPJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::NBDLJECLJJO*))((::PBYTE)hIl2Cpp + EMBDAEPOIDE_LMGGJFOOGKH_OFFSET))(this, KJNKCDKCNPJ);
	}
};
