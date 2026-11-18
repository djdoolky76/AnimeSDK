#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/TouchscreenState__primaryTouchData_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/TouchscreenState__touchData_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/FourCC.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x1DC6C420)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x8D3A50)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_PRIMARYTOUCH_OFFSET UNITYSDK_OFFSET(0x8D3A30)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_TOUCHES_OFFSET UNITYSDK_OFFSET(0x8D3A40)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int TouchscreenState_TypeDefinitionIndex = 31964;

	struct alignas(4) TouchscreenState
	{
		// static const ::System::Int32 MaxTouches = 0xA; // 0x0
		// static const ::System::Int32 kTouchDataOffset = 0x38; // 0x0
		::UnityEngine::InputSystem::LowLevel::TouchscreenState__primaryTouchData_e__FixedBuffer primaryTouchData; // 0x10
		::UnityEngine::InputSystem::LowLevel::TouchscreenState__touchData_e__FixedBuffer touchData; // 0x48

		static ::UnityEngine::InputSystem::Utilities::FourCC get_Format()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_FORMAT_OFFSET))();
		}

		::PVOID get_primaryTouch()
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_PRIMARYTOUCH_OFFSET))(this);
		}

		::PVOID get_touches()
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_TOUCHES_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::FourCC get_format()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_TOUCHSCREENSTATE_GET_FORMAT_OFFSET))(this);
		}
	};
}
