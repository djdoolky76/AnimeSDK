#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/JSONObject.h"

#define MIHOYO_SDK_HOYOUI_COLORSTRINGMAP_CTOR_OFFSET UNITYSDK_OFFSET(0xAFAB700)

namespace MiHoYo::SDK::HoYoUI
{
	class ColorStringMap : public ::MiHoYo::SDK::JSONObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_COLORSTRINGMAP_CTOR_OFFSET))(this);
		}

	};
}
