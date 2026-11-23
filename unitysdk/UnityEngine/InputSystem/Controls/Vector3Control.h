#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AFB530854B88B5A8.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_CALCULATEOPTIMIZEDCONTROLDATATYPE_OFFSET UNITYSDK_OFFSET(0x3F6F190)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3F6F380)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3F6F450)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_GET_X_OFFSET UNITYSDK_OFFSET(0x1D19FA0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_GET_Y_OFFSET UNITYSDK_OFFSET(0x18265C0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_GET_Z_OFFSET UNITYSDK_OFFSET(0x1EC4220)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x3F6F540)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_SET_X_OFFSET UNITYSDK_OFFSET(0x1D1A150)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_SET_Y_OFFSET UNITYSDK_OFFSET(0x1D1A170)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_SET_Z_OFFSET UNITYSDK_OFFSET(0x26C5430)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x3F6F670)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x3F6F780)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int Vector3Control_TypeDefinitionIndex = 14324;

	class Vector3Control
	{
	public:
		::UnityEngine::InputSystem::Controls::AxisControl* _x_k__BackingField; // 0x118
		::UnityEngine::InputSystem::Controls::AxisControl* _y_k__BackingField; // 0x120
		::UnityEngine::InputSystem::Controls::AxisControl* _z_k__BackingField; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL__CTOR_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_FINISHSETUP_OFFSET))(this);
		}

		::UnityEngine::Vector3 ReadUnprocessedValueFromState(::PVOID A536377AC8D49ABB)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(this, A536377AC8D49ABB);
		}

		::System::Void set_x(::UnityEngine::InputSystem::Controls::AxisControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_SET_X_OFFSET))(this, E937D4885DAA1AE8);
		}

		::AFB530854B88B5A8 CalculateOptimizedControlDataType()
		{
			return ((::AFB530854B88B5A8(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_CALCULATEOPTIMIZEDCONTROLDATATYPE_OFFSET))(this);
		}

		::System::Single EvaluateMagnitude(::PVOID A536377AC8D49ABB)
		{
			return ((::System::Single(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_EVALUATEMAGNITUDE_OFFSET))(this, A536377AC8D49ABB);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_y()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_GET_Y_OFFSET))(this);
		}

		::System::Void set_y(::UnityEngine::InputSystem::Controls::AxisControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_SET_Y_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void WriteValueIntoState(::UnityEngine::Vector3 E937D4885DAA1AE8, ::PVOID A536377AC8D49ABB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_WRITEVALUEINTOSTATE_OFFSET))(this, E937D4885DAA1AE8, A536377AC8D49ABB);
		}

		::System::Void set_z(::UnityEngine::InputSystem::Controls::AxisControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_SET_Z_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_x()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_GET_X_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_z()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_VECTOR3CONTROL_GET_Z_OFFSET))(this);
		}
	};
}
