#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Sensor.h"

namespace UnityEngine::InputSystem::Controls { class QuaternionControl; }

#define UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3F46270)
#define UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_GET_ATTITUDE_OFFSET UNITYSDK_OFFSET(0x385A040)
#define UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3F463E0)
#define UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x3F462E0)
#define UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x3F46340)
#define UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_SET_ATTITUDE_OFFSET UNITYSDK_OFFSET(0x3F46420)
#define UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3F46440)
#define UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x3F463D0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int AttitudeSensor_TypeDefinitionIndex = 14204;

	class AttitudeSensor : public ::UnityEngine::InputSystem::Sensor
	{
	public:
		static ::UnityEngine::InputSystem::AttitudeSensor** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::AttitudeSensor**)Il2CppClass::FromTypeDefinitionIndex(AttitudeSensor_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::InputSystem::Controls::QuaternionControl* _attitude_k__BackingField; // 0x190

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_ONREMOVED_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_attitude()
		{
			return ((::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_GET_ATTITUDE_OFFSET))(this);
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::AttitudeSensor* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::AttitudeSensor*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_SET_CURRENT_OFFSET))(E937D4885DAA1AE8);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_MAKECURRENT_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_FINISHSETUP_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::AttitudeSensor* get_current()
		{
			return ((::UnityEngine::InputSystem::AttitudeSensor*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_GET_CURRENT_OFFSET))();
		}

		::System::Void set_attitude(::UnityEngine::InputSystem::Controls::QuaternionControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::QuaternionControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_SET_ATTITUDE_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
