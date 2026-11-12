#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"
class KNMJJHEKJDI;

#define RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0xE117DA0)
#define RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE1177F0)
#define RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA_GETACTIVITYID_OFFSET UNITYSDK_OFFSET(0xE117D40)
#define RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA_GETACTIVITYREWARDID_OFFSET UNITYSDK_OFFSET(0xE117CE0)
#define RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA_ISSHOWGOTOBTNREDDOT_OFFSET UNITYSDK_OFFSET(0xE117BE0)
#define RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xE117C70)
#define RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xE117A10)
#define RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA__HASRESIDENTREWARD_OFFSET UNITYSDK_OFFSET(0xE117AB0)
#define RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA__HASTIMELIMITREWARD_OFFSET UNITYSDK_OFFSET(0xE117B10)
#define RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xE117960)
#define RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA__ONINIT_OFFSET UNITYSDK_OFFSET(0xE117800)
#define RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA__ONREDDOTMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0xE1179C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MechCraftActivityPanelData_TypeDefinitionIndex = 63038;

	class MechCraftActivityPanelData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::KNMJJHEKJDI* _ResidentRewardClaimableRedDot; // 0xA0
		static ::System::UInt32* StaticGet_ActivityRewardID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "MechCraftActivityPanelData")->GetStaticField(0x149C0);
		}

		static ::System::UInt32* StaticGet_ActivityID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "MechCraftActivityPanelData")->GetStaticField(0x149C4);
		}

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA_CCTOR_OFFSET))();
		}

		::System::Void _OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA__ONINIT_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _OnRedDotMaybeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA__ONREDDOTMAYBECHANGED_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowGotoBtnRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA_ISSHOWGOTOBTNREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		static ::System::UInt32 GetActivityRewardID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA_GETACTIVITYREWARDID_OFFSET))();
		}

		static ::System::UInt32 GetActivityID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA_GETACTIVITYID_OFFSET))();
		}

		::System::Boolean _HasTimeLimitReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA__HASTIMELIMITREWARD_OFFSET))(this);
		}

		::System::Boolean _HasResidentReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFTACTIVITYPANELDATA__HASRESIDENTREWARD_OFFSET))(this);
		}

	};
}
