#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleStartAction; }

#define RPG_GAMECORE_EXPEDITIONBATTLESTARTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D690A50)
#define RPG_GAMECORE_EXPEDITIONBATTLESTARTACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D690A60)
#define RPG_GAMECORE_EXPEDITIONBATTLESTARTACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6909C0)

namespace RPG::GameCore
{
	class ExpeditionBattleStartAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESTARTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleStartAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleStartAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESTARTACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleStartAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleStartAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESTARTACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
