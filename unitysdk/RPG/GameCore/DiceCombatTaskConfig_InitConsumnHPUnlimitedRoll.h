#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_InitConsumnHPUnlimitedRoll; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_INITCONSUMNHPUNLIMITEDROLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E4470)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_INITCONSUMNHPUNLIMITEDROLL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E44D0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_INITCONSUMNHPUNLIMITEDROLL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E43D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_InitConsumnHPUnlimitedRoll_TypeDefinitionIndex = 16055;

	class DiceCombatTaskConfig_InitConsumnHPUnlimitedRoll : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ConsumeHP; // 0x10
		::RPG::GameCore::DynamicFloat* ConsumeHPReRollCountLimitPerTurn; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_INITCONSUMNHPUNLIMITEDROLL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_InitConsumnHPUnlimitedRoll* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_InitConsumnHPUnlimitedRoll*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_INITCONSUMNHPUNLIMITEDROLL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_InitConsumnHPUnlimitedRoll* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_InitConsumnHPUnlimitedRoll*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_INITCONSUMNHPUNLIMITEDROLL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
