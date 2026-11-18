#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/GamepadButton.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/FourCC.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GAMEPADSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x1EEDC1A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GAMEPADSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x93C970)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GAMEPADSTATE_WITHBUTTON_OFFSET UNITYSDK_OFFSET(0x93C990)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GAMEPADSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x93C980)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int GamepadState_TypeDefinitionIndex = 31941;

	struct alignas(4) GamepadState
	{
		// static const ::System::String* ButtonSouthShortDisplayName; // 0x0
		// static const ::System::String* ButtonNorthShortDisplayName; // 0x0
		// static const ::System::String* ButtonWestShortDisplayName; // 0x0
		// static const ::System::String* ButtonEastShortDisplayName; // 0x0
		::System::UInt32 buttons; // 0x10
		::UnityEngine::Vector2 leftStick; // 0x14
		::UnityEngine::Vector2 rightStick; // 0x1C
		::System::Single leftTrigger; // 0x24
		::System::Single rightTrigger; // 0x28

		::System::Void _ctor(::Il2CppArray<::UnityEngine::InputSystem::LowLevel::GamepadButton>* buttons)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::InputSystem::LowLevel::GamepadButton>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GAMEPADSTATE__CTOR_OFFSET))(this, buttons);
		}

		static ::UnityEngine::InputSystem::Utilities::FourCC get_Format()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GAMEPADSTATE_GET_FORMAT_OFFSET))();
		}

		::UnityEngine::InputSystem::Utilities::FourCC get_format()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GAMEPADSTATE_GET_FORMAT_OFFSET))(this);
		}

		/*
		::UnityEngine::InputSystem::LowLevel::GamepadState WithButton(::UnityEngine::InputSystem::LowLevel::GamepadButton button, ::System::Boolean value)
		{
			return ((::UnityEngine::InputSystem::LowLevel::GamepadState(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::GamepadButton, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GAMEPADSTATE_WITHBUTTON_OFFSET))(this, button, value);
		}
		*/
	};
}
