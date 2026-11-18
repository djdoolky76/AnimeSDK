#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LFDAGLKHOED_GKEBEIBPHAH_DPHDOHEKKBD_OFFSET UNITYSDK_OFFSET(0x11F071C0)
#define LFDAGLKHOED_GKEBEIBPHAH_MBFHBIJFJND_OFFSET UNITYSDK_OFFSET(0x11F071D0)
#define LFDAGLKHOED_GKEBEIBPHAH__CTOR_OFFSET UNITYSDK_OFFSET(0x11F071B0)

inline static constexpr unsigned int LFDAGLKHOED_GKEBEIBPHAH_TypeDefinitionIndex = 53718;

class LFDAGLKHOED_GKEBEIBPHAH : public ::System::Object
{
public:
	::System::Boolean PCIEHDPJIDE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDAGLKHOED_GKEBEIBPHAH__CTOR_OFFSET))(this);
	}

	::System::Void DPHDOHEKKBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDAGLKHOED_GKEBEIBPHAH_DPHDOHEKKBD_OFFSET))(this);
	}

	::System::Boolean MBFHBIJFJND()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDAGLKHOED_GKEBEIBPHAH_MBFHBIJFJND_OFFSET))(this);
	}
};
