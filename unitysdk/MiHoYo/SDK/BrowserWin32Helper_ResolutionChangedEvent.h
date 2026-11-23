#pragma once
#include "unitysdk/unitysdk.h"

#define MIHOYO_SDK_BROWSERWIN32HELPER_RESOLUTIONCHANGEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x29E5670)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BrowserWin32Helper_ResolutionChangedEvent_TypeDefinitionIndex = 15724;

	class BrowserWin32Helper_ResolutionChangedEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_RESOLUTIONCHANGEDEVENT__CTOR_OFFSET))(this);
		}
	};
}
