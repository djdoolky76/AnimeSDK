#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvEnterBattleSelectTargetType.h"
#include "unitysdk/RPG/GameCore/CostMpPhase.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureAttackDetectShapeConfig; }
namespace RPG::GameCore { class AdventureAttackDetectSummonUnitTriggerConfig; }
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class AdventureTriggerAttack; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADVENTURETRIGGERATTACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A0CB0)
#define RPG_GAMECORE_ADVENTURETRIGGERATTACK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A0D10)
#define RPG_GAMECORE_ADVENTURETRIGGERATTACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A0AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureTriggerAttack_TypeDefinitionIndex = 20207;

	class AdventureTriggerAttack : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* AttackTargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* AttackRootTargetType; // 0x20
		::System::Boolean TriggerBattle; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single TriggerBattleDelay; // 0x2C
		::RPG::GameCore::AdventureAttackDetectSummonUnitTriggerConfig* SummonUnitTriggerAttackDetectConfig; // 0x30
		::RPG::GameCore::AdventureAttackDetectShapeConfig* AttackDetectConfig; // 0x38
		::RPG::GameCore::AdventureHitConfig* HitConfig; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAttack; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBattle; // 0x50
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnHit; // 0x58
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnKill; // 0x60
		::RPG::GameCore::PredicateConfig* FilterHitTarget; // 0x68
		::System::Boolean IncludeProps; // 0x70
		::System::Boolean HitTargetFaceToAttacker; // 0x71
		::System::Boolean TriggerBattleByAllHitTarget; // 0x72
		::System::Boolean AttackDetectCollision; // 0x73
		::System::Boolean FilterAllHitTargetByCurrentMP; // 0x74
		::System::Byte _padding1[0x3];
		::RPG::GameCore::AdvEnterBattleSelectTargetType EnterBattleSelectTargetType; // 0x78
		::System::UInt32 CostMP; // 0x7C
		::RPG::GameCore::CostMpPhase CostMpPhaseType; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERATTACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureTriggerAttack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureTriggerAttack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERATTACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureTriggerAttack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureTriggerAttack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERATTACK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
