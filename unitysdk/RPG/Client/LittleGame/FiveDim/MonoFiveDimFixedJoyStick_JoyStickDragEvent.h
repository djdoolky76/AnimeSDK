#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_JOYSTICKDRAGEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xD459810)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int MonoFiveDimFixedJoyStick_JoyStickDragEvent_TypeDefinitionIndex = 77237;

	class MonoFiveDimFixedJoyStick_JoyStickDragEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_JOYSTICKDRAGEVENT_CTOR_OFFSET))(this);
		}

	};
}
