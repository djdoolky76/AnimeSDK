#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputDevice.h"

#define UNITYENGINE_INPUTSYSTEM_SENSOR_GET_SAMPLINGFREQUENCY_OFFSET UNITYSDK_OFFSET(0x401FDD0)
#define UNITYENGINE_INPUTSYSTEM_SENSOR_SET_SAMPLINGFREQUENCY_OFFSET UNITYSDK_OFFSET(0x401FEB0)
#define UNITYENGINE_INPUTSYSTEM_SENSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x3F54170)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Sensor_TypeDefinitionIndex = 14566;

	class Sensor : public ::UnityEngine::InputSystem::InputDevice
	{
	public:
		::System::Single get_samplingFrequency()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SENSOR_GET_SAMPLINGFREQUENCY_OFFSET))(this);
		}

		::System::Void set_samplingFrequency(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SENSOR_SET_SAMPLINGFREQUENCY_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SENSOR__CTOR_OFFSET))(this);
		}
	};
}
