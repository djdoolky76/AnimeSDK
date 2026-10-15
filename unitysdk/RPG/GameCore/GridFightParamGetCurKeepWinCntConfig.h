#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetCurKeepWinCntConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURKEEPWINCNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D737F30)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURKEEPWINCNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D737F40)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURKEEPWINCNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D737EF0)

namespace RPG::GameCore
{
	class GridFightParamGetCurKeepWinCntConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURKEEPWINCNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetCurKeepWinCntConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetCurKeepWinCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURKEEPWINCNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetCurKeepWinCntConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetCurKeepWinCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURKEEPWINCNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
