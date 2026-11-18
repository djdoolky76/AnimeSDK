#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_DEVICEREGAINEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F78C250)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int PlayerInput_DeviceRegainedEvent_TypeDefinitionIndex = 31773;

	class PlayerInput_DeviceRegainedEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_DEVICEREGAINEDEVENT__CTOR_OFFSET))(this);
		}
	};
}
