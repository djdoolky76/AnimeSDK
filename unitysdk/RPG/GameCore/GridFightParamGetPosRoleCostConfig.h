#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetPosRoleCostConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETPOSROLECOSTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D738770)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPOSROLECOSTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D738780)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPOSROLECOSTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D738730)

namespace RPG::GameCore
{
	class GridFightParamGetPosRoleCostConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPOSROLECOSTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetPosRoleCostConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetPosRoleCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPOSROLECOSTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetPosRoleCostConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetPosRoleCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPOSROLECOSTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
