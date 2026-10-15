#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetTopDamageRoleIdInBattleConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETTOPDAMAGEROLEIDINBATTLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D70B0A0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETTOPDAMAGEROLEIDINBATTLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D70B0B0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETTOPDAMAGEROLEIDINBATTLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D70B060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetTopDamageRoleIdInBattleConfig_TypeDefinitionIndex = 19531;

	class GridFightParamGetTopDamageRoleIdInBattleConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETTOPDAMAGEROLEIDINBATTLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetTopDamageRoleIdInBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetTopDamageRoleIdInBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETTOPDAMAGEROLEIDINBATTLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetTopDamageRoleIdInBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetTopDamageRoleIdInBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETTOPDAMAGEROLEIDINBATTLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
