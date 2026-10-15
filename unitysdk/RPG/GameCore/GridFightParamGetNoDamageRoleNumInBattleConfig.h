#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetNoDamageRoleNumInBattleConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETNODAMAGEROLENUMINBATTLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D70AAA0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETNODAMAGEROLENUMINBATTLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D70AAB0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETNODAMAGEROLENUMINBATTLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D70AA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetNoDamageRoleNumInBattleConfig_TypeDefinitionIndex = 19530;

	class GridFightParamGetNoDamageRoleNumInBattleConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETNODAMAGEROLENUMINBATTLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetNoDamageRoleNumInBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetNoDamageRoleNumInBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETNODAMAGEROLENUMINBATTLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetNoDamageRoleNumInBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetNoDamageRoleNumInBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETNODAMAGEROLENUMINBATTLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
