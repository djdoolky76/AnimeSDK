#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEvent.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/FourCC.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DEVICERESETEVENT_CREATE_OFFSET UNITYSDK_OFFSET(0x1EE2D560)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DEVICERESETEVENT_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x939010)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int DeviceResetEvent_TypeDefinitionIndex = 31973;

	struct alignas(4) DeviceResetEvent
	{
		// static const ::System::Int32 Type = 0x44525354; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent; // 0x10
		::System::Boolean hardReset; // 0x18

		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DEVICERESETEVENT_GET_TYPESTATIC_OFFSET))(this);
		}

		/*
		static ::UnityEngine::InputSystem::LowLevel::DeviceResetEvent Create(::System::Int32 deviceId, ::System::Boolean hardReset, ::System::Double time)
		{
			return ((::UnityEngine::InputSystem::LowLevel::DeviceResetEvent(*)(::System::Int32, ::System::Boolean, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DEVICERESETEVENT_CREATE_OFFSET))(deviceId, hardReset, time);
		}
		*/
	};
}
