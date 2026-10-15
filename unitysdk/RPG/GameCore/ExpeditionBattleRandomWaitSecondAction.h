#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleRandomWaitSecondAction; }

#define RPG_GAMECORE_EXPEDITIONBATTLERANDOMWAITSECONDACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6901C0)
#define RPG_GAMECORE_EXPEDITIONBATTLERANDOMWAITSECONDACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D6901D0)
#define RPG_GAMECORE_EXPEDITIONBATTLERANDOMWAITSECONDACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D690170)

namespace RPG::GameCore
{
	class ExpeditionBattleRandomWaitSecondAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::Single MinWaitTime; // 0x10
		::System::Single MaxWaitTime; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLERANDOMWAITSECONDACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleRandomWaitSecondAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleRandomWaitSecondAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLERANDOMWAITSECONDACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleRandomWaitSecondAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleRandomWaitSecondAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLERANDOMWAITSECONDACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
