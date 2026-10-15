#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleHideBattleResultAction; }

#define RPG_GAMECORE_EXPEDITIONBATTLEHIDEBATTLERESULTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D68F280)
#define RPG_GAMECORE_EXPEDITIONBATTLEHIDEBATTLERESULTACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D68F290)
#define RPG_GAMECORE_EXPEDITIONBATTLEHIDEBATTLERESULTACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D68F1F0)

namespace RPG::GameCore
{
	class ExpeditionBattleHideBattleResultAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEHIDEBATTLERESULTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleHideBattleResultAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleHideBattleResultAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEHIDEBATTLERESULTACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleHideBattleResultAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleHideBattleResultAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEHIDEBATTLERESULTACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
