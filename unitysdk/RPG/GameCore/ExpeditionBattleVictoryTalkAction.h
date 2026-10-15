#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleVictoryTalkAction; }

#define RPG_GAMECORE_EXPEDITIONBATTLEVICTORYTALKACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D691150)
#define RPG_GAMECORE_EXPEDITIONBATTLEVICTORYTALKACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D691160)
#define RPG_GAMECORE_EXPEDITIONBATTLEVICTORYTALKACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6910C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleVictoryTalkAction_TypeDefinitionIndex = 16222;

	class ExpeditionBattleVictoryTalkAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEVICTORYTALKACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleVictoryTalkAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleVictoryTalkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEVICTORYTALKACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleVictoryTalkAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleVictoryTalkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEVICTORYTALKACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
