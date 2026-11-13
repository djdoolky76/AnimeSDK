#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_PIXAIRACTIVITYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D82F870)
#define RPG_CLIENT_PIXAIRACTIVITYDATA_ISSHOWGOTOBTNREDDOT_OFFSET UNITYSDK_OFFSET(0x1D82FAB0)
#define RPG_CLIENT_PIXAIRACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x1D82FB10)
#define RPG_CLIENT_PIXAIRACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x1D82F890)
#define RPG_CLIENT_PIXAIRACTIVITYDATA_ISSHOWTIMELIMITREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x1D82F920)
#define RPG_CLIENT_PIXAIRACTIVITYDATA__ISSHOWRESIDENTREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x1D82FA10)

namespace RPG::Client
{
	inline static constexpr unsigned int PixAirActivityData_TypeDefinitionIndex = 63048;

	class PixAirActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::UInt32 _ID; // 0xA0
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIRACTIVITYDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIRACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowGotoBtnRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIRACTIVITYDATA_ISSHOWGOTOBTNREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowTimeLimitRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIRACTIVITYDATA_ISSHOWTIMELIMITREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIRACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsShowResidentRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIRACTIVITYDATA__ISSHOWRESIDENTREWARDREDDOT_OFFSET))(this);
		}

	};
}
