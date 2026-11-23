#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/E7EF09FF4E356188.h"

#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_HOLDINTERACTION_GET_DURATIONORDEFAULT_OFFSET UNITYSDK_OFFSET(0x3F48FE0)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_HOLDINTERACTION_GET_PRESSPOINTORDEFAULT_OFFSET UNITYSDK_OFFSET(0x3F49050)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_HOLDINTERACTION_PROCESS_OFFSET UNITYSDK_OFFSET(0x3F48E40)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_HOLDINTERACTION_RESET_OFFSET UNITYSDK_OFFSET(0x3F48FD0)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_HOLDINTERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::InputSystem::Interactions
{
	inline static constexpr unsigned int HoldInteraction_TypeDefinitionIndex = 14241;

	class HoldInteraction : public ::System::Object
	{
	public:
		::System::Single duration; // 0x10
		::System::Single pressPoint; // 0x14
		::System::Double m_TimePressed; // 0x18

		::System::Single get_pressPointOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_HOLDINTERACTION_GET_PRESSPOINTORDEFAULT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_HOLDINTERACTION_RESET_OFFSET))(this);
		}

		::System::Void Process(::E7EF09FF4E356188& E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E7EF09FF4E356188&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_HOLDINTERACTION_PROCESS_OFFSET))(this, E6CE7391633EEC68);
		}

		::System::Single get_durationOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_HOLDINTERACTION_GET_DURATIONORDEFAULT_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_HOLDINTERACTION__CTOR_OFFSET))(this);
		}
	};
}
