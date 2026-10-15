#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierShopUpRoleStarWithOriginalCostConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARWITHORIGINALCOSTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D735D80)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARWITHORIGINALCOSTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D735D90)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARWITHORIGINALCOSTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D735D40)

namespace RPG::GameCore
{
	class GridFightModifierShopUpRoleStarWithOriginalCostConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARWITHORIGINALCOSTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierShopUpRoleStarWithOriginalCostConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierShopUpRoleStarWithOriginalCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARWITHORIGINALCOSTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierShopUpRoleStarWithOriginalCostConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierShopUpRoleStarWithOriginalCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLESTARWITHORIGINALCOSTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
