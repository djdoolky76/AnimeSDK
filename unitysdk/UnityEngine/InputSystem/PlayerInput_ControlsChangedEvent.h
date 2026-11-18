#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_CONTROLSCHANGEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E451BA0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int PlayerInput_ControlsChangedEvent_TypeDefinitionIndex = 31774;

	class PlayerInput_ControlsChangedEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_CONTROLSCHANGEDEVENT__CTOR_OFFSET))(this);
		}
	};
}
