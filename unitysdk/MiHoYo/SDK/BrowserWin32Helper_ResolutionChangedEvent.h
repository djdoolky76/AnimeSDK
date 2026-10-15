#pragma once
#include "unitysdk/unitysdk.h"

#define MIHOYO_SDK_BROWSERWIN32HELPER_RESOLUTIONCHANGEDEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xAF62D60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BrowserWin32Helper_ResolutionChangedEvent_TypeDefinitionIndex = 46615;

	class BrowserWin32Helper_ResolutionChangedEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_RESOLUTIONCHANGEDEVENT_CTOR_OFFSET))(this);
		}

	};
}
