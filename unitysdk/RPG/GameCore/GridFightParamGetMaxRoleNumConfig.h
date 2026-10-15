#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetMaxRoleNumConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETMAXROLENUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7384D0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETMAXROLENUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7384E0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETMAXROLENUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D738490)

namespace RPG::GameCore
{
	class GridFightParamGetMaxRoleNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETMAXROLENUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetMaxRoleNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetMaxRoleNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETMAXROLENUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetMaxRoleNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetMaxRoleNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETMAXROLENUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
