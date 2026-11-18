#pragma once
#include "unitysdk/unitysdk.h"

#define MIHOYO_SDK_HREFCLICKEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC0DF0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HrefClickEvent_TypeDefinitionIndex = 19277;

	class HrefClickEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HREFCLICKEVENT__CTOR_OFFSET))(this);
		}
	};
}
