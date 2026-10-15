#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_TOGGLEBUTTONGROUP_TOGGLEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xE2B4360)

namespace RPG::Client
{
	class ToggleButtonGroup_ToggleEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP_TOGGLEEVENT_CTOR_OFFSET))(this);
		}

	};
}
