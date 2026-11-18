#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DOUBLECONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x1FBF9850)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DOUBLECONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x1FBF9860)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DOUBLECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBF97E0)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int DoubleControl_TypeDefinitionIndex = 32081;

	class DoubleControl
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DOUBLECONTROL__CTOR_OFFSET))(this);
		}

		::System::Double ReadUnprocessedValueFromState(::PVOID statePtr)
		{
			return ((::System::Double(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DOUBLECONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(this, statePtr);
		}

		::System::Void WriteValueIntoState(::System::Double value, ::PVOID statePtr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DOUBLECONTROL_WRITEVALUEINTOSTATE_OFFSET))(this, value, statePtr);
		}
	};
}
