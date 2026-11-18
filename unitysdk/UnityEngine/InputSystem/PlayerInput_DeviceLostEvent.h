#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_DEVICELOSTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC21A10)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int PlayerInput_DeviceLostEvent_TypeDefinitionIndex = 31772;

	class PlayerInput_DeviceLostEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_DEVICELOSTEVENT__CTOR_OFFSET))(this);
		}
	};
}
