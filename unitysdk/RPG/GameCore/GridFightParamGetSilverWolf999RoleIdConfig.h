#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetSilverWolf999RoleIdConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETSILVERWOLF999ROLEIDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D738AD0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETSILVERWOLF999ROLEIDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D738AE0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETSILVERWOLF999ROLEIDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D738A90)

namespace RPG::GameCore
{
	class GridFightParamGetSilverWolf999RoleIdConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETSILVERWOLF999ROLEIDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetSilverWolf999RoleIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetSilverWolf999RoleIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETSILVERWOLF999ROLEIDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetSilverWolf999RoleIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetSilverWolf999RoleIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETSILVERWOLF999ROLEIDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
