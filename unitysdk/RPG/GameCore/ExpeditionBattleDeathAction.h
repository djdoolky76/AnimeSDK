#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleDeathAction; }

#define RPG_GAMECORE_EXPEDITIONBATTLEDEATHACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC86310)
#define RPG_GAMECORE_EXPEDITIONBATTLEDEATHACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1FC86320)
#define RPG_GAMECORE_EXPEDITIONBATTLEDEATHACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1FC86280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleDeathAction_TypeDefinitionIndex = 16373;

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
