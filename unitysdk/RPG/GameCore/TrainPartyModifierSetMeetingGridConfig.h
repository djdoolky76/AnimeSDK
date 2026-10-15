#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyModifierSetMeetingGridConfig; }

#define RPG_GAMECORE_TRAINPARTYMODIFIERSETMEETINGGRIDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC32730)
#define RPG_GAMECORE_TRAINPARTYMODIFIERSETMEETINGGRIDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC32740)
#define RPG_GAMECORE_TRAINPARTYMODIFIERSETMEETINGGRIDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC32AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierSetMeetingGridConfig_TypeDefinitionIndex = 18097;

	class TrainPartyModifierSetMeetingGridConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSETMEETINGGRIDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierSetMeetingGridConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierSetMeetingGridConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSETMEETINGGRIDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierSetMeetingGridConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierSetMeetingGridConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSETMEETINGGRIDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
