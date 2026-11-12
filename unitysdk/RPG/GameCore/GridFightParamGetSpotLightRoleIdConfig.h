#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetSpotLightRoleIdConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETSPOTLIGHTROLEIDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E948190)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETSPOTLIGHTROLEIDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E9481A0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETSPOTLIGHTROLEIDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E948150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetSpotLightRoleIdConfig_TypeDefinitionIndex = 19849;

	class GridFightParamGetSpotLightRoleIdConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETSPOTLIGHTROLEIDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetSpotLightRoleIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetSpotLightRoleIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETSPOTLIGHTROLEIDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetSpotLightRoleIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetSpotLightRoleIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETSPOTLIGHTROLEIDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
