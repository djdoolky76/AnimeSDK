#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PC_OS_STEAMPURCHASEEXTENSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF427A0)

namespace MiHoYo::SDK::PC::OS
{
	class SteamPurchaseExtension : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_STEAMPURCHASEEXTENSION_CTOR_OFFSET))(this);
		}

	};
}
