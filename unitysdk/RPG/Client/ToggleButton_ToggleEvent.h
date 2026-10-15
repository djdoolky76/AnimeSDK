#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_TOGGLEBUTTON_TOGGLEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xE2B3DA0)

namespace RPG::Client
{
	class ToggleButton_ToggleEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_TOGGLEEVENT_CTOR_OFFSET))(this);
		}

	};
}
