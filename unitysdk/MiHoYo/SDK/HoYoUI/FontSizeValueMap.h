#pragma once
#include "unitysdk/unitysdk.h"

#define MIHOYO_SDK_HOYOUI_FONTSIZEVALUEMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x2961150)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int FontSizeValueMap_TypeDefinitionIndex = 15476;

	class FontSizeValueMap
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_FONTSIZEVALUEMAP__CTOR_OFFSET))(this);
		}
	};
}
