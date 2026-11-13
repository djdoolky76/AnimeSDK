#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_CHIMERADUELACTIVITYPANELDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFE6390)
#define RPG_CLIENT_CHIMERADUELACTIVITYPANELDATA_CHECKHASREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x1DFE6010)
#define RPG_CLIENT_CHIMERADUELACTIVITYPANELDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFE5DA0)
#define RPG_CLIENT_CHIMERADUELACTIVITYPANELDATA_ISSHOWGOTOBTNREDDOT_OFFSET UNITYSDK_OFFSET(0x1DFE5DB0)
#define RPG_CLIENT_CHIMERADUELACTIVITYPANELDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0x1DFE60D0)
#define RPG_CLIENT_CHIMERADUELACTIVITYPANELDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x1DFE62F0)
#define RPG_CLIENT_CHIMERADUELACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x1DFE5E70)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelActivityPanelData_TypeDefinitionIndex = 64734;

	class ChimeraDuelActivityPanelData : public ::RPG::Client::ActivityPanelData
	{
	public:
		static ::System::UInt32* StaticGet_ActivityID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "ChimeraDuelActivityPanelData")->GetStaticField(0x3140);
		}

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACTIVITYPANELDATA_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACTIVITYPANELDATA_CCTOR_OFFSET))();
		}

		::System::Boolean IsShowGotoBtnRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACTIVITYPANELDATA_ISSHOWGOTOBTNREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean CheckHasRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACTIVITYPANELDATA_CHECKHASREWARDCANTAKE_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoNewContentRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACTIVITYPANELDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELACTIVITYPANELDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

	};
}
