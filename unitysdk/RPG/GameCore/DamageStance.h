#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AttackDamageTypeConfig; }
namespace RPG::GameCore { class DamageStance; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DAMAGESTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5F2170)
#define RPG_GAMECORE_DAMAGESTANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5F21C0)
#define RPG_GAMECORE_DAMAGESTANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5F20F0)

namespace RPG::GameCore
{
	class DamageStance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AttackDamageTypeConfig* StanceDamageType; // 0x18
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* AttackerTargetType; // 0x28
		::RPG::GameCore::TargetEvaluator* DefenderTargetType; // 0x30
		::RPG::GameCore::DynamicFloat* StanceValue; // 0x38
		::System::Boolean ForceStanceDamage; // 0x40
		::System::Boolean IgnoreAttackerAddRatio; // 0x41
		::System::Boolean IgnoreMuteBreak; // 0x42
		::System::Boolean TriggerCountDown; // 0x43
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGESTANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DamageStance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DamageStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGESTANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DamageStance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DamageStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGESTANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
