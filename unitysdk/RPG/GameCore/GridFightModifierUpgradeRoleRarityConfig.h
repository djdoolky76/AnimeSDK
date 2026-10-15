#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierUpgradeRoleRarityConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEROLERARITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7362C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEROLERARITYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7362D0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEROLERARITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D736280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierUpgradeRoleRarityConfig_TypeDefinitionIndex = 19477;

	class GridFightModifierUpgradeRoleRarityConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEROLERARITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierUpgradeRoleRarityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierUpgradeRoleRarityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEROLERARITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierUpgradeRoleRarityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierUpgradeRoleRarityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEROLERARITYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
