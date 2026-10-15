#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateParamBattleSeriesWinCountConfig; }

#define RPG_GAMECORE_FATEPARAMBATTLESERIESWINCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69BD70)
#define RPG_GAMECORE_FATEPARAMBATTLESERIESWINCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69BD80)
#define RPG_GAMECORE_FATEPARAMBATTLESERIESWINCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69BD30)

namespace RPG::GameCore
{
	class FateParamBattleSeriesWinCountConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMBATTLESERIESWINCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamBattleSeriesWinCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamBattleSeriesWinCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMBATTLESERIESWINCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamBattleSeriesWinCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamBattleSeriesWinCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMBATTLESERIESWINCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
