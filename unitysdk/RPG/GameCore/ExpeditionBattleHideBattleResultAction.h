#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleHideBattleResultAction; }

#define RPG_GAMECORE_EXPEDITIONBATTLEHIDEBATTLERESULTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D661800)
#define RPG_GAMECORE_EXPEDITIONBATTLEHIDEBATTLERESULTACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D661810)
#define RPG_GAMECORE_EXPEDITIONBATTLEHIDEBATTLERESULTACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D661770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleHideBattleResultAction_TypeDefinitionIndex = 16217;

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
