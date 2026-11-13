#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyModifierAddStatRatioOnStopGridBreakByMeetingConfig; }

#define RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATRATIOONSTOPGRIDBREAKBYMEETINGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5DCED0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATRATIOONSTOPGRIDBREAKBYMEETINGCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F5DCEE0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATRATIOONSTOPGRIDBREAKBYMEETINGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F5DCE90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierAddStatRatioOnStopGridBreakByMeetingConfig_TypeDefinitionIndex = 18268;

	class TrainPartyModifierAddStatRatioOnStopGridBreakByMeetingConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATRATIOONSTOPGRIDBREAKBYMEETINGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierAddStatRatioOnStopGridBreakByMeetingConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierAddStatRatioOnStopGridBreakByMeetingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATRATIOONSTOPGRIDBREAKBYMEETINGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierAddStatRatioOnStopGridBreakByMeetingConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierAddStatRatioOnStopGridBreakByMeetingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATRATIOONSTOPGRIDBREAKBYMEETINGCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
