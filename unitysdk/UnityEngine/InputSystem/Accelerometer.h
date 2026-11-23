#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Sensor.h"

namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3F5CBA0)
#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_GET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x385A040)
#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3F5CCE0)
#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x3F5CC10)
#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x3F5CC60)
#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_SET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x3F46420)
#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3F5CD20)
#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x3F463D0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Accelerometer_TypeDefinitionIndex = 14302;

	class Accelerometer : public ::UnityEngine::InputSystem::Sensor
	{
	public:
		static ::UnityEngine::InputSystem::Accelerometer** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::Accelerometer**)Il2CppClass::FromTypeDefinitionIndex(Accelerometer_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::InputSystem::Controls::Vector3Control* _acceleration_k__BackingField; // 0x190

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_FINISHSETUP_OFFSET))(this);
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::Accelerometer* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Accelerometer*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_SET_CURRENT_OFFSET))(E937D4885DAA1AE8);
		}

		static ::UnityEngine::InputSystem::Accelerometer* get_current()
		{
			return ((::UnityEngine::InputSystem::Accelerometer*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_GET_CURRENT_OFFSET))();
		}

		::System::Void set_acceleration(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_SET_ACCELERATION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_ONREMOVED_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_acceleration()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_GET_ACCELERATION_OFFSET))(this);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_MAKECURRENT_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ACCELEROMETER__CTOR_OFFSET))(this);
		}
	};
}
