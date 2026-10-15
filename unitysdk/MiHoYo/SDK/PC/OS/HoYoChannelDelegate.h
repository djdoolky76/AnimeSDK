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

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BEF7260)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_GET_REGISTERINVITERECEIVEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BEF0C40)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_GET_REGISTERSOCIALUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1BEEB850)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SET_REGISTERINVITERECEIVEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BEF7210)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SET_REGISTERSOCIALUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1BEF71C0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_TypeDefinitionIndex = 8541;

	class HoYoChannelDelegate : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ProductsDelegate** StaticGet_Products()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ProductsDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x17D90);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_InitDelegate** StaticGet_Init()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_InitDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x17D98);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowErrorDialogDelegate** StaticGet_ShowErrorDialog()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowErrorDialogDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x17DA0);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_AuthTokenDelegate** StaticGet_AuthToken()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_AuthTokenDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x17DA8);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RecentPlayersDelegate** StaticGet_RecentPlayers()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RecentPlayersDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x17DB0);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckPermissionDelegate** StaticGet_CheckPermission()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckPermissionDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x17DB8);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_InviteDelegate** StaticGet_Invite()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_InviteDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x17DC0);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ResolvePrivilegeDelegate** StaticGet_ResolvePrivilege()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ResolvePrivilegeDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x17DC8);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_FriendListDelegate** StaticGet_FriendList()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_FriendListDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x17DD0);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterInviteReceivedCallbackDelegate** StaticGet__registerInviteReceivedCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterInviteReceivedCallbackDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x17DD8);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_QueryDelegate** StaticGet_Query()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_QueryDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x17DE0);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterAuthStatusChangedCallbackDelegate** StaticGet_RegisterAuthStatusChangedCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterAuthStatusChangedCallbackDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x17DE8);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterMicroTxnCallbackDelegate** StaticGet_RegisterMicroTxnCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterMicroTxnCallbackDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x17DF0);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_LoginDelegate** StaticGet_Login()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_LoginDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x17DF8);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_BlockListDelegate** StaticGet_BlockList()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_BlockListDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x17E00);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterSocialUpdateCallbackDelegate** StaticGet__registerSocialUpdateCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterSocialUpdateCallbackDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x17E08);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterGameOverlayCallbackDelegate** StaticGet_RegisterGameOverlayCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterGameOverlayCallbackDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x17E10);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_StatisticsDelegate** StaticGet_Statistics()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_StatisticsDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x17E18);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckoutDelegate** StaticGet_Checkout()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckoutDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x17E20);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_UnregisterCallbackDelegate** StaticGet_UnregisterCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_UnregisterCallbackDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x17E28);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_AchievementsDelegate** StaticGet_Achievements()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_AchievementsDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x17E30);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckEntitlementsDelegate** StaticGet_CheckEntitlements()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckEntitlementsDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x17E38);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_UserProfileDelegate** StaticGet_UserProfile()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_UserProfileDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x17E40);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_LeaderboardDelegate** StaticGet_Leaderboard()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_LeaderboardDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x17E48);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowProfileCardDelegate** StaticGet_ShowProfileCard()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowProfileCardDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x17E50);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowTextEntryDelegate** StaticGet_ShowTextEntry()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowTextEntryDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x17E58);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ConsumeDelegate** StaticGet_Consume()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ConsumeDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x17E60);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowMessageDialogDelegate** StaticGet_ShowMessageDialog()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowMessageDialogDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x17E68);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ActivityDelegate** StaticGet_Activity()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ActivityDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x17E70);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckPrivilegeDelegate** StaticGet_CheckPrivilege()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckPrivilegeDelegate**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannelDelegate")->GetStaticField(0x17E78);
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
