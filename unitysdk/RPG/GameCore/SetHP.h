#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityPropertyChangeReason.h"
#include "unitysdk/RPG/GameCore/AntiLockHPStrength.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetHP; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECC7B50)
#define RPG_GAMECORE_SETHP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ECC7BD0)
#define RPG_GAMECORE_SETHP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ECC7AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetHP_TypeDefinitionIndex = 23048;

	class SetHP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AttackType AttackType; // 0x20
		::RPG::GameCore::AttackDamageType DamageType; // 0x24
		::RPG::GameCore::DynamicFloat* ModifyRatio; // 0x28
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x30
		::System::Boolean ClearNegativeHP; // 0x38
		::System::Boolean ShowText; // 0x39
		::System::Byte _padding0[0x6];
		::RPG::GameCore::DamageDisplayData* DisplayData; // 0x40
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x48
		::RPG::GameCore::AbilityPropertyChangeReason ChangeReason; // 0x50
		::RPG::GameCore::AntiLockHPStrength Strength; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
