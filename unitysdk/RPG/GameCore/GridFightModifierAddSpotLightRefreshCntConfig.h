#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddSpotLightRefreshCntConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDSPOTLIGHTREFRESHCNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2060BB00)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDSPOTLIGHTREFRESHCNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2060BB10)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDSPOTLIGHTREFRESHCNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2060BAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddSpotLightRefreshCntConfig_TypeDefinitionIndex = 19787;

	class GridFightModifierAddSpotLightRefreshCntConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDSPOTLIGHTREFRESHCNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddSpotLightRefreshCntConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddSpotLightRefreshCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDSPOTLIGHTREFRESHCNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddSpotLightRefreshCntConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddSpotLightRefreshCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDSPOTLIGHTREFRESHCNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
