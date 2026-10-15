#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddByMaxStanceConfig; }
namespace RPG::GameCore { class AttackDamageTypeConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ModifierStancePreshowConfig; }
namespace RPG::GameCore { class PredicateConfig; }

#define RPG_GAMECORE_MODIFIERSTANCEPRESHOWCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D861BD0)
#define RPG_GAMECORE_MODIFIERSTANCEPRESHOWCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8616D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierStancePreshowConfig_TypeDefinitionIndex = 18184;

	class ModifierStancePreshowConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::SkillType SkillType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::PredicateConfig* Condition; // 0x18
		::RPG::GameCore::DynamicFloat* MultiplyRatio; // 0x20
		::RPG::GameCore::DynamicFloat* AddValue; // 0x28
		::RPG::GameCore::DynamicFloat* AddRatio; // 0x30
		::RPG::GameCore::DynamicFloat* ForceAddValue; // 0x38
		::RPG::GameCore::DynamicFloat* ForceAddRatio; // 0x40
		::RPG::GameCore::DynamicFloat* StanceBreakAddRatio; // 0x48
		::RPG::GameCore::DynamicFloat* ForceStanceBreakRatio; // 0x50
		::System::Boolean AddForceStanceDamageFlag; // 0x58
		::System::Byte _padding1[0x7];
		::RPG::GameCore::AttackDamageTypeConfig* AddWeakness; // 0x60
		::RPG::GameCore::AddByMaxStanceConfig* AddByMaxStance; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERSTANCEPRESHOWCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifierStancePreshowConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifierStancePreshowConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERSTANCEPRESHOWCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
