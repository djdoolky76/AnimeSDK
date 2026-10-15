#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleStrongAtkAction; }

#define RPG_GAMECORE_EXPEDITIONBATTLESTRONGATKACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D690C90)
#define RPG_GAMECORE_EXPEDITIONBATTLESTRONGATKACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D690CA0)
#define RPG_GAMECORE_EXPEDITIONBATTLESTRONGATKACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D690BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleStrongAtkAction_TypeDefinitionIndex = 16214;

	class ExpeditionBattleStrongAtkAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::Single HitStopDuration; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESTRONGATKACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleStrongAtkAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleStrongAtkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESTRONGATKACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleStrongAtkAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleStrongAtkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESTRONGATKACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
