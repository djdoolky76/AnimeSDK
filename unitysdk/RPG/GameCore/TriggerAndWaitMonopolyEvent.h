#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerAndWaitMonopolyEvent; }

#define RPG_GAMECORE_TRIGGERANDWAITMONOPOLYEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC152A0)
#define RPG_GAMECORE_TRIGGERANDWAITMONOPOLYEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC152B0)
#define RPG_GAMECORE_TRIGGERANDWAITMONOPOLYEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC15270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerAndWaitMonopolyEvent_TypeDefinitionIndex = 21724;

	class TriggerAndWaitMonopolyEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsGroudFloor; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERANDWAITMONOPOLYEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerAndWaitMonopolyEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerAndWaitMonopolyEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERANDWAITMONOPOLYEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerAndWaitMonopolyEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerAndWaitMonopolyEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERANDWAITMONOPOLYEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
