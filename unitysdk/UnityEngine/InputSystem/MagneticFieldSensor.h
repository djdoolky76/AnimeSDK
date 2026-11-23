#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Sensor.h"

namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3F69C30)
#define UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3F69D70)
#define UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_GET_MAGNETICFIELD_OFFSET UNITYSDK_OFFSET(0x385A040)
#define UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x3F69CA0)
#define UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x3F69CF0)
#define UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3F69DB0)
#define UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_SET_MAGNETICFIELD_OFFSET UNITYSDK_OFFSET(0x3F46420)
#define UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x3F463D0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int MagneticFieldSensor_TypeDefinitionIndex = 14261;

	class MagneticFieldSensor : public ::UnityEngine::InputSystem::Sensor
	{
	public:
		static ::UnityEngine::InputSystem::MagneticFieldSensor** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::MagneticFieldSensor**)Il2CppClass::FromTypeDefinitionIndex(MagneticFieldSensor_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::InputSystem::Controls::Vector3Control* _magneticField_k__BackingField; // 0x190

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_MAKECURRENT_OFFSET))(this);
		}

		::System::Void set_magneticField(::UnityEngine::InputSystem::Controls::Vector3Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_SET_MAGNETICFIELD_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_ONREMOVED_OFFSET))(this);
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::MagneticFieldSensor* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::MagneticFieldSensor*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_SET_CURRENT_OFFSET))(E937D4885DAA1AE8);
		}

		static ::UnityEngine::InputSystem::MagneticFieldSensor* get_current()
		{
			return ((::UnityEngine::InputSystem::MagneticFieldSensor*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_GET_CURRENT_OFFSET))();
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_FINISHSETUP_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_magneticField()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_GET_MAGNETICFIELD_OFFSET))(this);
		}
	};
}
