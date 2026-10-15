#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleWaitSecondAction; }

#define RPG_GAMECORE_EXPEDITIONBATTLEWAITSECONDACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D663810)
#define RPG_GAMECORE_EXPEDITIONBATTLEWAITSECONDACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D663820)
#define RPG_GAMECORE_EXPEDITIONBATTLEWAITSECONDACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D663740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleWaitSecondAction_TypeDefinitionIndex = 16206;

	class ExpeditionBattleWaitSecondAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::Single WaitTime; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEWAITSECONDACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleWaitSecondAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleWaitSecondAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEWAITSECONDACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleWaitSecondAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleWaitSecondAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEWAITSECONDACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
