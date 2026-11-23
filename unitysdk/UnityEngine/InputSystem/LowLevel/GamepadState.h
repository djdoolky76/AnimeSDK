#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E7F9C9491EE9F059/F6D04AB81DB7440B.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/AFB530854B88B5A8.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GAMEPADSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x3F5F240)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GAMEPADSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x3F5F280)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GAMEPADSTATE_WITHBUTTON_OFFSET UNITYSDK_OFFSET(0x3F5F140)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GAMEPADSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x3F5F190)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int GamepadState_TypeDefinitionIndex = 14309;

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

		::AFB530854B88B5A8 get_format()
		{
			return ((::AFB530854B88B5A8(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GAMEPADSTATE_GET_FORMAT_OFFSET))(this);
		}

		static ::AFB530854B88B5A8 get_Format()
		{
			return ((::AFB530854B88B5A8(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GAMEPADSTATE_GET_FORMAT_OFFSET))();
		}

		::System::Void _ctor(::Il2CppArray<::E7F9C9491EE9F059::F6D04AB81DB7440B>* AB3E097290CF000E)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::E7F9C9491EE9F059::F6D04AB81DB7440B>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GAMEPADSTATE__CTOR_OFFSET))(this, AB3E097290CF000E);
		}

		/*
		::UnityEngine::InputSystem::LowLevel::GamepadState WithButton(::E7F9C9491EE9F059::F6D04AB81DB7440B A59E604D1E9B8ED2, ::System::Boolean E937D4885DAA1AE8)
		{
			return ((::UnityEngine::InputSystem::LowLevel::GamepadState(*)(::PVOID, ::E7F9C9491EE9F059::F6D04AB81DB7440B, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_GAMEPADSTATE_WITHBUTTON_OFFSET))(this, A59E604D1E9B8ED2, E937D4885DAA1AE8);
		}
		*/
	};
}
