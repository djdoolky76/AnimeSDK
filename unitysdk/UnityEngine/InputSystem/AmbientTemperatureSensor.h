#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Sensor.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }

#define UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3F5CD70)
#define UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR_GET_AMBIENTTEMPERATURE_OFFSET UNITYSDK_OFFSET(0x385A040)
#define UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3F5CEB0)
#define UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x3F5CDE0)
#define UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x3F5CE30)
#define UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR_SET_AMBIENTTEMPERATURE_OFFSET UNITYSDK_OFFSET(0x3F46420)
#define UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3F5CEF0)
#define UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x3F463D0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int AmbientTemperatureSensor_TypeDefinitionIndex = 14312;

	class AmbientTemperatureSensor : public ::UnityEngine::InputSystem::Sensor
	{
	public:
		static ::UnityEngine::InputSystem::AmbientTemperatureSensor** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::AmbientTemperatureSensor**)Il2CppClass::FromTypeDefinitionIndex(AmbientTemperatureSensor_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::InputSystem::Controls::AxisControl* _ambientTemperature_k__BackingField; // 0x190

		static ::System::Void set_current(::UnityEngine::InputSystem::AmbientTemperatureSensor* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::AmbientTemperatureSensor*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR_SET_CURRENT_OFFSET))(E937D4885DAA1AE8);
		}

		static ::UnityEngine::InputSystem::AmbientTemperatureSensor* get_current()
		{
			return ((::UnityEngine::InputSystem::AmbientTemperatureSensor*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR_GET_CURRENT_OFFSET))();
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR_ONREMOVED_OFFSET))(this);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR_MAKECURRENT_OFFSET))(this);
		}

		::System::Void set_ambientTemperature(::UnityEngine::InputSystem::Controls::AxisControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR_SET_AMBIENTTEMPERATURE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_ambientTemperature()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR_GET_AMBIENTTEMPERATURE_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR_FINISHSETUP_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR__CTOR_OFFSET))(this);
		}
	};
}
