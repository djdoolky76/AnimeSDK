#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Interactions/PressBehavior.h"
#include "unitysdk/E7EF09FF4E356188.h"

#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_GET_PRESSPOINTORDEFAULT_OFFSET UNITYSDK_OFFSET(0x3F57240)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_GET_RELEASEPOINTORDEFAULT_OFFSET UNITYSDK_OFFSET(0x3F57290)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_PROCESS_OFFSET UNITYSDK_OFFSET(0x3F56E00)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_RESET_OFFSET UNITYSDK_OFFSET(0x3F57230)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::InputSystem::Interactions
{
	inline static constexpr unsigned int PressInteraction_TypeDefinitionIndex = 14197;

	class PressInteraction : public ::System::Object
	{
	public:
		::System::Single pressPoint; // 0x10
		::UnityEngine::InputSystem::Interactions::PressBehavior behavior; // 0x14
		::System::Boolean m_WaitingForRelease; // 0x18

		::System::Single get_releasePointOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_GET_RELEASEPOINTORDEFAULT_OFFSET))(this);
		}

		::System::Void Process(::E7EF09FF4E356188& E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E7EF09FF4E356188&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_PROCESS_OFFSET))(this, E6CE7391633EEC68);
		}

		::System::Single get_pressPointOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_GET_PRESSPOINTORDEFAULT_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_PRESSINTERACTION_RESET_OFFSET))(this);
		}
	};
}
