#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_AchievementsDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_ActivityDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_AuthTokenDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_BlockListDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_CheckEntitlementsDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_CheckPermissionDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_CheckPrivilegeDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_CheckoutDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_ConsumeDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_FriendListDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_InitDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_InviteDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_LeaderboardDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_LoginDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_ProductsDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_QueryDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_RecentPlayersDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_RegisterAuthStatusChangedCallbackDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_RegisterGameOverlayCallbackDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_RegisterInviteReceivedCallbackDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_RegisterMicroTxnCallbackDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_RegisterSocialUpdateCallbackDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_ResolvePrivilegeDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_ShowErrorDialogDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_ShowMessageDialogDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_ShowProfileCardDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_ShowTextEntryDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_StatisticsDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_UnregisterCallbackDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_UserProfileDelegate; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF222D0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_GET_REGISTERINVITERECEIVEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BF1BCB0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_GET_REGISTERSOCIALUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1BF168C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SET_REGISTERINVITERECEIVEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BF22280)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SET_REGISTERSOCIALUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1BF22230)

namespace MiHoYo::SDK::PC::OS
{
	class HoYoChannelDelegate : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ConsumeDelegate** StaticGet_Consume()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ConsumeDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x138A0);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowErrorDialogDelegate** StaticGet_ShowErrorDialog()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowErrorDialogDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x138A8);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowProfileCardDelegate** StaticGet_ShowProfileCard()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowProfileCardDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x138B0);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckoutDelegate** StaticGet_Checkout()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckoutDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x138B8);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckPrivilegeDelegate** StaticGet_CheckPrivilege()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckPrivilegeDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x138C0);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_LoginDelegate** StaticGet_Login()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_LoginDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x138C8);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_FriendListDelegate** StaticGet_FriendList()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_FriendListDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x138D0);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterSocialUpdateCallbackDelegate** StaticGet__registerSocialUpdateCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterSocialUpdateCallbackDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x138D8);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ResolvePrivilegeDelegate** StaticGet_ResolvePrivilege()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ResolvePrivilegeDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x138E0);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_StatisticsDelegate** StaticGet_Statistics()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_StatisticsDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x138E8);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterAuthStatusChangedCallbackDelegate** StaticGet_RegisterAuthStatusChangedCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterAuthStatusChangedCallbackDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x138F0);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_UserProfileDelegate** StaticGet_UserProfile()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_UserProfileDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x138F8);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckPermissionDelegate** StaticGet_CheckPermission()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckPermissionDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x13900);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_AuthTokenDelegate** StaticGet_AuthToken()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_AuthTokenDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x13908);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterGameOverlayCallbackDelegate** StaticGet_RegisterGameOverlayCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterGameOverlayCallbackDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x13910);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ProductsDelegate** StaticGet_Products()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ProductsDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x13918);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_QueryDelegate** StaticGet_Query()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_QueryDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x13920);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterInviteReceivedCallbackDelegate** StaticGet__registerInviteReceivedCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterInviteReceivedCallbackDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x13928);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ActivityDelegate** StaticGet_Activity()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ActivityDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x13930);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_LeaderboardDelegate** StaticGet_Leaderboard()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_LeaderboardDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x13938);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_UnregisterCallbackDelegate** StaticGet_UnregisterCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_UnregisterCallbackDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x13940);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_AchievementsDelegate** StaticGet_Achievements()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_AchievementsDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x13948);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckEntitlementsDelegate** StaticGet_CheckEntitlements()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckEntitlementsDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x13950);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RecentPlayersDelegate** StaticGet_RecentPlayers()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RecentPlayersDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x13958);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterMicroTxnCallbackDelegate** StaticGet_RegisterMicroTxnCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterMicroTxnCallbackDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x13960);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowMessageDialogDelegate** StaticGet_ShowMessageDialog()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowMessageDialogDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x13968);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_InviteDelegate** StaticGet_Invite()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_InviteDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x13970);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_BlockListDelegate** StaticGet_BlockList()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_BlockListDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x13978);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_InitDelegate** StaticGet_Init()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_InitDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x13980);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowTextEntryDelegate** StaticGet_ShowTextEntry()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowTextEntryDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x13988);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterSocialUpdateCallbackDelegate* get_RegisterSocialUpdateCallback()
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterSocialUpdateCallbackDelegate*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_GET_REGISTERSOCIALUPDATECALLBACK_OFFSET))();
		}

		static ::System::Void set_RegisterSocialUpdateCallback(::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterSocialUpdateCallbackDelegate* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterSocialUpdateCallbackDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SET_REGISTERSOCIALUPDATECALLBACK_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterInviteReceivedCallbackDelegate* get_RegisterInviteReceivedCallback()
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterInviteReceivedCallbackDelegate*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_GET_REGISTERINVITERECEIVEDCALLBACK_OFFSET))();
		}

		static ::System::Void set_RegisterInviteReceivedCallback(::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterInviteReceivedCallbackDelegate* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterInviteReceivedCallbackDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SET_REGISTERINVITERECEIVEDCALLBACK_OFFSET))(a1);
		}

	};
}
