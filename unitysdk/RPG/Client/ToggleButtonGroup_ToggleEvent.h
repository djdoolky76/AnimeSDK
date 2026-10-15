#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_TOGGLEBUTTONGROUP_TOGGLEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xE2B4360)

namespace RPG::Client
{
	inline static constexpr unsigned int ToggleButtonGroup_ToggleEvent_TypeDefinitionIndex = 72692;

	class ToggleButtonGroup_ToggleEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP_TOGGLEEVENT_CTOR_OFFSET))(this);
		}

	};
}
