#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetPreBattleRegionByRoleIdConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETPREBATTLEREGIONBYROLEIDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BF8E0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPREBATTLEREGIONBYROLEIDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BF8F0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPREBATTLEREGIONBYROLEIDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BF8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetPreBattleRegionByRoleIdConfig_TypeDefinitionIndex = 19833;

	class GridFightParamGetPreBattleRegionByRoleIdConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPREBATTLEREGIONBYROLEIDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetPreBattleRegionByRoleIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetPreBattleRegionByRoleIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPREBATTLEREGIONBYROLEIDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetPreBattleRegionByRoleIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetPreBattleRegionByRoleIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPREBATTLEREGIONBYROLEIDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
