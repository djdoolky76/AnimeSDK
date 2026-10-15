#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetRoleNumPreBattleConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D738A10)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D738A20)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7389D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetRoleNumPreBattleConfig_TypeDefinitionIndex = 19517;

	class GridFightParamGetRoleNumPreBattleConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetRoleNumPreBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetRoleNumPreBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetRoleNumPreBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetRoleNumPreBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
