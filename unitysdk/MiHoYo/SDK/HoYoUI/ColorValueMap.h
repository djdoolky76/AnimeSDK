#pragma once
#include "unitysdk/unitysdk.h"

#define MIHOYO_SDK_HOYOUI_COLORVALUEMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x294A370)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int ColorValueMap_TypeDefinitionIndex = 15431;

	class ColorValueMap
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_COLORVALUEMAP__CTOR_OFFSET))(this);
		}
	};
}
