#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddTargetStancePreshowConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADDTARGETSTANCEPRESHOWCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D35E3E0)
#define RPG_GAMECORE_ADDTARGETSTANCEPRESHOWCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D35E660)
#define RPG_GAMECORE_ADDTARGETSTANCEPRESHOWCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D35E3A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddTargetStancePreshowConfig_TypeDefinitionIndex = 23685;

	class AddTargetStancePreshowConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* Attacker; // 0x20
		::RPG::GameCore::DynamicFloat* BaseStanceDamage; // 0x28
		::RPG::GameCore::AttackDamageType StanceDamgeType; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* MultiplyRatio; // 0x38
		::RPG::GameCore::DynamicFloat* AddValue; // 0x40
		::RPG::GameCore::DynamicFloat* AddRatio; // 0x48
		::RPG::GameCore::DynamicFloat* ForceAddValue; // 0x50
		::RPG::GameCore::DynamicFloat* ForceAddRatio; // 0x58
		::RPG::GameCore::DynamicFloat* StanceBreakAddRatio; // 0x60
		::RPG::GameCore::DynamicFloat* ForceStanceBreakRatio; // 0x68
		::System::Boolean ForceStanceDamage; // 0x70
		::System::Boolean IgnoreMuteBreak; // 0x71
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTARGETSTANCEPRESHOWCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddTargetStancePreshowConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddTargetStancePreshowConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTARGETSTANCEPRESHOWCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddTargetStancePreshowConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddTargetStancePreshowConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTARGETSTANCEPRESHOWCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
