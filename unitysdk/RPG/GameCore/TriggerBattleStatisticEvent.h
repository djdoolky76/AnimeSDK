#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StatisticEventType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TriggerBattleStatisticEvent; }

#define RPG_GAMECORE_TRIGGERBATTLESTATISTICEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC444B0)
#define RPG_GAMECORE_TRIGGERBATTLESTATISTICEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC444C0)
#define RPG_GAMECORE_TRIGGERBATTLESTATISTICEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC44480)

namespace RPG::GameCore
{
	class TriggerBattleStatisticEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::StatisticEventType EventType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBATTLESTATISTICEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerBattleStatisticEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerBattleStatisticEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBATTLESTATISTICEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerBattleStatisticEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerBattleStatisticEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERBATTLESTATISTICEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
