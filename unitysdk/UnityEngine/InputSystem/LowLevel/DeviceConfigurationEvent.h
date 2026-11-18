#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEvent.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/FourCC.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DEVICECONFIGURATIONEVENT_CREATE_OFFSET UNITYSDK_OFFSET(0x1E44D7A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DEVICECONFIGURATIONEVENT_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x8FED10)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DEVICECONFIGURATIONEVENT_TOEVENTPTR_OFFSET UNITYSDK_OFFSET(0x8D3A30)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int DeviceConfigurationEvent_TypeDefinitionIndex = 31971;

	struct alignas(4) DeviceConfigurationEvent
	{
		// static const ::System::Int32 Type = 0x44434647; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent; // 0x10

		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DEVICECONFIGURATIONEVENT_GET_TYPESTATIC_OFFSET))(this);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventPtr ToEventPtr()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DEVICECONFIGURATIONEVENT_TOEVENTPTR_OFFSET))(this);
		}

		/*
		static ::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent Create(::System::Int32 deviceId, ::System::Double time)
		{
			return ((::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent(*)(::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DEVICECONFIGURATIONEVENT_CREATE_OFFSET))(deviceId, time);
		}
		*/
	};
}
