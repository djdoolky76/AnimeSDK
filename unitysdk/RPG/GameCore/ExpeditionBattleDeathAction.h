#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleDeathAction; }

#define RPG_GAMECORE_EXPEDITIONBATTLEDEATHACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D68E8F0)
#define RPG_GAMECORE_EXPEDITIONBATTLEDEATHACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D68E900)
#define RPG_GAMECORE_EXPEDITIONBATTLEDEATHACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D68E860)

namespace RPG::GameCore
{
	class ExpeditionBattleDeathAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEDEATHACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleDeathAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleDeathAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEDEATHACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleDeathAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleDeathAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEDEATHACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
