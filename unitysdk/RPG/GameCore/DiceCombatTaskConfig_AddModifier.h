#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_AddModifier; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ADDMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D610B80)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ADDMODIFIER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D610C10)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ADDMODIFIER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D610AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_AddModifier_TypeDefinitionIndex = 16061;

	class DiceCombatTaskConfig_AddModifier : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x10
		::System::UInt32 ModifierID; // 0x14
		::RPG::GameCore::DynamicFloat* LifeTime; // 0x18
		::RPG::GameCore::DynamicFloat* Stack; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ADDMODIFIER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_AddModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_AddModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ADDMODIFIER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_AddModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_AddModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ADDMODIFIER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
