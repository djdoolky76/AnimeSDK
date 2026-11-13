#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_PARKOURBALLACTIVITYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF25B20)
#define RPG_CLIENT_PARKOURBALLACTIVITYDATA_ISSHOWGOTOBTNREDDOT_OFFSET UNITYSDK_OFFSET(0x1BF25C70)
#define RPG_CLIENT_PARKOURBALLACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x1BF25B70)
#define RPG_CLIENT_PARKOURBALLACTIVITYDATA__ISSHOWLIMITREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x1BF25BD0)
#define RPG_CLIENT_PARKOURBALLACTIVITYDATA__ONINIT_OFFSET UNITYSDK_OFFSET(0x1BF25B30)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourBallActivityData_TypeDefinitionIndex = 63047;

	class ParkourBallActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURBALLACTIVITYDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void _OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURBALLACTIVITYDATA__ONINIT_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURBALLACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowGotoBtnRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURBALLACTIVITYDATA_ISSHOWGOTOBTNREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsShowLimitRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURBALLACTIVITYDATA__ISSHOWLIMITREWARDREDDOT_OFFSET))(this);
		}

	};
}
