#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/TouchPhase.h"

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPHASECONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x1FBF98F0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPHASECONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x1FBF9910)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPHASECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBF9880)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int TouchPhaseControl_TypeDefinitionIndex = 32090;

	class TouchPhaseControl
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPHASECONTROL__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::TouchPhase ReadUnprocessedValueFromState(::PVOID statePtr)
		{
			return ((::UnityEngine::InputSystem::TouchPhase(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPHASECONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(this, statePtr);
		}

		::System::Void WriteValueIntoState(::UnityEngine::InputSystem::TouchPhase value, ::PVOID statePtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::TouchPhase, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPHASECONTROL_WRITEVALUEINTOSTATE_OFFSET))(this, value, statePtr);
		}
	};
}
