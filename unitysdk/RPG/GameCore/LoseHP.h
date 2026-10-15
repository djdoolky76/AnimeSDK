#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class LoseHP; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_LOSEHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F6E40)
#define RPG_GAMECORE_LOSEHP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F6EF0)
#define RPG_GAMECORE_LOSEHP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F6D60)

namespace RPG::GameCore
{
	class LoseHP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AttackType AttackType; // 0x20
		::RPG::GameCore::AttackDamageType DamageType; // 0x24
		::RPG::GameCore::DynamicFloat* DamageValue; // 0x28
		::RPG::GameCore::DynamicFloat* Floor; // 0x30
		::System::String* DynamicFloatSet; // 0x38
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DamageDisplayData* DisplayData; // 0x48
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x50
		::System::Boolean SourceAsKiller; // 0x58
		::System::Boolean RoundDamage; // 0x59
		::System::Boolean ShowText; // 0x5A
		::System::Boolean ConsumeShield; // 0x5B
		::System::Byte _padding1[0x4];
		::RPG::GameCore::DynamicFloat* PerformanceDelay; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOSEHP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoseHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoseHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOSEHP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoseHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoseHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOSEHP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
