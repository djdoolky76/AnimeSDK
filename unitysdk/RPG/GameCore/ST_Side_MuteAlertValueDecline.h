#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_MuteAlertValueDecline; }

#define RPG_GAMECORE_ST_SIDE_MUTEALERTVALUEDECLINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA85530)
#define RPG_GAMECORE_ST_SIDE_MUTEALERTVALUEDECLINE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA85540)
#define RPG_GAMECORE_ST_SIDE_MUTEALERTVALUEDECLINE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA85470)

namespace RPG::GameCore
{
	class ST_Side_MuteAlertValueDecline : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_MUTEALERTVALUEDECLINE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_MuteAlertValueDecline* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_MuteAlertValueDecline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_MUTEALERTVALUEDECLINE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_MuteAlertValueDecline* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_MuteAlertValueDecline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_MUTEALERTVALUEDECLINE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
