#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DialogueEventInfo; }
namespace RPG::GameCore { class WaitDialogueEvent; }

#define RPG_GAMECORE_WAITDIALOGUEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC687B0)
#define RPG_GAMECORE_WAITDIALOGUEEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC687C0)
#define RPG_GAMECORE_WAITDIALOGUEEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC68780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitDialogueEvent_TypeDefinitionIndex = 21127;

	class WaitDialogueEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DialogueEventInfo*>* DialogueEventList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitDialogueEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitDialogueEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitDialogueEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitDialogueEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
