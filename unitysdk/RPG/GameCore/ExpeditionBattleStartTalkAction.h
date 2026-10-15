#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleStartTalkAction; }

#define RPG_GAMECORE_EXPEDITIONBATTLESTARTTALKACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D690B50)
#define RPG_GAMECORE_EXPEDITIONBATTLESTARTTALKACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D690B60)
#define RPG_GAMECORE_EXPEDITIONBATTLESTARTTALKACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D690AC0)

namespace RPG::GameCore
{
	class ExpeditionBattleStartTalkAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESTARTTALKACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleStartTalkAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleStartTalkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESTARTTALKACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleStartTalkAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleStartTalkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESTARTTALKACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
