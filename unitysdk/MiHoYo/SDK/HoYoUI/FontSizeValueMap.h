#pragma once
#include "unitysdk/unitysdk.h"

#define MIHOYO_SDK_HOYOUI_FONTSIZEVALUEMAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1AB4C790)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int FontSizeValueMap_TypeDefinitionIndex = 47754;

	class FontSizeValueMap
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_FONTSIZEVALUEMAP_CTOR_OFFSET))(this);
		}

	};
}
