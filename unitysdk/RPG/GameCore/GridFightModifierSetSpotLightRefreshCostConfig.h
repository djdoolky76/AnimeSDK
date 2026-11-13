#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSetSpotLightRefreshCostConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETSPOTLIGHTREFRESHCOSTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BB670)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETSPOTLIGHTREFRESHCOSTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BB680)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETSPOTLIGHTREFRESHCOSTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BB630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetSpotLightRefreshCostConfig_TypeDefinitionIndex = 19789;

	class GridFightModifierSetSpotLightRefreshCostConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETSPOTLIGHTREFRESHCOSTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetSpotLightRefreshCostConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetSpotLightRefreshCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETSPOTLIGHTREFRESHCOSTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetSpotLightRefreshCostConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetSpotLightRefreshCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETSPOTLIGHTREFRESHCOSTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
