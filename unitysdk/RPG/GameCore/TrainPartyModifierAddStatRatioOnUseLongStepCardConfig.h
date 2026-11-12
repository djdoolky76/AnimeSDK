#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyModifierAddStatRatioOnUseLongStepCardConfig; }

#define RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATRATIOONUSELONGSTEPCARDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE45280)
#define RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATRATIOONUSELONGSTEPCARDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE45290)
#define RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATRATIOONUSELONGSTEPCARDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE45240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierAddStatRatioOnUseLongStepCardConfig_TypeDefinitionIndex = 18274;

	class TrainPartyModifierAddStatRatioOnUseLongStepCardConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATRATIOONUSELONGSTEPCARDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierAddStatRatioOnUseLongStepCardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierAddStatRatioOnUseLongStepCardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATRATIOONUSELONGSTEPCARDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierAddStatRatioOnUseLongStepCardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierAddStatRatioOnUseLongStepCardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDSTATRATIOONUSELONGSTEPCARDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
