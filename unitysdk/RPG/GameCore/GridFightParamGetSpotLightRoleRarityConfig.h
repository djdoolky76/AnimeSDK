#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetSpotLightRoleRarityConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETSPOTLIGHTROLERARITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BFE20)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETSPOTLIGHTROLERARITYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BFE30)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETSPOTLIGHTROLERARITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BFDE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetSpotLightRoleRarityConfig_TypeDefinitionIndex = 19850;

	class GridFightParamGetSpotLightRoleRarityConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETSPOTLIGHTROLERARITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetSpotLightRoleRarityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetSpotLightRoleRarityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETSPOTLIGHTROLERARITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetSpotLightRoleRarityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetSpotLightRoleRarityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETSPOTLIGHTROLERARITYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
