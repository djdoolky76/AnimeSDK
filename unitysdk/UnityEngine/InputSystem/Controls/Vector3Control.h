#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1EE66B60)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1EE66950)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_GET_X_OFFSET UNITYSDK_OFFSET(0x1EE66880)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_GET_Y_OFFSET UNITYSDK_OFFSET(0x1EE668A0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_GET_Z_OFFSET UNITYSDK_OFFSET(0x1EE668C0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x1EE669E0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_SET_X_OFFSET UNITYSDK_OFFSET(0x1EE66890)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_SET_Y_OFFSET UNITYSDK_OFFSET(0x1EE668B0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_SET_Z_OFFSET UNITYSDK_OFFSET(0x1EE668D0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x1EE66AB0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE668E0)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int Vector3Control_TypeDefinitionIndex = 32093;

	class Vector3Control
	{
	public:
		::UnityEngine::InputSystem::Controls::AxisControl* _z_k__BackingField; // 0xF0
		::UnityEngine::InputSystem::Controls::AxisControl* _y_k__BackingField; // 0xF8
		::UnityEngine::InputSystem::Controls::AxisControl* _x_k__BackingField; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_x()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_GET_X_OFFSET))(this);
		}

		::System::Void set_x(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_SET_X_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_y()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_GET_Y_OFFSET))(this);
		}

		::System::Void set_y(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_SET_Y_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_z()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_GET_Z_OFFSET))(this);
		}

		::System::Void set_z(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_SET_Z_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_FINISHSETUP_OFFSET))(this);
		}

		::UnityEngine::Vector3 ReadUnprocessedValueFromState(::PVOID statePtr)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(this, statePtr);
		}

		::System::Void WriteValueIntoState(::UnityEngine::Vector3 value, ::PVOID statePtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_WRITEVALUEINTOSTATE_OFFSET))(this, value, statePtr);
		}

		::System::Single EvaluateMagnitude(::PVOID statePtr)
		{
			return ((::System::Single(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_EVALUATEMAGNITUDE_OFFSET))(this, statePtr);
		}
	};
}
