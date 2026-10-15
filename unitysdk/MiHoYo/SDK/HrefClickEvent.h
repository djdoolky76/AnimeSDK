#pragma once
#include "unitysdk/unitysdk.h"

#define MIHOYO_SDK_HREFCLICKEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1BE7CCE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HrefClickEvent_TypeDefinitionIndex = 8021;

	class HrefClickEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HREFCLICKEVENT_CTOR_OFFSET))(this);
		}

	};
}
