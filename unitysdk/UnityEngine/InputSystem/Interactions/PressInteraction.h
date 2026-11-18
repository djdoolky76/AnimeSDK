#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Interactions/PressBehavior.h"
#include "unitysdk/UnityEngine/InputSystem/InputInteractionContext.h"

#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_GET_PRESSPOINTORDEFAULT_OFFSET UNITYSDK_OFFSET(0x1F5EFFA0)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_GET_RELEASEPOINTORDEFAULT_OFFSET UNITYSDK_OFFSET(0x1F5EFFC0)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_PROCESS_OFFSET UNITYSDK_OFFSET(0x1F5EFFF0)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_RESET_OFFSET UNITYSDK_OFFSET(0x1F5F03E0)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5F03F0)

namespace UnityEngine::InputSystem::Interactions
{
	inline static constexpr unsigned int PressInteraction_TypeDefinitionIndex = 32097;

	class PressInteraction : public ::System::Object
	{
	public:
		::System::Single pressPoint; // 0x10
		::UnityEngine::InputSystem::Interactions::PressBehavior behavior; // 0x14
		::System::Boolean m_WaitingForRelease; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION__CTOR_OFFSET))(this);
		}

		::System::Single get_pressPointOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_GET_PRESSPOINTORDEFAULT_OFFSET))(this);
		}

		::System::Single get_releasePointOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_GET_RELEASEPOINTORDEFAULT_OFFSET))(this);
		}

		::System::Void Process(::UnityEngine::InputSystem::InputInteractionContext& context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputInteractionContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_PROCESS_OFFSET))(this, context);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_RESET_OFFSET))(this);
		}
	};
}
