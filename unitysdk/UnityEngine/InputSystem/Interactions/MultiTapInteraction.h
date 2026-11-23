#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Interactions/MultiTapInteraction_A826C05B2F01C973.h"
#include "unitysdk/E7EF09FF4E356188.h"

#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_GET_PRESSPOINTORDEFAULT_OFFSET UNITYSDK_OFFSET(0x3FFF8E0)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_GET_RELEASEPOINTORDEFAULT_OFFSET UNITYSDK_OFFSET(0x3FFF930)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_GET_TAPDELAYORDEFAULT_OFFSET UNITYSDK_OFFSET(0x3FFF9A0)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_GET_TAPTIMEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x3FFFA10)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_PROCESS_OFFSET UNITYSDK_OFFSET(0x3FFF640)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_RESET_OFFSET UNITYSDK_OFFSET(0x3FFF8C0)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3FFF8D0)

namespace UnityEngine::InputSystem::Interactions
{
	inline static constexpr unsigned int MultiTapInteraction_TypeDefinitionIndex = 14543;

	class MultiTapInteraction : public ::System::Object
	{
	public:
		::System::Single tapTime; // 0x10
		::System::Single tapDelay; // 0x14
		::System::Int32 tapCount; // 0x18
		::System::Single pressPoint; // 0x1C
		::UnityEngine::InputSystem::Interactions::MultiTapInteraction_A826C05B2F01C973 m_CurrentTapPhase; // 0x20
		::System::Int32 m_CurrentTapCount; // 0x24
		::System::Double m_CurrentTapStartTime; // 0x28
		::System::Double m_LastTapReleaseTime; // 0x30

		::System::Single get_pressPointOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_GET_PRESSPOINTORDEFAULT_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION__CTOR_OFFSET))(this);
		}

		::System::Single get_tapTimeOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_GET_TAPTIMEORDEFAULT_OFFSET))(this);
		}

		::System::Single get_releasePointOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_GET_RELEASEPOINTORDEFAULT_OFFSET))(this);
		}

		::System::Void Process(::E7EF09FF4E356188& E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E7EF09FF4E356188&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_PROCESS_OFFSET))(this, E6CE7391633EEC68);
		}

		::System::Single get_tapDelayOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_GET_TAPDELAYORDEFAULT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_MULTITAPINTERACTION_RESET_OFFSET))(this);
		}
	};
}
