#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionSubBuyExpCostConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONSUBBUYEXPCOSTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D724A90)
#define RPG_GAMECORE_GRIDFIGHTACTIONSUBBUYEXPCOSTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D724AA0)
#define RPG_GAMECORE_GRIDFIGHTACTIONSUBBUYEXPCOSTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D724F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionSubBuyExpCostConfig_TypeDefinitionIndex = 19303;

	class GridFightActionSubBuyExpCostConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSUBBUYEXPCOSTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionSubBuyExpCostConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionSubBuyExpCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSUBBUYEXPCOSTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionSubBuyExpCostConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionSubBuyExpCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSUBBUYEXPCOSTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
