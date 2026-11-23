#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Sensor.h"

namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3F48C50)
#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3F48DB0)
#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x385A040)
#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x3F48CC0)
#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x3F48D20)
#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3F48DF0)
#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_SET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x3F46420)
#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x3F463D0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int GravitySensor_TypeDefinitionIndex = 14243;

	class GravitySensor : public ::UnityEngine::InputSystem::Sensor
	{
	public:
		static ::UnityEngine::InputSystem::GravitySensor** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::GravitySensor**)Il2CppClass::FromTypeDefinitionIndex(GravitySensor_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::InputSystem::Controls::Vector3Control* _gravity_k__BackingField; // 0x190

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_ONREMOVED_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_gravity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_GET_GRAVITY_OFFSET))(this);
		}

		::System::Void set_gravity(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_SET_GRAVITY_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::UnityEngine::InputSystem::GravitySensor* get_current()
		{
			return ((::UnityEngine::InputSystem::GravitySensor*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_GET_CURRENT_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR__CTOR_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_FINISHSETUP_OFFSET))(this);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_MAKECURRENT_OFFSET))(this);
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::GravitySensor* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::GravitySensor*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_SET_CURRENT_OFFSET))(E937D4885DAA1AE8);
		}
	};
}
