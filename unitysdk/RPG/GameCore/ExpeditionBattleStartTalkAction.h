#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleStartTalkAction; }

#define RPG_GAMECORE_EXPEDITIONBATTLESTARTTALKACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6630D0)
#define RPG_GAMECORE_EXPEDITIONBATTLESTARTTALKACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D6630E0)
#define RPG_GAMECORE_EXPEDITIONBATTLESTARTTALKACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D663040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleStartTalkAction_TypeDefinitionIndex = 16221;

	class ExpeditionBattleStartTalkAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESTARTTALKACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleStartTalkAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleStartTalkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESTARTTALKACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleStartTalkAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleStartTalkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLESTARTTALKACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
