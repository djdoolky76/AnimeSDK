#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetRoleNumPreBattleByEquipNumConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLEBYEQUIPNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D70AF20)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLEBYEQUIPNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D70AF30)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLEBYEQUIPNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D70AEE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetRoleNumPreBattleByEquipNumConfig_TypeDefinitionIndex = 19522;

	class GridFightParamGetRoleNumPreBattleByEquipNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLEBYEQUIPNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetRoleNumPreBattleByEquipNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetRoleNumPreBattleByEquipNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLEBYEQUIPNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetRoleNumPreBattleByEquipNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetRoleNumPreBattleByEquipNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMPREBATTLEBYEQUIPNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
