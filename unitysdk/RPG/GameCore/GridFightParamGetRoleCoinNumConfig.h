#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetRoleCoinNumConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLECOINNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D738890)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLECOINNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7388A0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLECOINNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D738850)

namespace RPG::GameCore
{
	class GridFightParamGetRoleCoinNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLECOINNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetRoleCoinNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetRoleCoinNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLECOINNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetRoleCoinNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetRoleCoinNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLECOINNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
