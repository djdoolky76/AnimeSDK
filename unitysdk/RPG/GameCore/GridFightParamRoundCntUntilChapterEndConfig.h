#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamRoundCntUntilChapterEndConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMROUNDCNTUNTILCHAPTERENDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D738D70)
#define RPG_GAMECORE_GRIDFIGHTPARAMROUNDCNTUNTILCHAPTERENDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D738D80)
#define RPG_GAMECORE_GRIDFIGHTPARAMROUNDCNTUNTILCHAPTERENDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D738D30)

namespace RPG::GameCore
{
	class GridFightParamRoundCntUntilChapterEndConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMROUNDCNTUNTILCHAPTERENDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamRoundCntUntilChapterEndConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamRoundCntUntilChapterEndConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMROUNDCNTUNTILCHAPTERENDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamRoundCntUntilChapterEndConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamRoundCntUntilChapterEndConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMROUNDCNTUNTILCHAPTERENDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
