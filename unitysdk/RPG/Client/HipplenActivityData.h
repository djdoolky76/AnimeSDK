#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"
namespace RPG::Client { class ActivityHipplenModule; }

#define RPG_CLIENT_HIPPLENACTIVITYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1704E6A0)
#define RPG_CLIENT_HIPPLENACTIVITYDATA_ISSHOWDAILYGOTOREDDOT_OFFSET UNITYSDK_OFFSET(0x1704E7E0)
#define RPG_CLIENT_HIPPLENACTIVITYDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0x1704EB60)
#define RPG_CLIENT_HIPPLENACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x1704EB10)
#define RPG_CLIENT_HIPPLENACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x1704E710)
#define RPG_CLIENT_HIPPLENACTIVITYDATA__HASRESIDENTREWARDSTOTAKE_OFFSET UNITYSDK_OFFSET(0x1704E860)

namespace RPG::Client
{
	inline static constexpr unsigned int HipplenActivityData_TypeDefinitionIndex = 62915;

	class HipplenActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::RPG::Client::ActivityHipplenModule* _Module; // 0xA0
		::System::UInt32 _LimitedRewardID; // 0xA8
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIPPLENACTIVITYDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIPPLENACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIPPLENACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoNewContentRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIPPLENACTIVITYDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowDailyGotoRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIPPLENACTIVITYDATA_ISSHOWDAILYGOTOREDDOT_OFFSET))(this);
		}

		::System::Boolean _HasResidentRewardsToTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIPPLENACTIVITYDATA__HASRESIDENTREWARDSTOTAKE_OFFSET))(this);
		}

	};
}
