#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LFDAGLKHOED_KPAHKAOJKNC_FELJPOEIEFP_OFFSET UNITYSDK_OFFSET(0x12560380)
#define LFDAGLKHOED_KPAHKAOJKNC_HMENFFBGMHE_OFFSET UNITYSDK_OFFSET(0x12560370)
#define LFDAGLKHOED_KPAHKAOJKNC__CTOR_OFFSET UNITYSDK_OFFSET(0x12560360)

inline static constexpr unsigned int LFDAGLKHOED_KPAHKAOJKNC_TypeDefinitionIndex = 53715;

class LFDAGLKHOED_KPAHKAOJKNC : public ::System::Object
{
public:
	::System::Boolean PCIEHDPJIDE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDAGLKHOED_KPAHKAOJKNC__CTOR_OFFSET))(this);
	}

	::System::Void HMENFFBGMHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDAGLKHOED_KPAHKAOJKNC_HMENFFBGMHE_OFFSET))(this);
	}

	::System::Boolean FELJPOEIEFP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDAGLKHOED_KPAHKAOJKNC_FELJPOEIEFP_OFFSET))(this);
	}
};
