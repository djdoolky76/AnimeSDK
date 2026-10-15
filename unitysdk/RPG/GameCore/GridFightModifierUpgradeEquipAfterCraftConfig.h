#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierUpgradeEquipAfterCraftConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEEQUIPAFTERCRAFTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D736140)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEEQUIPAFTERCRAFTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D736150)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEEQUIPAFTERCRAFTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D736100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierUpgradeEquipAfterCraftConfig_TypeDefinitionIndex = 19397;

	class GridFightModifierUpgradeEquipAfterCraftConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEEQUIPAFTERCRAFTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierUpgradeEquipAfterCraftConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierUpgradeEquipAfterCraftConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEEQUIPAFTERCRAFTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierUpgradeEquipAfterCraftConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierUpgradeEquipAfterCraftConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEEQUIPAFTERCRAFTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
