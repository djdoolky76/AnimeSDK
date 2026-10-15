#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionChangeRefreshShopCostCoinConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONCHANGEREFRESHSHOPCOSTCOINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D724260)
#define RPG_GAMECORE_GRIDFIGHTACTIONCHANGEREFRESHSHOPCOSTCOINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D724270)
#define RPG_GAMECORE_GRIDFIGHTACTIONCHANGEREFRESHSHOPCOSTCOINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D724220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionChangeRefreshShopCostCoinConfig_TypeDefinitionIndex = 19308;

	class GridFightActionChangeRefreshShopCostCoinConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCHANGEREFRESHSHOPCOSTCOINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionChangeRefreshShopCostCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionChangeRefreshShopCostCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCHANGEREFRESHSHOPCOSTCOINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionChangeRefreshShopCostCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionChangeRefreshShopCostCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCHANGEREFRESHSHOPCOSTCOINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
