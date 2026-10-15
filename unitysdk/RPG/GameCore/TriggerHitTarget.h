#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerHitTarget; }

#define RPG_GAMECORE_TRIGGERHITTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC53AC0)
#define RPG_GAMECORE_TRIGGERHITTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC53AD0)
#define RPG_GAMECORE_TRIGGERHITTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC53A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerHitTarget_TypeDefinitionIndex = 20213;

	class TriggerHitTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AdventureHitConfig* HitConfig; // 0x20
		::System::Boolean OnlyHitClientTarget; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERHITTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerHitTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerHitTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERHITTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerHitTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerHitTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERHITTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
