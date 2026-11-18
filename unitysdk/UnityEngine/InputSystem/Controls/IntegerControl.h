#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_INTEGERCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x1EFE5C40)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_INTEGERCONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x1EFE5C50)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_INTEGERCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFE5BD0)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int IntegerControl_TypeDefinitionIndex = 32085;

	class IntegerControl
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_INTEGERCONTROL__CTOR_OFFSET))(this);
		}

		::System::Int32 ReadUnprocessedValueFromState(::PVOID statePtr)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_INTEGERCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(this, statePtr);
		}

		::System::Void WriteValueIntoState(::System::Int32 value, ::PVOID statePtr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_INTEGERCONTROL_WRITEVALUEINTOSTATE_OFFSET))(this, value, statePtr);
		}
	};
}
