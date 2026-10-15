#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureAttackDetectShapeConfig; }
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class WolfBroUseBulletHitTarget; }

#define RPG_GAMECORE_WOLFBROUSEBULLETHITTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA9800)
#define RPG_GAMECORE_WOLFBROUSEBULLETHITTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA9850)
#define RPG_GAMECORE_WOLFBROUSEBULLETHITTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA9790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroUseBulletHitTarget_TypeDefinitionIndex = 20173;

	class WolfBroUseBulletHitTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* AttackTargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* AttackRootTargetType; // 0x20
		::RPG::GameCore::AdventureAttackDetectShapeConfig* AttackDetectConfig; // 0x28
		::RPG::GameCore::AdventureHitConfig* HitConfig; // 0x30
		::System::Boolean AttackDetectCollision; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROUSEBULLETHITTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroUseBulletHitTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroUseBulletHitTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROUSEBULLETHITTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroUseBulletHitTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroUseBulletHitTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROUSEBULLETHITTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
