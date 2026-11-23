#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Sensor.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }

#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3FFF450)
#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3FFF5B0)
#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_GET_LIGHTLEVEL_OFFSET UNITYSDK_OFFSET(0x385A040)
#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x3FFF4C0)
#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x3FFF520)
#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3FFF5F0)
#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_SET_LIGHTLEVEL_OFFSET UNITYSDK_OFFSET(0x3F46420)
#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x3F463D0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int LightSensor_TypeDefinitionIndex = 14529;

	class LightSensor : public ::UnityEngine::InputSystem::Sensor
	{
	public:
		static ::UnityEngine::InputSystem::LightSensor** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::LightSensor**)Il2CppClass::FromTypeDefinitionIndex(LightSensor_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::InputSystem::Controls::AxisControl* _lightLevel_k__BackingField; // 0x190

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_MAKECURRENT_OFFSET))(this);
		}

		::System::Void set_lightLevel(::UnityEngine::InputSystem::Controls::AxisControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_SET_LIGHTLEVEL_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::LightSensor* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::LightSensor*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_SET_CURRENT_OFFSET))(E937D4885DAA1AE8);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_FINISHSETUP_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::LightSensor* get_current()
		{
			return ((::UnityEngine::InputSystem::LightSensor*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_GET_CURRENT_OFFSET))();
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_ONREMOVED_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_lightLevel()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_GET_LIGHTLEVEL_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR__CTOR_OFFSET))(this);
		}
	};
}
