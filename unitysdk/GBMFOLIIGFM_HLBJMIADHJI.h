#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LFBBIECPOLF.h"
#include "unitysdk/System/Object.h"

class GBMFOLIIGFM;

#define GBMFOLIIGFM_HLBJMIADHJI_MMECNEMDMLP_OFFSET UNITYSDK_OFFSET(0x179CDD60)
#define GBMFOLIIGFM_HLBJMIADHJI__CTOR_OFFSET UNITYSDK_OFFSET(0x179CDD50)

inline static constexpr unsigned int GBMFOLIIGFM_HLBJMIADHJI_TypeDefinitionIndex = 90134;

class GBMFOLIIGFM_HLBJMIADHJI : public ::System::Object
{
public:
	::LFBBIECPOLF NOMCLDGPNAF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMFOLIIGFM_HLBJMIADHJI__CTOR_OFFSET))(this);
	}

	::System::Boolean MMECNEMDMLP(::GBMFOLIIGFM* EJCBEJMGFAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::GBMFOLIIGFM*))((::PBYTE)hIl2Cpp + GBMFOLIIGFM_HLBJMIADHJI_MMECNEMDMLP_OFFSET))(this, EJCBEJMGFAJ);
	}
};
