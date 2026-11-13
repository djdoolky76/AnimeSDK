#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleCommonLoopBattleAction; }

#define RPG_GAMECORE_EXPEDITIONBATTLECOMMONLOOPBATTLEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC86210)
#define RPG_GAMECORE_EXPEDITIONBATTLECOMMONLOOPBATTLEACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1FC86220)
#define RPG_GAMECORE_EXPEDITIONBATTLECOMMONLOOPBATTLEACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1FC86180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleCommonLoopBattleAction_TypeDefinitionIndex = 16366;

	class ExpeditionBattleCommonLoopBattleAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLECOMMONLOOPBATTLEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleCommonLoopBattleAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleCommonLoopBattleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLECOMMONLOOPBATTLEACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleCommonLoopBattleAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleCommonLoopBattleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLECOMMONLOOPBATTLEACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
