#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NDHJFNPPMAN;

#define BJLGIIMGMKI_ELMLJFONICM_EBJEAFLILCL_OFFSET UNITYSDK_OFFSET(0xFF800D0)
#define BJLGIIMGMKI_ELMLJFONICM__CTOR_OFFSET UNITYSDK_OFFSET(0xFF800C0)

inline static constexpr unsigned int BJLGIIMGMKI_ELMLJFONICM_TypeDefinitionIndex = 68625;

class BJLGIIMGMKI_ELMLJFONICM : public ::System::Object
{
public:
	::System::Single PMNLNNGEIFM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLGIIMGMKI_ELMLJFONICM__CTOR_OFFSET))(this);
	}

	::System::Void EBJEAFLILCL(::NDHJFNPPMAN* KAPIEMFNKEF)
	{
		return ((::System::Void(*)(::PVOID, ::NDHJFNPPMAN*))((::PBYTE)hIl2Cpp + BJLGIIMGMKI_ELMLJFONICM_EBJEAFLILCL_OFFSET))(this, KAPIEMFNKEF);
	}
};
