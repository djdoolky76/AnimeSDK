#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/XInput/LowLevel/XInputControllerWindowsState_BF4D3D4044DCB407.h"
#include "unitysdk/AFB530854B88B5A8.h"

#define UNITYENGINE_INPUTSYSTEM_XINPUT_LOWLEVEL_XINPUTCONTROLLERWINDOWSSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x3F6FED0)
#define UNITYENGINE_INPUTSYSTEM_XINPUT_LOWLEVEL_XINPUTCONTROLLERWINDOWSSTATE_WITHBUTTON_OFFSET UNITYSDK_OFFSET(0x3F6FEA0)

namespace UnityEngine::InputSystem::XInput::LowLevel
{
	inline static constexpr unsigned int XInputControllerWindowsState_TypeDefinitionIndex = 14293;

	struct alignas(4) XInputControllerWindowsState
	{
		::System::UInt16 buttons; // 0x10
		::System::Byte leftTrigger; // 0x12
		::System::Byte rightTrigger; // 0x13
		::System::Int16 leftStickX; // 0x14
		::System::Int16 leftStickY; // 0x16
		::System::Int16 rightStickX; // 0x18
		::System::Int16 rightStickY; // 0x1A

		/*
		::UnityEngine::InputSystem::XInput::LowLevel::XInputControllerWindowsState WithButton(::UnityEngine::InputSystem::XInput::LowLevel::XInputControllerWindowsState_BF4D3D4044DCB407 A59E604D1E9B8ED2)
		{
			return ((::UnityEngine::InputSystem::XInput::LowLevel::XInputControllerWindowsState(*)(::PVOID, ::UnityEngine::InputSystem::XInput::LowLevel::XInputControllerWindowsState_BF4D3D4044DCB407))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_LOWLEVEL_XINPUTCONTROLLERWINDOWSSTATE_WITHBUTTON_OFFSET))(this, A59E604D1E9B8ED2);
		}
		*/

		::AFB530854B88B5A8 get_format()
		{
			return ((::AFB530854B88B5A8(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XINPUT_LOWLEVEL_XINPUTCONTROLLERWINDOWSSTATE_GET_FORMAT_OFFSET))(this);
		}
	};
}
