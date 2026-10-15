#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerDialogueEvent; }

#define RPG_GAMECORE_TRIGGERDIALOGUEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC18730)
#define RPG_GAMECORE_TRIGGERDIALOGUEEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC18740)
#define RPG_GAMECORE_TRIGGERDIALOGUEEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC18700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerDialogueEvent_TypeDefinitionIndex = 20852;

	class TriggerDialogueEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 DialogueEventID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERDIALOGUEEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerDialogueEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerDialogueEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERDIALOGUEEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerDialogueEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerDialogueEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERDIALOGUEEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
