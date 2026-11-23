#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/AFB530854B88B5A8.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_JOYSTICKSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x3FBF170)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_JOYSTICKSTATE_GET_KFORMAT_OFFSET UNITYSDK_OFFSET(0x3FBF170)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int JoystickState_TypeDefinitionIndex = 14339;

	struct alignas(4) JoystickState
	{
		::System::Int32 buttons; // 0x10
		::UnityEngine::Vector2 stick; // 0x14

		::AFB530854B88B5A8 get_format()
		{
			return ((::AFB530854B88B5A8(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_JOYSTICKSTATE_GET_FORMAT_OFFSET))(this);
		}

		static ::AFB530854B88B5A8 get_kFormat()
		{
			return ((::AFB530854B88B5A8(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_JOYSTICKSTATE_GET_KFORMAT_OFFSET))();
		}
	};
}
