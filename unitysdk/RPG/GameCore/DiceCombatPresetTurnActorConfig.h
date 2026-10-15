#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatPresetTurnActorAddLimitedDiceConfig; }
namespace RPG::GameCore { class DiceCombatPresetTurnActorConfig; }
namespace RPG::GameCore { class DiceCombatPresetTurnActorRollConfig; }

#define RPG_GAMECORE_DICECOMBATPRESETTURNACTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E2620)
#define RPG_GAMECORE_DICECOMBATPRESETTURNACTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E23E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPresetTurnActorConfig_TypeDefinitionIndex = 16132;

	class DiceCombatPresetTurnActorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean Active; // 0x10
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::DiceCombatPresetTurnActorRollConfig*>* RollConfig; // 0x18
		::RPG::GameCore::DiceCombatPresetTurnActorAddLimitedDiceConfig* RollLimitedConfig; // 0x20
		::Il2CppArray<::System::Int32>* ConfirmResult; // 0x28
		::Il2CppArray<::System::Int32>* TacticsCardAutoRefreshConfig; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPRESETTURNACTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPresetTurnActorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPresetTurnActorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPRESETTURNACTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
