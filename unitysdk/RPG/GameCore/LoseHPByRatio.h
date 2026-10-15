#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TargetRatioType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class LoseHPByRatio; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_LOSEHPBYRATIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F7520)
#define RPG_GAMECORE_LOSEHPBYRATIO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F75D0)
#define RPG_GAMECORE_LOSEHPBYRATIO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F7450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoseHPByRatio_TypeDefinitionIndex = 22697;

	class LoseHPByRatio : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AttackType AttackType; // 0x20
		::RPG::GameCore::AttackDamageType DamageType; // 0x24
		::RPG::GameCore::TargetRatioType RatioType; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* Ratio; // 0x30
		::RPG::GameCore::DynamicFloat* Floor; // 0x38
		::System::String* DynamicFloatSet; // 0x40
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x48
		::System::Byte _padding1[0x4];
		::RPG::GameCore::DamageDisplayData* DisplayData; // 0x50
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x58
		::System::Boolean SourceAsKiller; // 0x60
		::System::Boolean RoundDamage; // 0x61
		::System::Boolean ConsumeShield; // 0x62
		::System::Byte _padding2[0x5];
		::RPG::GameCore::DynamicFloat* PerformanceDelay; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOSEHPBYRATIO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoseHPByRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoseHPByRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOSEHPBYRATIO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoseHPByRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoseHPByRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOSEHPBYRATIO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
