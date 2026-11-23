#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/TouchscreenState_B15EBE54D4508E12.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/TouchscreenState_E5D3F76A2B54CDF1.h"
#include "unitysdk/AFB530854B88B5A8.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x4020000)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x4020040)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_PRIMARYTOUCH_OFFSET UNITYSDK_OFFSET(0x1F2A920)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_TOUCHES_OFFSET UNITYSDK_OFFSET(0x4020080)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int TouchscreenState_TypeDefinitionIndex = 14553;

	struct alignas(4) TouchscreenState
	{
		// static const ::System::Int32 MaxTouches = 0xA; // 0x0
		// static const ::System::Int32 kTouchDataOffset = 0x38; // 0x0
		::UnityEngine::InputSystem::LowLevel::TouchscreenState_B15EBE54D4508E12 primaryTouchData; // 0x10
		::UnityEngine::InputSystem::LowLevel::TouchscreenState_E5D3F76A2B54CDF1 touchData; // 0x48

		::AFB530854B88B5A8 get_format()
		{
			return ((::AFB530854B88B5A8(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_FORMAT_OFFSET))(this);
		}

		::PVOID get_touches()
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_TOUCHES_OFFSET))(this);
		}

		::PVOID get_primaryTouch()
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_PRIMARYTOUCH_OFFSET))(this);
		}

		static ::AFB530854B88B5A8 get_Format()
		{
			return ((::AFB530854B88B5A8(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_FORMAT_OFFSET))();
		}
	};
}
