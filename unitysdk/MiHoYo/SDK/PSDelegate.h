#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class PSDelegate_ActivityChangeAvailabilityDelegate; }
namespace MiHoYo::SDK { class PSDelegate_ActivityChangeAvailabilityListDelegate; }
namespace MiHoYo::SDK { class PSDelegate_ActivityEndDelegate; }
namespace MiHoYo::SDK { class PSDelegate_ActivityManagerDestoryDelegate; }
namespace MiHoYo::SDK { class PSDelegate_ActivityManagerInitDelegate; }
namespace MiHoYo::SDK { class PSDelegate_ActivityResumeDelegate; }
namespace MiHoYo::SDK { class PSDelegate_ActivityStartDelegate; }
namespace MiHoYo::SDK { class PSDelegate_ActivityTerminateDelegate; }
namespace MiHoYo::SDK { class PSDelegate_CheckPremiumDelegate; }
namespace MiHoYo::SDK { class PSDelegate_CheckPsStoreIsEmptyDelegate; }
namespace MiHoYo::SDK { class PSDelegate_CreateTrophyContextDelegate; }
namespace MiHoYo::SDK { class PSDelegate_DestroyTrophyContextDelegate; }
namespace MiHoYo::SDK { class PSDelegate_GameIntentDestoryDelegate; }
namespace MiHoYo::SDK { class PSDelegate_GameIntentInitDelegate; }
namespace MiHoYo::SDK { class PSDelegate_GetAccountCountryDelegate; }
namespace MiHoYo::SDK { class PSDelegate_GetAccountIdByOnlineIdDelegate; }
namespace MiHoYo::SDK { class PSDelegate_GetAccountIdDelegate; }
namespace MiHoYo::SDK { class PSDelegate_GetCommunicationRestrictionStatusDelegate; }
namespace MiHoYo::SDK { class PSDelegate_GetOnlineIdDelegate; }
namespace MiHoYo::SDK { class PSDelegate_GetOnlineIdListWithAccountIdListDelegate; }
namespace MiHoYo::SDK { class PSDelegate_GetPsStoreProductsDelegate; }
namespace MiHoYo::SDK { class PSDelegate_GetSystemEnterButtonAssignDelegate; }
namespace MiHoYo::SDK { class PSDelegate_GetUserIdDelegate; }
namespace MiHoYo::SDK { class PSDelegate_HidePsStoreIconDelegate; }
namespace MiHoYo::SDK { class PSDelegate_NotifyPremiumFeatureDelegate; }
namespace MiHoYo::SDK { class PSDelegate_OpenCommerceCheckoutDialogDelegate; }
namespace MiHoYo::SDK { class PSDelegate_OpenImeDialogDelegate; }
namespace MiHoYo::SDK { class PSDelegate_OpenPremiumCheckoutDialogDelegate; }
namespace MiHoYo::SDK { class PSDelegate_OpenURLDelegate; }
namespace MiHoYo::SDK { class PSDelegate_PS5FriendCallback; }
namespace MiHoYo::SDK { class PSDelegate_PS5FriendDelegate; }
namespace MiHoYo::SDK { class PSDelegate_PS5GameIntentCallback; }
namespace MiHoYo::SDK { class PSDelegate_PS5GameIntentDelegate; }
namespace MiHoYo::SDK { class PSDelegate_RegisterNPStateCallbackDelegate; }
namespace MiHoYo::SDK { class PSDelegate_RunningDialogCloseDelegate; }
namespace MiHoYo::SDK { class PSDelegate_ShowEmptyStoreDialogDelegate; }
namespace MiHoYo::SDK { class PSDelegate_ShowPsStoreIconDelegate; }
namespace MiHoYo::SDK { class PSDelegate_ShowSysMessageDialogDelegate; }
namespace MiHoYo::SDK { class PSDelegate_TryGetAuthCodeDelegate; }
namespace MiHoYo::SDK { class PSDelegate_UnlockTrophyDelegate; }
namespace MiHoYo::SDK { class PSDelegate_UnregisterNPStateCallbackDelegate; }

