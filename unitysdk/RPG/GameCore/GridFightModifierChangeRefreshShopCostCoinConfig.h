#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierChangeRefreshShopCostCoinConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERCHANGEREFRESHSHOPCOSTCOINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2060C1B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCHANGEREFRESHSHOPCOSTCOINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2060C1C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCHANGEREFRESHSHOPCOSTCOINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2060C170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierChangeRefreshShopCostCoinConfig_TypeDefinitionIndex = 19601;

	class GridFightModifierChangeRefreshShopCostCoinConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCHANGEREFRESHSHOPCOSTCOINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierChangeRefreshShopCostCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierChangeRefreshShopCostCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCHANGEREFRESHSHOPCOSTCOINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierChangeRefreshShopCostCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierChangeRefreshShopCostCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCHANGEREFRESHSHOPCOSTCOINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
