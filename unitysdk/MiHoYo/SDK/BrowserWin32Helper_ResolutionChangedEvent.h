#pragma once
#include "unitysdk/unitysdk.h"

#define MIHOYO_SDK_BROWSERWIN32HELPER_RESOLUTIONCHANGEDEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xAF63DF0)

namespace MiHoYo::SDK
{
	class BrowserWin32Helper_ResolutionChangedEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_RESOLUTIONCHANGEDEVENT_CTOR_OFFSET))(this);
		}

	};
}
