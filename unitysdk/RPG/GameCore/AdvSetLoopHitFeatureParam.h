#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSetLoopHitFeatureParam; }
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVSETLOOPHITFEATUREPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D382580)
#define RPG_GAMECORE_ADVSETLOOPHITFEATUREPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D382590)
#define RPG_GAMECORE_ADVSETLOOPHITFEATUREPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D382550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetLoopHitFeatureParam_TypeDefinitionIndex = 21815;

	class AdvSetLoopHitFeatureParam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* HitInterval; // 0x18
		::RPG::GameCore::DynamicFloat* HitIntervalNoise; // 0x20
		::RPG::GameCore::DynamicFloat* HitNormalizedTimeStart; // 0x28
		::RPG::GameCore::DynamicFloat* HitNormalizedTimeStartNoise; // 0x30
		::RPG::GameCore::DynamicFloat* HitNormalizedTransitionDuration; // 0x38
		::RPG::GameCore::AdventureHitConfig* HitConfig; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETLOOPHITFEATUREPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetLoopHitFeatureParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetLoopHitFeatureParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETLOOPHITFEATUREPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetLoopHitFeatureParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetLoopHitFeatureParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETLOOPHITFEATUREPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
