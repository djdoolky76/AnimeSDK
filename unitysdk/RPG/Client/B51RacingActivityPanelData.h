#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_B51RACINGACTIVITYPANELDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA8B650)
#define RPG_CLIENT_B51RACINGACTIVITYPANELDATA_ISSHOWGOTOBTNREDDOT_OFFSET UNITYSDK_OFFSET(0x1CA8B660)
#define RPG_CLIENT_B51RACINGACTIVITYPANELDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0x1CA8BA80)
#define RPG_CLIENT_B51RACINGACTIVITYPANELDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x1CA8BB50)
#define RPG_CLIENT_B51RACINGACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x1CA8B950)
#define RPG_CLIENT_B51RACINGACTIVITYPANELDATA__HASANYCLAIMABLEREWARD_OFFSET UNITYSDK_OFFSET(0x1CA8B9B0)
#define RPG_CLIENT_B51RACINGACTIVITYPANELDATA__HASRESIDENTCLAIMABLEREWARD_OFFSET UNITYSDK_OFFSET(0x1CA8B6C0)

namespace RPG::Client
{
	inline static constexpr unsigned int B51RacingActivityPanelData_TypeDefinitionIndex = 62990;

	class B51RacingActivityPanelData : public ::RPG::Client::ActivityPanelData
	{
	public:
		// static const ::System::Object _ActivityRewardID; // 0x0
		// static const ::System::String* _ResidentRewardQuestListKey; // 0x0
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACINGACTIVITYPANELDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowGotoBtnRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACINGACTIVITYPANELDATA_ISSHOWGOTOBTNREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACINGACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoNewContentRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACINGACTIVITYPANELDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACINGACTIVITYPANELDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean _HasAnyClaimableReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACINGACTIVITYPANELDATA__HASANYCLAIMABLEREWARD_OFFSET))(this);
		}

		::System::Boolean _HasResidentClaimableReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACINGACTIVITYPANELDATA__HASRESIDENTCLAIMABLEREWARD_OFFSET))(this);
		}

	};
}
