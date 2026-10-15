#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleResetAllMonsterStateAction; }

#define RPG_GAMECORE_EXPEDITIONBATTLERESETALLMONSTERSTATEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D690450)
#define RPG_GAMECORE_EXPEDITIONBATTLERESETALLMONSTERSTATEACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D690460)
#define RPG_GAMECORE_EXPEDITIONBATTLERESETALLMONSTERSTATEACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6903C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleResetAllMonsterStateAction_TypeDefinitionIndex = 16220;

	class ExpeditionBattleResetAllMonsterStateAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLERESETALLMONSTERSTATEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleResetAllMonsterStateAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleResetAllMonsterStateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLERESETALLMONSTERSTATEACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleResetAllMonsterStateAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleResetAllMonsterStateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLERESETALLMONSTERSTATEACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
