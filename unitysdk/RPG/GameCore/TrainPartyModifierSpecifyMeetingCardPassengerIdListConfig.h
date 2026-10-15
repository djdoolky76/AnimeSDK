#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyModifierSpecifyMeetingCardPassengerIdListConfig; }

#define RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYMEETINGCARDPASSENGERIDLISTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC04EC0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYMEETINGCARDPASSENGERIDLISTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC04ED0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYMEETINGCARDPASSENGERIDLISTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC05270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierSpecifyMeetingCardPassengerIdListConfig_TypeDefinitionIndex = 18114;

	class TrainPartyModifierSpecifyMeetingCardPassengerIdListConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYMEETINGCARDPASSENGERIDLISTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierSpecifyMeetingCardPassengerIdListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierSpecifyMeetingCardPassengerIdListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYMEETINGCARDPASSENGERIDLISTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierSpecifyMeetingCardPassengerIdListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierSpecifyMeetingCardPassengerIdListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYMEETINGCARDPASSENGERIDLISTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
