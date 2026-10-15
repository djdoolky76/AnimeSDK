#pragma once
#include "unitysdk/unitysdk.h"

#define MIHOYO_SDK_HOYOUI_FONTSIZEVALUEMAP_CTOR_OFFSET UNITYSDK_OFFSET(0xAFAB7A0)

namespace MiHoYo::SDK::HoYoUI
{
	class FontSizeValueMap
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_FONTSIZEVALUEMAP_CTOR_OFFSET))(this);
		}

	};
}
