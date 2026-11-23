#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Sensor.h"

namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3FF5410)
#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE_GET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x385A040)
#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3FF5570)
#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x3FF5480)
#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x3FF54E0)
#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE_SET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x3F46420)
#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3FF55B0)
#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x3F463D0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Gyroscope_TypeDefinitionIndex = 14502;

	class Gyroscope : public ::UnityEngine::InputSystem::Sensor
	{
	public:
		static ::UnityEngine::InputSystem::Gyroscope** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::Gyroscope**)Il2CppClass::FromTypeDefinitionIndex(Gyroscope_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::InputSystem::Controls::Vector3Control* _angularVelocity_k__BackingField; // 0x190

		::System::Void set_angularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE_SET_ANGULARVELOCITY_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE_MAKECURRENT_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE_ONREMOVED_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE__CTOR_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE_FINISHSETUP_OFFSET))(this);
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::Gyroscope* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Gyroscope*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE_SET_CURRENT_OFFSET))(E937D4885DAA1AE8);
		}

		static ::UnityEngine::InputSystem::Gyroscope* get_current()
		{
			return ((::UnityEngine::InputSystem::Gyroscope*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE_GET_CURRENT_OFFSET))();
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_angularVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE_GET_ANGULARVELOCITY_OFFSET))(this);
		}
	};
}
