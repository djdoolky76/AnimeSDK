#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AFB530854B88B5A8.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Switch/LowLevel/SwitchProControllerHIDInputState_BF4D3D4044DCB407.h"

#define UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x3FEFB00)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE_PRESS_OFFSET UNITYSDK_OFFSET(0x3FEF820)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE_RELEASE_OFFSET UNITYSDK_OFFSET(0x3FEF8B0)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE_SET_OFFSET UNITYSDK_OFFSET(0x3FEF940)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE_WITHBUTTON_OFFSET UNITYSDK_OFFSET(0x3FEF9B0)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x3FEFA90)

namespace UnityEngine::InputSystem::Switch::LowLevel
{
	inline static constexpr unsigned int SwitchProControllerHIDInputState_TypeDefinitionIndex = 14460;

	struct alignas(4) SwitchProControllerHIDInputState
	{
		static ::AFB530854B88B5A8* StaticGet_Format()
		{
			return (::AFB530854B88B5A8*)Il2CppClass::FromTypeDefinitionIndex(SwitchProControllerHIDInputState_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Byte leftStickX; // 0x10
		::System::Byte leftStickY; // 0x11
		::System::Byte rightStickX; // 0x12
		::System::Byte rightStickY; // 0x13
		::System::UInt16 buttons1; // 0x14
		::System::Byte buttons2; // 0x16

		::System::Void Set(::UnityEngine::InputSystem::Switch::LowLevel::SwitchProControllerHIDInputState_BF4D3D4044DCB407 A59E604D1E9B8ED2, ::System::Boolean E5EB06E4FD2C32F7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Switch::LowLevel::SwitchProControllerHIDInputState_BF4D3D4044DCB407, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE_SET_OFFSET))(this, A59E604D1E9B8ED2, E5EB06E4FD2C32F7);
		}

		/*
		::UnityEngine::InputSystem::Switch::LowLevel::SwitchProControllerHIDInputState WithButton(::UnityEngine::InputSystem::Switch::LowLevel::SwitchProControllerHIDInputState_BF4D3D4044DCB407 A59E604D1E9B8ED2, ::System::Boolean E937D4885DAA1AE8)
		{
			return ((::UnityEngine::InputSystem::Switch::LowLevel::SwitchProControllerHIDInputState(*)(::PVOID, ::UnityEngine::InputSystem::Switch::LowLevel::SwitchProControllerHIDInputState_BF4D3D4044DCB407, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE_WITHBUTTON_OFFSET))(this, A59E604D1E9B8ED2, E937D4885DAA1AE8);
		}
		*/

		::System::Void Release(::UnityEngine::InputSystem::Switch::LowLevel::SwitchProControllerHIDInputState_BF4D3D4044DCB407 A59E604D1E9B8ED2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Switch::LowLevel::SwitchProControllerHIDInputState_BF4D3D4044DCB407))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE_RELEASE_OFFSET))(this, A59E604D1E9B8ED2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE__CCTOR_OFFSET))();
		}

		::AFB530854B88B5A8 get_format()
		{
			return ((::AFB530854B88B5A8(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE_GET_FORMAT_OFFSET))(this);
		}

		::System::Void Press(::UnityEngine::InputSystem::Switch::LowLevel::SwitchProControllerHIDInputState_BF4D3D4044DCB407 A59E604D1E9B8ED2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Switch::LowLevel::SwitchProControllerHIDInputState_BF4D3D4044DCB407))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_LOWLEVEL_SWITCHPROCONTROLLERHIDINPUTSTATE_PRESS_OFFSET))(this, A59E604D1E9B8ED2);
		}
	};
}
