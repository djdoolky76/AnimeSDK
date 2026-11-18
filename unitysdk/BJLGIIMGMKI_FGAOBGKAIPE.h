#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NDHJFNPPMAN;

#define BJLGIIMGMKI_FGAOBGKAIPE_MCOJMOMJBEL_OFFSET UNITYSDK_OFFSET(0xF79D8C0)
#define BJLGIIMGMKI_FGAOBGKAIPE__CTOR_OFFSET UNITYSDK_OFFSET(0xF79D8B0)

inline static constexpr unsigned int BJLGIIMGMKI_FGAOBGKAIPE_TypeDefinitionIndex = 68626;

class BJLGIIMGMKI_FGAOBGKAIPE : public ::System::Object
{
public:
	::System::Single LHLNCMNBGAG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLGIIMGMKI_FGAOBGKAIPE__CTOR_OFFSET))(this);
	}

	::System::Void MCOJMOMJBEL(::NDHJFNPPMAN* KAPIEMFNKEF)
	{
		return ((::System::Void(*)(::PVOID, ::NDHJFNPPMAN*))((::PBYTE)hIl2Cpp + BJLGIIMGMKI_FGAOBGKAIPE_MCOJMOMJBEL_OFFSET))(this, KAPIEMFNKEF);
	}
};
