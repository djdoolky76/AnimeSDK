#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_KilledEnemy; }

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_KILLEDENEMY_CTOR_OFFSET UNITYSDK_OFFSET(0x1F35B6B0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_KILLEDENEMY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F35B6C0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_KILLEDENEMY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F35B620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_KilledEnemy_TypeDefinitionIndex = 15928;

	class ChenLingBattleTargetEvaluator_KilledEnemy : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_KILLEDENEMY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_KilledEnemy* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_KilledEnemy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_KILLEDENEMY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_KilledEnemy* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_KilledEnemy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_KILLEDENEMY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
