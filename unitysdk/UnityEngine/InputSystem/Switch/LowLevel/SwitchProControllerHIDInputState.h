#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Switch/LowLevel/SwitchProControllerHIDInputState_Button.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/FourCC.h"

#define UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x919000)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE_GET_LEFTTRIGGER_OFFSET UNITYSDK_OFFSET(0x97D780)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE_GET_RIGHTTRIGGER_OFFSET UNITYSDK_OFFSET(0x97D7A0)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE_WITHBUTTON_OFFSET UNITYSDK_OFFSET(0x97D7C0)

namespace UnityEngine::InputSystem::Switch::LowLevel
{
	inline static constexpr unsigned int SwitchProControllerHIDInputState_TypeDefinitionIndex = 31849;

	struct alignas(4) SwitchProControllerHIDInputState
	{
		::System::UInt32 buttons; // 0x10
		::System::UInt16 leftStickX; // 0x14
		::System::UInt16 leftStickY; // 0x16
		::System::UInt16 rightStickX; // 0x18
		::System::UInt16 rightStickY; // 0x1A

		::UnityEngine::InputSystem::Utilities::FourCC get_format()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE_GET_FORMAT_OFFSET))(this);
		}

		::System::Single get_leftTrigger()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE_GET_LEFTTRIGGER_OFFSET))(this);
		}

		::System::Single get_rightTrigger()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE_GET_RIGHTTRIGGER_OFFSET))(this);
		}

		/*
		::UnityEngine::InputSystem::Switch::LowLevel::SwitchProControllerHIDInputState WithButton(::UnityEngine::InputSystem::Switch::LowLevel::SwitchProControllerHIDInputState_Button button, ::System::Boolean value)
		{
			return ((::UnityEngine::InputSystem::Switch::LowLevel::SwitchProControllerHIDInputState(*)(::PVOID, ::UnityEngine::InputSystem::Switch::LowLevel::SwitchProControllerHIDInputState_Button, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE_WITHBUTTON_OFFSET))(this, button, value);
		}
		*/
	};
}
