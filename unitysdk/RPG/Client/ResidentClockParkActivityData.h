#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"
namespace RPG::Client { class ActivityClockParkModule; }

#define RPG_CLIENT_RESIDENTCLOCKPARKACTIVITYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x19754500)
#define RPG_CLIENT_RESIDENTCLOCKPARKACTIVITYDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0x19754750)
#define RPG_CLIENT_RESIDENTCLOCKPARKACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x197546F0)
#define RPG_CLIENT_RESIDENTCLOCKPARKACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x19754570)
#define RPG_CLIENT_RESIDENTCLOCKPARKACTIVITYDATA__HASREWARDTOTAKE_OFFSET UNITYSDK_OFFSET(0x197545F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ResidentClockParkActivityData_TypeDefinitionIndex = 63166;

	class ResidentClockParkActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::RPG::Client::ActivityClockParkModule* _Module; // 0xA0
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTCLOCKPARKACTIVITYDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTCLOCKPARKACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTCLOCKPARKACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoNewContentRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTCLOCKPARKACTIVITYDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET))(this);
		}

		::System::Boolean _HasRewardToTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTCLOCKPARKACTIVITYDATA__HASREWARDTOTAKE_OFFSET))(this);
		}

	};
}
