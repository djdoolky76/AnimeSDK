#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_InsertAbility; }
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_INSERTABILITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E49A0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_INSERTABILITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E49B0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_INSERTABILITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E48D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_InsertAbility_TypeDefinitionIndex = 16063;

	class DiceCombatTaskConfig_InsertAbility : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::String* AbilityName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_INSERTABILITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_InsertAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_InsertAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_INSERTABILITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_InsertAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_InsertAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_INSERTABILITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
