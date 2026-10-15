#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyModifierAddStatUpdateRatioConfig; }

#define RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATUPDATERATIOCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC32040)
#define RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATUPDATERATIOCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC32050)
#define RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATUPDATERATIOCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC32000)

namespace RPG::GameCore
{
	class TrainPartyModifierAddStatUpdateRatioConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATUPDATERATIOCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierAddStatUpdateRatioConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierAddStatUpdateRatioConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATUPDATERATIOCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierAddStatUpdateRatioConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierAddStatUpdateRatioConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATUPDATERATIOCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
