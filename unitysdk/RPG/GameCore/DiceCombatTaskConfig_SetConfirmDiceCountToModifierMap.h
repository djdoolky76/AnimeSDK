#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CountToModifierMapRangeItem; }
namespace RPG::GameCore { class DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_SETCONFIRMDICECOUNTTOMODIFIERMAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D613250)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_SETCONFIRMDICECOUNTTOMODIFIERMAP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D613260)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_SETCONFIRMDICECOUNTTOMODIFIERMAP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D613200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap_TypeDefinitionIndex = 16065;

	class DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CountToModifierMapRangeItem*>* ConfigAsAttacker; // 0x10
		::Il2CppArray<::RPG::GameCore::CountToModifierMapRangeItem*>* ConfigAsDefender; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_SETCONFIRMDICECOUNTTOMODIFIERMAP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_SETCONFIRMDICECOUNTTOMODIFIERMAP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_SETCONFIRMDICECOUNTTOMODIFIERMAP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
