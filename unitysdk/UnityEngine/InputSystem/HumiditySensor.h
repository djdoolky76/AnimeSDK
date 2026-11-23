#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Sensor.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }

#define UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3FCEE90)
#define UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3FCEFF0)
#define UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_GET_RELATIVEHUMIDITY_OFFSET UNITYSDK_OFFSET(0x385A040)
#define UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x3FCEF00)
#define UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x3FCEF60)
#define UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3FCF030)
#define UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_SET_RELATIVEHUMIDITY_OFFSET UNITYSDK_OFFSET(0x3F46420)
#define UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x3F463D0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int HumiditySensor_TypeDefinitionIndex = 14431;

	class HumiditySensor : public ::UnityEngine::InputSystem::Sensor
	{
	public:
		static ::UnityEngine::InputSystem::HumiditySensor** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::HumiditySensor**)Il2CppClass::FromTypeDefinitionIndex(HumiditySensor_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::InputSystem::Controls::AxisControl* _relativeHumidity_k__BackingField; // 0x190

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_MAKECURRENT_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_relativeHumidity()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_GET_RELATIVEHUMIDITY_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_ONREMOVED_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::HumiditySensor* get_current()
		{
			return ((::UnityEngine::InputSystem::HumiditySensor*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_GET_CURRENT_OFFSET))();
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_FINISHSETUP_OFFSET))(this);
		}

		::System::Void set_relativeHumidity(::UnityEngine::InputSystem::Controls::AxisControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_SET_RELATIVEHUMIDITY_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::HumiditySensor* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::HumiditySensor*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_SET_CURRENT_OFFSET))(E937D4885DAA1AE8);
		}
	};
}
