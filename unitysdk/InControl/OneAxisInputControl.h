#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlState.h"
#include "unitysdk/System/Object.h"
namespace InControl { class InputControl; }
namespace InControl { class OneAxisInputControl; }

#define INCONTROL_ONEAXISINPUTCONTROL_CLEARINPUTSTATE_OFFSET UNITYSDK_OFFSET(0x1562A440)
#define INCONTROL_ONEAXISINPUTCONTROL_COMMITWITHSIDES_OFFSET UNITYSDK_OFFSET(0x1562A940)
#define INCONTROL_ONEAXISINPUTCONTROL_COMMITWITHSTATE_OFFSET UNITYSDK_OFFSET(0x1562A550)
#define INCONTROL_ONEAXISINPUTCONTROL_COMMITWITHVALUE_OFFSET UNITYSDK_OFFSET(0x1562A6E0)
#define INCONTROL_ONEAXISINPUTCONTROL_COMMIT_OFFSET UNITYSDK_OFFSET(0x1562A470)
#define INCONTROL_ONEAXISINPUTCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1562AE40)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_ENABLEDINHIERARCHY_OFFSET UNITYSDK_OFFSET(0x1562ADB0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1562AD80)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_HASCHANGED_OFFSET UNITYSDK_OFFSET(0x1562AB60)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_HASINPUT_OFFSET UNITYSDK_OFFSET(0x1562AB20)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_INTERNALISPRESSED_OFFSET UNITYSDK_OFFSET(0x1562ACC0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_INTERNALWASPRESSED_OFFSET UNITYSDK_OFFSET(0x1562ACD0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_INTERNALWASRELEASED_OFFSET UNITYSDK_OFFSET(0x1562ACF0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_ISNULLCONTROL_OFFSET UNITYSDK_OFFSET(0x1562AD60)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x1562ABC0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_ISRAWPRESSED_OFFSET UNITYSDK_OFFSET(0x1562AC60)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_LASTRAWVALUE_OFFSET UNITYSDK_OFFSET(0x1562ACA0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_LASTSTATE_OFFSET UNITYSDK_OFFSET(0x1562AAA0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_LASTVALUE_OFFSET UNITYSDK_OFFSET(0x1562AAE0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x1562AD10)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_NEXTRAWVALUE_OFFSET UNITYSDK_OFFSET(0x1562AB00)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_RAWVALUE_OFFSET UNITYSDK_OFFSET(0x1562AA60)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_SENSITIVITY_OFFSET UNITYSDK_OFFSET(0x1562AD00)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_STATETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1562AD30)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1562AA80)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_UPDATETICK_OFFSET UNITYSDK_OFFSET(0x1562A120)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x1562AD20)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1562AAC0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_WASPRESSED_OFFSET UNITYSDK_OFFSET(0x1562ABE0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_WASRELEASED_OFFSET UNITYSDK_OFFSET(0x1562AC10)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_WASREPEATED_OFFSET UNITYSDK_OFFSET(0x1562AC40)
#define INCONTROL_ONEAXISINPUTCONTROL_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1562AE10)
#define INCONTROL_ONEAXISINPUTCONTROL_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1562ADD0)
#define INCONTROL_ONEAXISINPUTCONTROL_PREPAREFORUPDATE_OFFSET UNITYSDK_OFFSET(0x1562A140)
#define INCONTROL_ONEAXISINPUTCONTROL_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1562A3E0)
#define INCONTROL_ONEAXISINPUTCONTROL_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1562ADA0)
#define INCONTROL_ONEAXISINPUTCONTROL_SET_INTERNALENABLED_OFFSET UNITYSDK_OFFSET(0x1562AD70)
#define INCONTROL_ONEAXISINPUTCONTROL_SET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x156253E0)
#define INCONTROL_ONEAXISINPUTCONTROL_SET_SENSITIVITY_OFFSET UNITYSDK_OFFSET(0x156253C0)
#define INCONTROL_ONEAXISINPUTCONTROL_SET_STATETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1562AD40)
#define INCONTROL_ONEAXISINPUTCONTROL_SET_UPDATETICK_OFFSET UNITYSDK_OFFSET(0x1562A130)
#define INCONTROL_ONEAXISINPUTCONTROL_SET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x15625400)
#define INCONTROL_ONEAXISINPUTCONTROL_UPDATEWITHRAWVALUE_OFFSET UNITYSDK_OFFSET(0x1562A2C0)
#define INCONTROL_ONEAXISINPUTCONTROL_UPDATEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x1562A1F0)
#define INCONTROL_ONEAXISINPUTCONTROL_UPDATEWITHVALUE_OFFSET UNITYSDK_OFFSET(0x156262A0)

namespace InControl
{
	inline static constexpr unsigned int OneAxisInputControl_TypeDefinitionIndex = 41803;

