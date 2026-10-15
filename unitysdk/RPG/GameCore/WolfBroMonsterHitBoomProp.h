#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureAttackDetectShapeConfig; }
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class WolfBroMonsterHitBoomProp; }

#define RPG_GAMECORE_WOLFBROMONSTERHITBOOMPROP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC7AED0)
#define RPG_GAMECORE_WOLFBROMONSTERHITBOOMPROP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC7AF20)
#define RPG_GAMECORE_WOLFBROMONSTERHITBOOMPROP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC7AE60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroMonsterHitBoomProp_TypeDefinitionIndex = 20174;

	class WolfBroMonsterHitBoomProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* AttackTargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* AttackRootTargetType; // 0x20
		::RPG::GameCore::AdventureAttackDetectShapeConfig* AttackDetectConfig; // 0x28
		::RPG::GameCore::AdventureHitConfig* HitConfig; // 0x30
		::System::Boolean AttackDetectCollision; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROMONSTERHITBOOMPROP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroMonsterHitBoomProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroMonsterHitBoomProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROMONSTERHITBOOMPROP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroMonsterHitBoomProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroMonsterHitBoomProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROMONSTERHITBOOMPROP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
