#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AFB530854B88B5A8.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_CALCULATEOPTIMIZEDCONTROLDATATYPE_OFFSET UNITYSDK_OFFSET(0x3FEE1D0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3FEE480)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_GET_W_OFFSET UNITYSDK_OFFSET(0x1CF7080)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_GET_X_OFFSET UNITYSDK_OFFSET(0x18265C0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_GET_Y_OFFSET UNITYSDK_OFFSET(0x1EC4220)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_GET_Z_OFFSET UNITYSDK_OFFSET(0x17F0F40)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x3FEE5B0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_SET_W_OFFSET UNITYSDK_OFFSET(0x1D1A130)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_SET_X_OFFSET UNITYSDK_OFFSET(0x1D1A170)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_SET_Y_OFFSET UNITYSDK_OFFSET(0x26C5430)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_SET_Z_OFFSET UNITYSDK_OFFSET(0x197AD80)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x3FEE710)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x3FEE850)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int QuaternionControl_TypeDefinitionIndex = 14465;

	class QuaternionControl
	{
	public:
		::UnityEngine::InputSystem::Controls::AxisControl* _x_k__BackingField; // 0x120
		::UnityEngine::InputSystem::Controls::AxisControl* _y_k__BackingField; // 0x128
		::UnityEngine::InputSystem::Controls::AxisControl* _z_k__BackingField; // 0x130
		::UnityEngine::InputSystem::Controls::AxisControl* _w_k__BackingField; // 0x138

		::UnityEngine::InputSystem::Controls::AxisControl* get_y()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_GET_Y_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_z()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_GET_Z_OFFSET))(this);
		}

		::UnityEngine::Quaternion ReadUnprocessedValueFromState(::PVOID A536377AC8D49ABB)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(this, A536377AC8D49ABB);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_FINISHSETUP_OFFSET))(this);
		}

		::AFB530854B88B5A8 CalculateOptimizedControlDataType()
		{
			return ((::AFB530854B88B5A8(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_CALCULATEOPTIMIZEDCONTROLDATATYPE_OFFSET))(this);
		}

		::System::Void set_w(::UnityEngine::InputSystem::Controls::AxisControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_SET_W_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_w()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_GET_W_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_x()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_GET_X_OFFSET))(this);
		}

		::System::Void WriteValueIntoState(::UnityEngine::Quaternion E937D4885DAA1AE8, ::PVOID A536377AC8D49ABB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_WRITEVALUEINTOSTATE_OFFSET))(this, E937D4885DAA1AE8, A536377AC8D49ABB);
		}

		::System::Void set_z(::UnityEngine::InputSystem::Controls::AxisControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_SET_Z_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_y(::UnityEngine::InputSystem::Controls::AxisControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_SET_Y_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void set_x(::UnityEngine::InputSystem::Controls::AxisControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_QUATERNIONCONTROL_SET_X_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
