#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleNewLevelStartAction; }

#define RPG_GAMECORE_EXPEDITIONBATTLENEWLEVELSTARTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D68FC10)
#define RPG_GAMECORE_EXPEDITIONBATTLENEWLEVELSTARTACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D68FC20)
#define RPG_GAMECORE_EXPEDITIONBATTLENEWLEVELSTARTACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D68FB80)

namespace RPG::GameCore
{
	class ExpeditionBattleNewLevelStartAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLENEWLEVELSTARTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleNewLevelStartAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleNewLevelStartAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLENEWLEVELSTARTACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleNewLevelStartAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleNewLevelStartAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLENEWLEVELSTARTACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
