#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_MuteAlertValueDecline; }

#define RPG_GAMECORE_ST_SIDE_MUTEALERTVALUEDECLINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC97D30)
#define RPG_GAMECORE_ST_SIDE_MUTEALERTVALUEDECLINE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC97D40)
#define RPG_GAMECORE_ST_SIDE_MUTEALERTVALUEDECLINE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC97C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_MuteAlertValueDecline_TypeDefinitionIndex = 20446;

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
