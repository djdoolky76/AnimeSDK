#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionUpgradeRoleRarityConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONUPGRADEROLERARITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D724AD0)
#define RPG_GAMECORE_GRIDFIGHTACTIONUPGRADEROLERARITYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D724AE0)
#define RPG_GAMECORE_GRIDFIGHTACTIONUPGRADEROLERARITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D724FC0)

namespace RPG::GameCore
{
	class GridFightActionUpgradeRoleRarityConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONUPGRADEROLERARITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionUpgradeRoleRarityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionUpgradeRoleRarityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONUPGRADEROLERARITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionUpgradeRoleRarityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionUpgradeRoleRarityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONUPGRADEROLERARITYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
