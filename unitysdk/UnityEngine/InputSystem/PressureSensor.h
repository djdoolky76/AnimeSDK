#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Sensor.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }

#define UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3F6B2C0)
#define UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_GET_ATMOSPHERICPRESSURE_OFFSET UNITYSDK_OFFSET(0x385A040)
#define UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3F6B400)
#define UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x3F6B330)
#define UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x3F6B380)
#define UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_SET_ATMOSPHERICPRESSURE_OFFSET UNITYSDK_OFFSET(0x3F46420)
#define UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3F6B440)
#define UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x3F463D0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int PressureSensor_TypeDefinitionIndex = 14289;

	class PressureSensor : public ::UnityEngine::InputSystem::Sensor
	{
	public:
		static ::UnityEngine::InputSystem::PressureSensor** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::PressureSensor**)Il2CppClass::FromTypeDefinitionIndex(PressureSensor_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::InputSystem::Controls::AxisControl* _atmosphericPressure_k__BackingField; // 0x190

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR__CTOR_OFFSET))(this);
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::PressureSensor* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::PressureSensor*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_SET_CURRENT_OFFSET))(E937D4885DAA1AE8);
		}

		static ::UnityEngine::InputSystem::PressureSensor* get_current()
		{
			return ((::UnityEngine::InputSystem::PressureSensor*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_GET_CURRENT_OFFSET))();
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_ONREMOVED_OFFSET))(this);
		}

		::System::Void set_atmosphericPressure(::UnityEngine::InputSystem::Controls::AxisControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_SET_ATMOSPHERICPRESSURE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_FINISHSETUP_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_atmosphericPressure()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_GET_ATMOSPHERICPRESSURE_OFFSET))(this);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_MAKECURRENT_OFFSET))(this);
		}
	};
}
