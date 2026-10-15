#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleMonsterAppearAction; }

#define RPG_GAMECORE_EXPEDITIONBATTLEMONSTERAPPEARACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D661F30)
#define RPG_GAMECORE_EXPEDITIONBATTLEMONSTERAPPEARACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D661F40)
#define RPG_GAMECORE_EXPEDITIONBATTLEMONSTERAPPEARACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D661E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleMonsterAppearAction_TypeDefinitionIndex = 16211;

	class ExpeditionBattleMonsterAppearAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::Boolean CanSkip; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEMONSTERAPPEARACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleMonsterAppearAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleMonsterAppearAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEMONSTERAPPEARACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleMonsterAppearAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleMonsterAppearAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEMONSTERAPPEARACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