#define MIHOYO_SDK_PSDELEGATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1AF647C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_TypeDefinitionIndex = 7729;

	class PSDelegate : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PSDelegate_GetOnlineIdListWithAccountIdListDelegate** StaticGet_GetOnlineIdListWithAccountIdList()
		{
			return (::MiHoYo::SDK::PSDelegate_GetOnlineIdListWithAccountIdListDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE580);
		}

		static ::MiHoYo::SDK::PSDelegate_ShowPsStoreIconDelegate** StaticGet_ShowPsStoreIcon()
		{
			return (::MiHoYo::SDK::PSDelegate_ShowPsStoreIconDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE588);
		}

		static ::MiHoYo::SDK::PSDelegate_HidePsStoreIconDelegate** StaticGet_HidePsStoreIcon()
		{
			return (::MiHoYo::SDK::PSDelegate_HidePsStoreIconDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE590);
		}

		static ::MiHoYo::SDK::PSDelegate_CheckPsStoreIsEmptyDelegate** StaticGet_CheckPsStoreIsEmpty()
		{
			return (::MiHoYo::SDK::PSDelegate_CheckPsStoreIsEmptyDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE598);
		}

		static ::MiHoYo::SDK::PSDelegate_PS5FriendCallback** StaticGet_GetBlockList()
		{
			return (::MiHoYo::SDK::PSDelegate_PS5FriendCallback**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE5A0);
		}

		static ::MiHoYo::SDK::PSDelegate_GetAccountCountryDelegate** StaticGet_GetAccountCountry()
		{
			return (::MiHoYo::SDK::PSDelegate_GetAccountCountryDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE5A8);
		}

		static ::MiHoYo::SDK::PSDelegate_DestroyTrophyContextDelegate** StaticGet_DestroyTrophyContext()
		{
			return (::MiHoYo::SDK::PSDelegate_DestroyTrophyContextDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE5B0);
		}

		static ::MiHoYo::SDK::PSDelegate_GameIntentInitDelegate** StaticGet_GameIntentInit()
		{
			return (::MiHoYo::SDK::PSDelegate_GameIntentInitDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE5B8);
		}

		static ::MiHoYo::SDK::PSDelegate_UnregisterNPStateCallbackDelegate** StaticGet_UnregisterNPStateCallback()
		{
			return (::MiHoYo::SDK::PSDelegate_UnregisterNPStateCallbackDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE5C0);
		}

		static ::MiHoYo::SDK::PSDelegate_ActivityChangeAvailabilityDelegate** StaticGet_ActivityChangeAvailability()
		{
			return (::MiHoYo::SDK::PSDelegate_ActivityChangeAvailabilityDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE5C8);
		}

		static ::MiHoYo::SDK::PSDelegate_ActivityManagerDestoryDelegate** StaticGet_ActivityManagerDestory()
		{
			return (::MiHoYo::SDK::PSDelegate_ActivityManagerDestoryDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE5D0);
		}

		static ::MiHoYo::SDK::PSDelegate_PS5GameIntentCallback** StaticGet_RegisterGameIntentJoinSessionId()
		{
			return (::MiHoYo::SDK::PSDelegate_PS5GameIntentCallback**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE5D8);
		}

		static ::MiHoYo::SDK::PSDelegate_GetAccountIdByOnlineIdDelegate** StaticGet_GetAccountIdByOnlineId()
		{
			return (::MiHoYo::SDK::PSDelegate_GetAccountIdByOnlineIdDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE5E0);
		}

		static ::MiHoYo::SDK::PSDelegate_OpenURLDelegate** StaticGet_OpenURL()
		{
			return (::MiHoYo::SDK::PSDelegate_OpenURLDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE5E8);
		}

		static ::MiHoYo::SDK::PSDelegate_ActivityTerminateDelegate** StaticGet_ActivityTerminate()
		{
			return (::MiHoYo::SDK::PSDelegate_ActivityTerminateDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE5F0);
		}

		static ::MiHoYo::SDK::PSDelegate_NotifyPremiumFeatureDelegate** StaticGet_NotifyPremiumFeature()
		{
			return (::MiHoYo::SDK::PSDelegate_NotifyPremiumFeatureDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE5F8);
		}

		static ::MiHoYo::SDK::PSDelegate_RunningDialogCloseDelegate** StaticGet_RunningDialogClose()
		{
			return (::MiHoYo::SDK::PSDelegate_RunningDialogCloseDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE600);
		}

		static ::MiHoYo::SDK::PSDelegate_PS5FriendDelegate** StaticGet_UnregisterBlockListUpdateCallback()
		{
			return (::MiHoYo::SDK::PSDelegate_PS5FriendDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE608);
		}

		static ::MiHoYo::SDK::PSDelegate_GetAccountIdDelegate** StaticGet_GetAccountId()
		{
			return (::MiHoYo::SDK::PSDelegate_GetAccountIdDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE610);
		}

		static ::MiHoYo::SDK::PSDelegate_PS5FriendCallback** StaticGet_GetFriendList()
		{
			return (::MiHoYo::SDK::PSDelegate_PS5FriendCallback**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE618);
		}

		static ::MiHoYo::SDK::PSDelegate_GetUserIdDelegate** StaticGet_GetUserId()
		{
			return (::MiHoYo::SDK::PSDelegate_GetUserIdDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE620);
		}

		static ::MiHoYo::SDK::PSDelegate_OpenImeDialogDelegate** StaticGet_OpenImeDialog()
		{
			return (::MiHoYo::SDK::PSDelegate_OpenImeDialogDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE628);
		}

		static ::MiHoYo::SDK::PSDelegate_GetSystemEnterButtonAssignDelegate** StaticGet_GetSystemEnterButtonAssign()
		{
			return (::MiHoYo::SDK::PSDelegate_GetSystemEnterButtonAssignDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE630);
		}

		static ::MiHoYo::SDK::PSDelegate_ActivityManagerInitDelegate** StaticGet_ActivityManagerInit()
		{
			return (::MiHoYo::SDK::PSDelegate_ActivityManagerInitDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE638);
		}

		static ::MiHoYo::SDK::PSDelegate_OpenCommerceCheckoutDialogDelegate** StaticGet_OpenCommerceCheckoutDialog()
		{
			return (::MiHoYo::SDK::PSDelegate_OpenCommerceCheckoutDialogDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE640);
		}

		static ::MiHoYo::SDK::PSDelegate_GetCommunicationRestrictionStatusDelegate** StaticGet_GetCommunicationRestrictionStatus()
		{
			return (::MiHoYo::SDK::PSDelegate_GetCommunicationRestrictionStatusDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE648);
		}

		static ::MiHoYo::SDK::PSDelegate_CreateTrophyContextDelegate** StaticGet_CreateTrophyContext()
		{
			return (::MiHoYo::SDK::PSDelegate_CreateTrophyContextDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE650);
		}

		static ::MiHoYo::SDK::PSDelegate_GetOnlineIdDelegate** StaticGet_GetOnlineId()
		{
			return (::MiHoYo::SDK::PSDelegate_GetOnlineIdDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE658);
		}

		static ::MiHoYo::SDK::PSDelegate_ActivityEndDelegate** StaticGet_ActivityEnd()
		{
			return (::MiHoYo::SDK::PSDelegate_ActivityEndDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE660);
		}

		static ::MiHoYo::SDK::PSDelegate_ShowSysMessageDialogDelegate** StaticGet_ShowSysMessageDialog()
		{
			return (::MiHoYo::SDK::PSDelegate_ShowSysMessageDialogDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE668);
		}

		static ::MiHoYo::SDK::PSDelegate_PS5GameIntentDelegate** StaticGet_UnregisterGameIntentLaunchActivityId()
		{
			return (::MiHoYo::SDK::PSDelegate_PS5GameIntentDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE670);
		}

		static ::MiHoYo::SDK::PSDelegate_ShowEmptyStoreDialogDelegate** StaticGet_ShowEmptyStoreDialog()
		{
			return (::MiHoYo::SDK::PSDelegate_ShowEmptyStoreDialogDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE678);
		}

		static ::MiHoYo::SDK::PSDelegate_PS5FriendDelegate** StaticGet_UnregisterFriendListUpdateCallback()
		{
			return (::MiHoYo::SDK::PSDelegate_PS5FriendDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE680);
		}

		static ::MiHoYo::SDK::PSDelegate_GetPsStoreProductsDelegate** StaticGet_GetPsStoreProducts()
		{
			return (::MiHoYo::SDK::PSDelegate_GetPsStoreProductsDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE688);
		}

		static ::MiHoYo::SDK::PSDelegate_PS5GameIntentDelegate** StaticGet_UnregisterGameIntentJoinSessionId()
		{
			return (::MiHoYo::SDK::PSDelegate_PS5GameIntentDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE690);
		}

		static ::MiHoYo::SDK::PSDelegate_ActivityResumeDelegate** StaticGet_ActivityResume()
		{
			return (::MiHoYo::SDK::PSDelegate_ActivityResumeDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE698);
		}

		static ::MiHoYo::SDK::PSDelegate_ActivityChangeAvailabilityListDelegate** StaticGet_ActivityChangeAvailabilityList()
		{
			return (::MiHoYo::SDK::PSDelegate_ActivityChangeAvailabilityListDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE6A0);
		}

		static ::MiHoYo::SDK::PSDelegate_ActivityStartDelegate** StaticGet_ActivityStart()
		{
			return (::MiHoYo::SDK::PSDelegate_ActivityStartDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE6A8);
		}

		static ::MiHoYo::SDK::PSDelegate_PS5FriendCallback** StaticGet_RegisterFriendListUpdateCallback()
		{
			return (::MiHoYo::SDK::PSDelegate_PS5FriendCallback**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE6B0);
		}

		static ::MiHoYo::SDK::PSDelegate_PS5FriendCallback** StaticGet_RegisterBlockListUpdateCallback()
		{
			return (::MiHoYo::SDK::PSDelegate_PS5FriendCallback**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE6B8);
		}

		static ::MiHoYo::SDK::PSDelegate_RegisterNPStateCallbackDelegate** StaticGet_RegisterNPStateCallback()
		{
			return (::MiHoYo::SDK::PSDelegate_RegisterNPStateCallbackDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE6C0);
		}

		static ::MiHoYo::SDK::PSDelegate_PS5GameIntentCallback** StaticGet_RegisterGameIntentLaunchActivityId()
		{
			return (::MiHoYo::SDK::PSDelegate_PS5GameIntentCallback**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE6C8);
		}

		static ::MiHoYo::SDK::PSDelegate_TryGetAuthCodeDelegate** StaticGet_TryGetAuthCode()
		{
			return (::MiHoYo::SDK::PSDelegate_TryGetAuthCodeDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE6D0);
		}

		static ::MiHoYo::SDK::PSDelegate_OpenPremiumCheckoutDialogDelegate** StaticGet_OpenPremiumCheckoutDialog()
		{
			return (::MiHoYo::SDK::PSDelegate_OpenPremiumCheckoutDialogDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE6D8);
		}

		static ::MiHoYo::SDK::PSDelegate_CheckPremiumDelegate** StaticGet_CheckPremium()
		{
			return (::MiHoYo::SDK::PSDelegate_CheckPremiumDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE6E0);
		}

		static ::MiHoYo::SDK::PSDelegate_UnlockTrophyDelegate** StaticGet_UnlockTrophy()
		{
			return (::MiHoYo::SDK::PSDelegate_UnlockTrophyDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE6E8);
		}

		static ::MiHoYo::SDK::PSDelegate_GameIntentDestoryDelegate** StaticGet_GameIntentDestory()
		{
			return (::MiHoYo::SDK::PSDelegate_GameIntentDestoryDelegate**)UnitySDK::FromName("MiHoYo.SDK", "PSDelegate")->GetStaticField(0xE6F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_CTOR_OFFSET))(this);
		}

	};
}
