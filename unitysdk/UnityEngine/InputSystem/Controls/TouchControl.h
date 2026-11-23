#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/TouchState.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class DeltaControl; }
namespace UnityEngine::InputSystem::Controls { class DoubleControl; }
namespace UnityEngine::InputSystem::Controls { class IntegerControl; }
namespace UnityEngine::InputSystem::Controls { class TouchPhaseControl; }
namespace UnityEngine::InputSystem::Controls { class TouchPressControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3F6BDF0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x385A040)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_DISPLAYINDEX_OFFSET UNITYSDK_OFFSET(0x1CA8410)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_INDIRECTTOUCH_OFFSET UNITYSDK_OFFSET(0x28D2D30)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0x3F6C310)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x29D8A90)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x3F6C380)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x3F54AE0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_PRESS_OFFSET UNITYSDK_OFFSET(0x16B6EC0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x2A4C140)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0x3F55B10)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x20EAC80)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_TAPCOUNT_OFFSET UNITYSDK_OFFSET(0x2A688A0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_TAP_OFFSET UNITYSDK_OFFSET(0x1789AE0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_TOUCHID_OFFSET UNITYSDK_OFFSET(0x29997D0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x3F6C170)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_DELTA_OFFSET UNITYSDK_OFFSET(0x3F46420)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_DISPLAYINDEX_OFFSET UNITYSDK_OFFSET(0x3F6C390)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_INDIRECTTOUCH_OFFSET UNITYSDK_OFFSET(0x2A68970)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_PHASE_OFFSET UNITYSDK_OFFSET(0x29D8AA0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x3F6C3B0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_PRESSURE_OFFSET UNITYSDK_OFFSET(0x3F54CB0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_PRESS_OFFSET UNITYSDK_OFFSET(0x16B6F30)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x2A4C1F0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0x3F54C90)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x3F55BD0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_TAPCOUNT_OFFSET UNITYSDK_OFFSET(0x2A68950)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_TAP_OFFSET UNITYSDK_OFFSET(0x1789AF0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_TOUCHID_OFFSET UNITYSDK_OFFSET(0x3F6C3D0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x3F6C200)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x3F6C280)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int TouchControl_TypeDefinitionIndex = 14278;

	class TouchControl
	{
	public:
		::UnityEngine::InputSystem::Controls::TouchPressControl* _press_k__BackingField; // 0x170
		::UnityEngine::InputSystem::Controls::IntegerControl* _displayIndex_k__BackingField; // 0x178
		::UnityEngine::InputSystem::Controls::IntegerControl* _touchId_k__BackingField; // 0x180
		::UnityEngine::InputSystem::Controls::Vector2Control* _position_k__BackingField; // 0x188
		::UnityEngine::InputSystem::Controls::DeltaControl* _delta_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::AxisControl* _pressure_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::Vector2Control* _radius_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::TouchPhaseControl* _phase_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::ButtonControl* _indirectTouch_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::ButtonControl* _tap_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::IntegerControl* _tapCount_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::DoubleControl* _startTime_k__BackingField; // 0x1C8
		::UnityEngine::InputSystem::Controls::Vector2Control* _startPosition_k__BackingField; // 0x1D0

		::System::Void set_position(::UnityEngine::InputSystem::Controls::Vector2Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_POSITION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::DeltaControl* get_delta()
		{
			return ((::UnityEngine::InputSystem::Controls::DeltaControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_DELTA_OFFSET))(this);
		}

		::System::Void set_startPosition(::UnityEngine::InputSystem::Controls::Vector2Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_STARTPOSITION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_delta(::UnityEngine::InputSystem::Controls::DeltaControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::DeltaControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_DELTA_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::DoubleControl* get_startTime()
		{
			return ((::UnityEngine::InputSystem::Controls::DoubleControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_STARTTIME_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* get_touchId()
		{
			return ((::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_TOUCHID_OFFSET))(this);
		}

		::System::Void set_displayIndex(::UnityEngine::InputSystem::Controls::IntegerControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::IntegerControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_DISPLAYINDEX_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_startPosition()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_STARTPOSITION_OFFSET))(this);
		}

		::System::Void set_indirectTouch(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_INDIRECTTOUCH_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_pressure(::UnityEngine::InputSystem::Controls::AxisControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_PRESSURE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_position()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_POSITION_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_tap()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_TAP_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* get_tapCount()
		{
			return ((::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_TAPCOUNT_OFFSET))(this);
		}

		::System::Void set_phase(::UnityEngine::InputSystem::Controls::TouchPhaseControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::TouchPhaseControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_PHASE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::TouchPhaseControl* get_phase()
		{
			return ((::UnityEngine::InputSystem::Controls::TouchPhaseControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_PHASE_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_FINISHSETUP_OFFSET))(this);
		}

		::System::Void set_tap(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_TAP_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_radius()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_tapCount(::UnityEngine::InputSystem::Controls::IntegerControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::IntegerControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_TAPCOUNT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::LowLevel::TouchState ReadUnprocessedValueFromState(::PVOID A536377AC8D49ABB)
		{
			return ((::UnityEngine::InputSystem::LowLevel::TouchState(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(this, A536377AC8D49ABB);
		}

		::System::Boolean get_isInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_ISINPROGRESS_OFFSET))(this);
		}

		::System::Void set_startTime(::UnityEngine::InputSystem::Controls::DoubleControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::DoubleControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_STARTTIME_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void WriteValueIntoState(::UnityEngine::InputSystem::LowLevel::TouchState E937D4885DAA1AE8, ::PVOID A536377AC8D49ABB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::TouchState, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_WRITEVALUEINTOSTATE_OFFSET))(this, E937D4885DAA1AE8, A536377AC8D49ABB);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* get_displayIndex()
		{
			return ((::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_DISPLAYINDEX_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::TouchPressControl* get_press()
		{
			return ((::UnityEngine::InputSystem::Controls::TouchPressControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_PRESS_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_pressure()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_PRESSURE_OFFSET))(this);
		}

		::System::Void set_radius(::UnityEngine::InputSystem::Controls::Vector2Control* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_RADIUS_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_indirectTouch()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_GET_INDIRECTTOUCH_OFFSET))(this);
		}

		::System::Void set_press(::UnityEngine::InputSystem::Controls::TouchPressControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::TouchPressControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_PRESS_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_touchId(::UnityEngine::InputSystem::Controls::IntegerControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::IntegerControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHCONTROL_SET_TOUCHID_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
