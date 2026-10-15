#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_TOGGLEBUTTON_TOGGLEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xE2A8F90)

namespace RPG::Client
{
	inline static constexpr unsigned int ToggleButton_ToggleEvent_TypeDefinitionIndex = 72689;

	class ToggleButton_ToggleEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTON_TOGGLEEVENT_CTOR_OFFSET))(this);
		}

	};
}
