#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetDeathRoleNumInBattleConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETDEATHROLENUMINBATTLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BEEC0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETDEATHROLENUMINBATTLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BEED0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETDEATHROLENUMINBATTLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BEE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetDeathRoleNumInBattleConfig_TypeDefinitionIndex = 19846;

	class GridFightParamGetDeathRoleNumInBattleConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETDEATHROLENUMINBATTLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetDeathRoleNumInBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetDeathRoleNumInBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETDEATHROLENUMINBATTLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetDeathRoleNumInBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetDeathRoleNumInBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETDEATHROLENUMINBATTLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
