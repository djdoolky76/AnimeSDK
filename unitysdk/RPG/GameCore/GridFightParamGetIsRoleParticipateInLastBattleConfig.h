#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetIsRoleParticipateInLastBattleConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETISROLEPARTICIPATEINLASTBATTLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E947590)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETISROLEPARTICIPATEINLASTBATTLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E9475A0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETISROLEPARTICIPATEINLASTBATTLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E947550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetIsRoleParticipateInLastBattleConfig_TypeDefinitionIndex = 19852;

	class GridFightParamGetIsRoleParticipateInLastBattleConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETISROLEPARTICIPATEINLASTBATTLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetIsRoleParticipateInLastBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetIsRoleParticipateInLastBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETISROLEPARTICIPATEINLASTBATTLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetIsRoleParticipateInLastBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetIsRoleParticipateInLastBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETISROLEPARTICIPATEINLASTBATTLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
