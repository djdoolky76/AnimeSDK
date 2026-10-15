#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK_JOYSTICKDRAGEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xD428B90)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimDynamicJoyStick_JoyStickDragEvent_TypeDefinitionIndex = 77220;

	class FiveDimDynamicJoyStick_JoyStickDragEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICK_JOYSTICKDRAGEVENT_CTOR_OFFSET))(this);
		}

	};
}
