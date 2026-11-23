#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Sensor.h"

namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3F54CD0)
#define UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_GET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x385A040)
#define UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3F54E30)
#define UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x3F54D40)
#define UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x3F54DA0)
#define UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_SET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x3F46420)
#define UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3F54E70)
#define UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x3F463D0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int LinearAccelerationSensor_TypeDefinitionIndex = 14233;

	class LinearAccelerationSensor : public ::UnityEngine::InputSystem::Sensor
	{
	public:
		static ::UnityEngine::InputSystem::LinearAccelerationSensor** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::LinearAccelerationSensor**)Il2CppClass::FromTypeDefinitionIndex(LinearAccelerationSensor_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::InputSystem::Controls::Vector3Control* _acceleration_k__BackingField; // 0x190

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_ONREMOVED_OFFSET))(this);
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::LinearAccelerationSensor* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::LinearAccelerationSensor*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_SET_CURRENT_OFFSET))(E937D4885DAA1AE8);
		}

		static ::UnityEngine::InputSystem::LinearAccelerationSensor* get_current()
		{
			return ((::UnityEngine::InputSystem::LinearAccelerationSensor*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_GET_CURRENT_OFFSET))();
		}

		::System::Void set_acceleration(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_SET_ACCELERATION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_MAKECURRENT_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_acceleration()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_GET_ACCELERATION_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR__CTOR_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_FINISHSETUP_OFFSET))(this);
		}
	};
}
