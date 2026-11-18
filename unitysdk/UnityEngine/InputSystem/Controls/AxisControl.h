#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Controls/AxisControl_Clamp.h"

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_COMPAREVALUE_OFFSET UNITYSDK_OFFSET(0x1EFE5680)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1EFE57F0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1EFE5520)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x1EFE52D0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x1EFE5590)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_UNPREPROCESS_OFFSET UNITYSDK_OFFSET(0x1EFE5410)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x1EFE55C0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFE54B0)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int AxisControl_TypeDefinitionIndex = 32076;

	class AxisControl
	{
	public:
		::System::Boolean normalize; // 0xF0
		::System::Boolean scale; // 0xF1
		::System::Boolean invert; // 0xF2
		::System::Byte _padding0[0x1];
		::System::Single scaleFactor; // 0xF4
		::System::Single normalizeZero; // 0xF8
		::System::Single clampMin; // 0xFC
		::System::Single clampConstant; // 0x100
		::System::Single clampMax; // 0x104
		::System::Single normalizeMax; // 0x108
		::System::Single normalizeMin; // 0x10C
		::UnityEngine::InputSystem::Controls::AxisControl_Clamp clamp; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL__CTOR_OFFSET))(this);
		}

		::System::Single Preprocess(::System::Single value)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_PREPROCESS_OFFSET))(this, value);
		}

		::System::Single Unpreprocess(::System::Single value)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_UNPREPROCESS_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_FINISHSETUP_OFFSET))(this);
		}

		::System::Single ReadUnprocessedValueFromState(::PVOID statePtr)
		{
			return ((::System::Single(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(this, statePtr);
		}

		::System::Void WriteValueIntoState(::System::Single value, ::PVOID statePtr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_WRITEVALUEINTOSTATE_OFFSET))(this, value, statePtr);
		}

		::System::Boolean CompareValue(::PVOID firstStatePtr, ::PVOID secondStatePtr)
		{
			return ((::System::Boolean(*)(::PVOID, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_COMPAREVALUE_OFFSET))(this, firstStatePtr, secondStatePtr);
		}

		::System::Single EvaluateMagnitude(::PVOID statePtr)
		{
			return ((::System::Single(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_EVALUATEMAGNITUDE_OFFSET))(this, statePtr);
		}
	};
}
