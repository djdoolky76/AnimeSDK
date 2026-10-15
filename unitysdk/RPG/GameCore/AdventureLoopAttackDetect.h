#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureAttackDetectShapeConfig; }
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class AdventureLoopAttackDetect; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADVENTURELOOPATTACKDETECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D39B090)
#define RPG_GAMECORE_ADVENTURELOOPATTACKDETECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D39B0E0)
#define RPG_GAMECORE_ADVENTURELOOPATTACKDETECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D39B020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureLoopAttackDetect_TypeDefinitionIndex = 20199;

	class AdventureLoopAttackDetect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* AttackTargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* AttackRootTargetType; // 0x20
		::RPG::GameCore::AdventureAttackDetectShapeConfig* AttackDetectConfig; // 0x28
		::RPG::GameCore::AdventureHitConfig* HitConfig; // 0x30
		::System::Boolean IncludeProps; // 0x38
		::System::Boolean DelayDirectKill; // 0x39
		::System::Boolean DelayHitPerform; // 0x3A
		::System::Byte _padding0[0x5];
		::RPG::GameCore::DynamicFloat* Duration; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnHit; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURELOOPATTACKDETECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureLoopAttackDetect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureLoopAttackDetect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURELOOPATTACKDETECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureLoopAttackDetect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureLoopAttackDetect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURELOOPATTACKDETECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
