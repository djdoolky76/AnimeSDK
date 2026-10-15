#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyModifierRefreshCardOnMeetingFinishConfig; }

#define RPG_GAMECORE_TRAINPARTYMODIFIERREFRESHCARDONMEETINGFINISHCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC32670)
#define RPG_GAMECORE_TRAINPARTYMODIFIERREFRESHCARDONMEETINGFINISHCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC32680)
#define RPG_GAMECORE_TRAINPARTYMODIFIERREFRESHCARDONMEETINGFINISHCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC32920)

namespace RPG::GameCore
{
	class TrainPartyModifierRefreshCardOnMeetingFinishConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERREFRESHCARDONMEETINGFINISHCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierRefreshCardOnMeetingFinishConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierRefreshCardOnMeetingFinishConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERREFRESHCARDONMEETINGFINISHCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierRefreshCardOnMeetingFinishConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierRefreshCardOnMeetingFinishConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERREFRESHCARDONMEETINGFINISHCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
