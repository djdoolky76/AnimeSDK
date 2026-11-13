#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class OfferingRewardData; }
namespace System { class Object; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFBF9A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFBA250)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DFBAAA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_GETLEVELOFFERINGREWARDDATA_OFFSET UNITYSDK_OFFSET(0x1DFAC330)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_GETLEVELOFFERINGSUBMITITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1DFBF630)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_GETLEVELREWARDUNLOCKTEXT_OFFSET UNITYSDK_OFFSET(0x1DFBF840)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_GETSHOPOFFERINGREWARDDATA_OFFSET UNITYSDK_OFFSET(0x1DFBF3A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_GETWORKREADYLEVEL_OFFSET UNITYSDK_OFFSET(0x1DFBF730)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_ISLEVELOFFERINGREACHEDWORKREADYLEVEL_OFFSET UNITYSDK_OFFSET(0x1DFB55D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_SYNCPRELEVELOFFERINGDATA_OFFSET UNITYSDK_OFFSET(0x1DFB6B90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE__GETMAXOFFERINGSHOWLEVEL_OFFSET UNITYSDK_OFFSET(0x1DFBF460)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE__ONOFFERINGCLEARSHOWUPGRADEHINT_OFFSET UNITYSDK_OFFSET(0x1DFBF4F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE__ONOFFERINGREWARDSINIT_OFFSET UNITYSDK_OFFSET(0x1DFBF2E0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsOfferingService_TypeDefinitionIndex = 83103;

	class LimaoNewsOfferingService : public ::System::Object
	{
	public:
		::RPG::Client::OfferingRewardData* PreLevelOfferingRewardData; // 0x10
		::System::UInt32 PreLevelOfferingItemCount; // 0x18
		::System::UInt32 PreOfferingLevel; // 0x1C
		static ::System::UInt32* StaticGet_ShopOfferingRewardID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client.LimaoNews", "LimaoNewsOfferingService")->GetStaticField(0xA120);
		}

		static ::System::UInt32* StaticGet_LevelOfferingRewardID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client.LimaoNews", "LimaoNewsOfferingService")->GetStaticField(0xA124);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnOfferingRewardsInit(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE__ONOFFERINGREWARDSINIT_OFFSET))(this, a1);
		}

		::System::Void _OnOfferingClearShowUpgradeHint(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE__ONOFFERINGCLEARSHOWUPGRADEHINT_OFFSET))(this, a1);
		}

		::System::UInt32 _GetMaxOfferingShowLevel(::RPG::Client::OfferingRewardData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::OfferingRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE__GETMAXOFFERINGSHOWLEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::OfferingRewardData* GetLevelOfferingRewardData()
		{
			return ((::RPG::Client::OfferingRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_GETLEVELOFFERINGREWARDDATA_OFFSET))(this);
		}

		::System::UInt32 GetLevelOfferingSubmitItemCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_GETLEVELOFFERINGSUBMITITEMCOUNT_OFFSET))(this);
		}

		::System::Boolean IsLevelOfferingReachedWorkReadyLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_ISLEVELOFFERINGREACHEDWORKREADYLEVEL_OFFSET))(this);
		}

		::System::UInt32 GetWorkReadyLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_GETWORKREADYLEVEL_OFFSET))(this);
		}

		::RPG::Client::OfferingRewardData* GetShopOfferingRewardData()
		{
			return ((::RPG::Client::OfferingRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_GETSHOPOFFERINGREWARDDATA_OFFSET))(this);
		}

		::RPG::Client::TextID GetLevelRewardUnlockText(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_GETLEVELREWARDUNLOCKTEXT_OFFSET))(this, a1);
		}

		::System::Void SyncPreLevelOfferingData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFERINGSERVICE_SYNCPRELEVELOFFERINGDATA_OFFSET))(this);
		}

	};
}
