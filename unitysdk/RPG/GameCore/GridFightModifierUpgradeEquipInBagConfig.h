#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierUpgradeEquipInBagConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEEQUIPINBAGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E944B70)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEEQUIPINBAGCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E944B80)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEEQUIPINBAGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E944B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierUpgradeEquipInBagConfig_TypeDefinitionIndex = 19664;

	class GridFightModifierUpgradeEquipInBagConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEEQUIPINBAGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierUpgradeEquipInBagConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierUpgradeEquipInBagConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEEQUIPINBAGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierUpgradeEquipInBagConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierUpgradeEquipInBagConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEEQUIPINBAGCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
