#pragma once
#include "unitysdk/unitysdk.h"

#define MIHOYO_SDK_HOYOUI_COLORVALUEMAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1AB4C700)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int ColorValueMap_TypeDefinitionIndex = 47755;

	class ColorValueMap
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_COLORVALUEMAP_CTOR_OFFSET))(this);
		}

	};
}
