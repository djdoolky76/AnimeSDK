#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierEquipUpgradeBeforeBattleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREQUIPUPGRADEBEFOREBATTLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D733B70)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREQUIPUPGRADEBEFOREBATTLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D733B80)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREQUIPUPGRADEBEFOREBATTLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D733B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierEquipUpgradeBeforeBattleConfig_TypeDefinitionIndex = 19464;

	class GridFightModifierEquipUpgradeBeforeBattleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREQUIPUPGRADEBEFOREBATTLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierEquipUpgradeBeforeBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierEquipUpgradeBeforeBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREQUIPUPGRADEBEFOREBATTLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierEquipUpgradeBeforeBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierEquipUpgradeBeforeBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREQUIPUPGRADEBEFOREBATTLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
