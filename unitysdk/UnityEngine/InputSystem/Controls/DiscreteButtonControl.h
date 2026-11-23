#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Controls/ButtonControl.h"
#include "unitysdk/UnityEngine/InputSystem/Controls/DiscreteButtonControl_BB8E0E0636B9464E.h"

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DISCRETEBUTTONCONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3F5DD30)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DISCRETEBUTTONCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x3F5DE40)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DISCRETEBUTTONCONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x3F5DFE0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DISCRETEBUTTONCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x3F59F70)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int DiscreteButtonControl_TypeDefinitionIndex = 14295;

	class DiscreteButtonControl : public ::UnityEngine::InputSystem::Controls::ButtonControl
	{
	public:
		::System::Int32 minValue; // 0x148
		::System::Int32 maxValue; // 0x14C
		::System::Int32 wrapAtValue; // 0x150
		::System::Int32 nullValue; // 0x154
		::UnityEngine::InputSystem::Controls::DiscreteButtonControl_BB8E0E0636B9464E writeMode; // 0x158

		::System::Void WriteValueIntoState(::System::Single E937D4885DAA1AE8, ::PVOID A536377AC8D49ABB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DISCRETEBUTTONCONTROL_WRITEVALUEINTOSTATE_OFFSET))(this, E937D4885DAA1AE8, A536377AC8D49ABB);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DISCRETEBUTTONCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DISCRETEBUTTONCONTROL_FINISHSETUP_OFFSET))(this);
		}

		::System::Single ReadUnprocessedValueFromState(::PVOID A536377AC8D49ABB)
		{
			return ((::System::Single(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DISCRETEBUTTONCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(this, A536377AC8D49ABB);
		}
	};
}
