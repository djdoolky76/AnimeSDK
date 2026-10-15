#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetPreBattleRoleStarConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETPREBATTLEROLESTARCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7387D0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPREBATTLEROLESTARCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7387E0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPREBATTLEROLESTARCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D738790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetPreBattleRoleStarConfig_TypeDefinitionIndex = 19528;

	class GridFightParamGetPreBattleRoleStarConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPREBATTLEROLESTARCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetPreBattleRoleStarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetPreBattleRoleStarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPREBATTLEROLESTARCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetPreBattleRoleStarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetPreBattleRoleStarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPREBATTLEROLESTARCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
