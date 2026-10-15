#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_Heal; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_HEAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E4260)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_HEAL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E4270)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_HEAL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E4210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_Heal_TypeDefinitionIndex = 16052;

	class DiceCombatTaskConfig_Heal : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_HEAL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_Heal* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_Heal*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_HEAL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_Heal* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_Heal*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_HEAL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
