#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_UIMONOJOYSTICK_JOYSTICKDRAGEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xEE85500)

namespace RPG::Client
{
	inline static constexpr unsigned int UIMonoJoyStick_JoyStickDragEvent_TypeDefinitionIndex = 74917;

	class UIMonoJoyStick_JoyStickDragEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_JOYSTICKDRAGEVENT_CTOR_OFFSET))(this);
		}

	};
}