	class OneAxisInputControl : public ::System::Object
	{
	public:
		::System::Single RepeatDelay; // 0x10
		::System::Boolean isNullControl; // 0x14
		::System::Boolean clearInputState; // 0x15
		::System::Boolean pendingCommit; // 0x16
		::System::Boolean Raw; // 0x17
		::System::UInt64 pendingTick; // 0x18
		::System::Single stateThreshold; // 0x20
		::System::Single nextRepeatTime; // 0x24
		::System::Boolean enabled; // 0x28
		::System::Boolean ownerEnabled; // 0x29
		::System::Boolean wasRepeated; // 0x2A
		::System::Boolean internalEnabled; // 0x2B
		::System::Single FirstRepeatDelay; // 0x2C
		::InControl::InputControlState thisState; // 0x30
		::InControl::InputControlState nextState; // 0x3C
		::InControl::InputControlState lastState; // 0x48
		::System::Single lowerDeadZone; // 0x54
		::System::Single upperDeadZone; // 0x58
		::System::Single sensitivity; // 0x5C
		::System::UInt64 _UpdateTick_k__BackingField; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_CTOR_OFFSET))(this);
		}

		::System::UInt64 get_UpdateTick()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_UPDATETICK_OFFSET))(this);
		}

		::System::Void set_UpdateTick(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SET_UPDATETICK_OFFSET))(this, a1);
		}

		::System::Void PrepareForUpdate(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_PREPAREFORUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean UpdateWithState(::System::Boolean a1, ::System::UInt64 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_UPDATEWITHSTATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean UpdateWithValue(::System::Single a1, ::System::UInt64 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_UPDATEWITHVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean UpdateWithRawValue(::System::Single a1, ::System::UInt64 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_UPDATEWITHRAWVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetValue(::System::Single a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::UInt64))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void ClearInputState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_CLEARINPUTSTATE_OFFSET))(this);
		}

		::System::Void Commit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_COMMIT_OFFSET))(this);
		}

		::System::Void CommitWithState(::System::Boolean a1, ::System::UInt64 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_COMMITWITHSTATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CommitWithValue(::System::Single a1, ::System::UInt64 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_COMMITWITHVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CommitWithSides(::InControl::InputControl* a1, ::InControl::InputControl* a2, ::System::UInt64 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControl*, ::InControl::InputControl*, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_COMMITWITHSIDES_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_State()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_STATE_OFFSET))(this);
		}

		::System::Boolean get_LastState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_LASTSTATE_OFFSET))(this);
		}

		::System::Single get_Value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_VALUE_OFFSET))(this);
		}

		::System::Single get_LastValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_LASTVALUE_OFFSET))(this);
		}

		::System::Single get_RawValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_RAWVALUE_OFFSET))(this);
		}

		::System::Single get_NextRawValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_NEXTRAWVALUE_OFFSET))(this);
		}

		::System::Boolean get_HasInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_HASINPUT_OFFSET))(this);
		}

		::System::Boolean get_HasChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_HASCHANGED_OFFSET))(this);
		}

		::System::Boolean get_IsPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_ISPRESSED_OFFSET))(this);
		}

		::System::Boolean get_WasPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_WASPRESSED_OFFSET))(this);
		}

		::System::Boolean get_WasReleased()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_WASRELEASED_OFFSET))(this);
		}

		::System::Boolean get_WasRepeated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_WASREPEATED_OFFSET))(this);
		}

		::System::Boolean get_IsRawPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_ISRAWPRESSED_OFFSET))(this);
		}

		::System::Single get_LastRawValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_LASTRAWVALUE_OFFSET))(this);
		}

		::System::Boolean get_InternalIsPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_INTERNALISPRESSED_OFFSET))(this);
		}

		::System::Boolean get_InternalWasPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_INTERNALWASPRESSED_OFFSET))(this);
		}

		::System::Boolean get_InternalWasReleased()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_INTERNALWASRELEASED_OFFSET))(this);
		}

		::System::Single get_Sensitivity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_SENSITIVITY_OFFSET))(this);
		}

		::System::Void set_Sensitivity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SET_SENSITIVITY_OFFSET))(this, a1);
		}

		::System::Single get_LowerDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_LOWERDEADZONE_OFFSET))(this);
		}

		::System::Void set_LowerDeadZone(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SET_LOWERDEADZONE_OFFSET))(this, a1);
		}

		::System::Single get_UpperDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_UPPERDEADZONE_OFFSET))(this);
		}

		::System::Void set_UpperDeadZone(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SET_UPPERDEADZONE_OFFSET))(this, a1);
		}

		::System::Single get_StateThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_STATETHRESHOLD_OFFSET))(this);
		}

		::System::Void set_StateThreshold(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SET_STATETHRESHOLD_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNullControl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_ISNULLCONTROL_OFFSET))(this);
		}

		::System::Void set_InternalEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SET_INTERNALENABLED_OFFSET))(this, a1);
		}

		::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_Enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SET_ENABLED_OFFSET))(this, a1);
		}

		::System::Boolean get_EnabledInHierarchy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_ENABLEDINHIERARCHY_OFFSET))(this);
		}

		static ::System::Boolean op_Implicit(::InControl::OneAxisInputControl* a1)
		{
			return ((::System::Boolean(*)(::InControl::OneAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::Single op_Implicit_1(::InControl::OneAxisInputControl* a1)
		{
			return ((::System::Single(*)(::InControl::OneAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_OP_IMPLICIT_1_OFFSET))(a1);
		}

	};
}
