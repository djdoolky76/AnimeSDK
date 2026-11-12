#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelShowTextEntryInputScope.h"
#include "unitysdk/MiHoYo/SDK/KibanaLogLevel.h"
#include "unitysdk/MiHoYo/SDK/SubChannelType.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannel; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelInviteReceivedResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelPrivilegeResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelQueryResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelSocialUpdateResult; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0A4FA0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_CHECKCHANNEL_OFFSET UNITYSDK_OFFSET(0x1D09A4D0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_CHECKMULTIPLAYERPRIVILEGE_OFFSET UNITYSDK_OFFSET(0x1D099FC0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_CHECKPERMISSION_OFFSET UNITYSDK_OFFSET(0x1D09C180)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_CHECKPRIVILEGE_OFFSET UNITYSDK_OFFSET(0x1D09BDD0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_CREATECONSOLERESULT_OFFSET UNITYSDK_OFFSET(0x1D099ED0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A4F90)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_DELETEACTIVITY_OFFSET UNITYSDK_OFFSET(0x1D0A0B00)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_ENSUREINVITERECEIVEDREGISTERED_OFFSET UNITYSDK_OFFSET(0x1D0A26B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_ENSURESOCIALUPDATEREGISTERED_OFFSET UNITYSDK_OFFSET(0x1D09D800)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETACCOUNTCOUNTRY_OFFSET UNITYSDK_OFFSET(0x1D0A39C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETACHIEVEMENTS_OFFSET UNITYSDK_OFFSET(0x1D09DEB0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETACTIVITIES_OFFSET UNITYSDK_OFFSET(0x1D0A0D20)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETBLOCKLIST_OFFSET UNITYSDK_OFFSET(0x1D09CEF0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETCHANNELSTRING_OFFSET UNITYSDK_OFFSET(0x1D0A3800)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETFRIENDLIST_OFFSET UNITYSDK_OFFSET(0x1D09CD00)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETLEADERBOARD_OFFSET UNITYSDK_OFFSET(0x1D09F5D0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETSANDBOXID_OFFSET UNITYSDK_OFFSET(0x1D0A39B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETSTATISTICS_OFFSET UNITYSDK_OFFSET(0x1D09E6B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETUSERID_OFFSET UNITYSDK_OFFSET(0x1D0A39A0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETUSERNAME_OFFSET UNITYSDK_OFFSET(0x1D0A3990)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETUSERPROFILE_OFFSET UNITYSDK_OFFSET(0x1D09D0F0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D0763A0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_HASJOINSESSION_OFFSET UNITYSDK_OFFSET(0x1D0A1290)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_ISHANDHELD_OFFSET UNITYSDK_OFFSET(0x1D0A38F0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_ISINITERROR_OFFSET UNITYSDK_OFFSET(0x1D0A4360)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_LOGIN_OFFSET UNITYSDK_OFFSET(0x1D0A3900)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_LOGREPORT_OFFSET UNITYSDK_OFFSET(0x1D0A39D0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1D0A4F70)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_ONINVITERECEIVED_OFFSET UNITYSDK_OFFSET(0x1D0A2120)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_ONRESOLVEPRIVILEGERESULT_OFFSET UNITYSDK_OFFSET(0x1D09A130)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_ONSOCIALUPDATE_OFFSET UNITYSDK_OFFSET(0x1D09D4A0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_QUERY_OFFSET UNITYSDK_OFFSET(0x1D0A3860)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_REGISTERBLOCKUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1D09DC30)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_REGISTERFRIENDUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1D09DB30)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_REGISTERINVITERECEIVEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D0A2890)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_REGISTERSOCIALUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1D09D2E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_RESET_OFFSET UNITYSDK_OFFSET(0x1D0A4F80)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_RESOLVEPRIVILEGE_OFFSET UNITYSDK_OFFSET(0x1D09BF40)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SENDSESSIONINVITEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D0A1830)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SENDSESSIONINVITE_OFFSET UNITYSDK_OFFSET(0x1D0A1680)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SETACTIVITYINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D09FDA0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SETACTIVITY_OFFSET UNITYSDK_OFFSET(0x1D09FBF0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWERRORDIALOG_OFFSET UNITYSDK_OFFSET(0x1D09B670)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWMESSAGEDIALOG_OFFSET UNITYSDK_OFFSET(0x1D09A9B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWPROFILECARD_OFFSET UNITYSDK_OFFSET(0x1D09A7B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWSESSIONINVITEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D0A14C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWSESSIONINVITE_OFFSET UNITYSDK_OFFSET(0x1D0A1320)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWVIRTUALKEYBOARD_1_OFFSET UNITYSDK_OFFSET(0x1D0A41B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWVIRTUALKEYBOARD_OFFSET UNITYSDK_OFFSET(0x1D09A2B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_TRYRELEASESOCIALUPDATESUBSCRIPTION_OFFSET UNITYSDK_OFFSET(0x1D09DD70)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_UNREGISTERBLOCKUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1D09DE70)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_UNREGISTERFRIENDUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1D09DD30)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_UNREGISTERINVITERECEIVEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D0A2990)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_UPDATEACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0x1D09E0D0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_UPDATERECENTPLAYERS_OFFSET UNITYSDK_OFFSET(0x1D0A2AD0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_UPDATESTATISTICS_OFFSET UNITYSDK_OFFSET(0x1D09EE20)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannel_TypeDefinitionIndex = 8504;

	class HoYoChannel : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::String*>** StaticGet__blockUpdateCallback()
		{
			return (::System::Action_1<::System::String*>**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannel")->GetStaticField(0xF810);
		}

		static ::System::Action_1<::System::String*>** StaticGet__inviteReceivedCallback()
		{
			return (::System::Action_1<::System::String*>**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannel")->GetStaticField(0xF818);
		}

		static ::System::Action_3<::System::Int32, ::System::String*, ::System::Int32>** StaticGet__onResolvePrivilege()
		{
			return (::System::Action_3<::System::Int32, ::System::String*, ::System::Int32>**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannel")->GetStaticField(0xF820);
		}

		static ::System::Action_1<::System::String*>** StaticGet__friendUpdateCallback()
		{
			return (::System::Action_1<::System::String*>**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannel")->GetStaticField(0xF828);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannel** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannel**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannel")->GetStaticField(0xF830);
		}

		static ::System::Int32* StaticGet__thirdErrorCode()
		{
			return (::System::Int32*)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannel")->GetStaticField(0x3260);
		}

		static ::System::Boolean* StaticGet__isInviteReceivedRegistered()
		{
			return (::System::Boolean*)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannel")->GetStaticField(0x3264);
		}

		static ::System::Boolean* StaticGet__hasJoinSession()
		{
			return (::System::Boolean*)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannel")->GetStaticField(0x3265);
		}

		static ::System::Boolean* StaticGet__isSocialUpdateRegistered()
		{
			return (::System::Boolean*)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "HoYoChannel")->GetStaticField(0x3266);
		}

		// static const ::System::Object MULTIPLAYER_PRIVILEGE; // 0x0
		// static const ::System::String* SocialRelationshipsChangedEvent; // 0x0
		// static const ::System::String* MODULE_NAME; // 0x0
		// static const ::System::Object RESULT_TIMEOUT; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::JSONObject* CreateConsoleResult(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_CREATECONSOLERESULT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean CheckMultiplayerPrivilege()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_CHECKMULTIPLAYERPRIVILEGE_OFFSET))();
		}

		static ::System::Void OnResolvePrivilegeResult(::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelPrivilegeResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_ONRESOLVEPRIVILEGERESULT_OFFSET))(a1);
		}

		static ::System::Void ShowVirtualKeyboard(::System::Action_1<::System::String*>* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWVIRTUALKEYBOARD_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ShowProfileCard(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWPROFILECARD_OFFSET))(a1, a2);
		}

		static ::System::Void ShowMessageDialog(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWMESSAGEDIALOG_OFFSET))(a1, a2);
		}

		static ::System::Void ShowErrorDialog(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWERRORDIALOG_OFFSET))(a1, a2);
		}

		static ::System::String* CheckPrivilege(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_CHECKPRIVILEGE_OFFSET))(a1);
		}

		static ::System::Void ResolvePrivilege(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_RESOLVEPRIVILEGE_OFFSET))(a1, a2);
		}

		static ::System::Void CheckPermission(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_CHECKPERMISSION_OFFSET))(a1, a2);
		}

		static ::System::Void GetFriendList(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETFRIENDLIST_OFFSET))(a1);
		}

		static ::System::Void GetBlockList(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETBLOCKLIST_OFFSET))(a1);
		}

		static ::System::Void GetUserProfile(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETUSERPROFILE_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterSocialUpdateCallback(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_REGISTERSOCIALUPDATECALLBACK_OFFSET))(a1);
		}

		static ::System::Void OnSocialUpdate(::MiHoYo::SDK::PC::OS::HoYoChannelSocialUpdateResult* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelSocialUpdateResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_ONSOCIALUPDATE_OFFSET))(a1);
		}

		static ::System::Void EnsureSocialUpdateRegistered()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_ENSURESOCIALUPDATEREGISTERED_OFFSET))();
		}

		static ::System::Void RegisterFriendUpdateCallback(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_REGISTERFRIENDUPDATECALLBACK_OFFSET))(a1);
		}

		static ::System::Void RegisterBlockUpdateCallback(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_REGISTERBLOCKUPDATECALLBACK_OFFSET))(a1);
		}

		static ::System::Void UnregisterFriendUpdateCallback()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_UNREGISTERFRIENDUPDATECALLBACK_OFFSET))();
		}

		static ::System::Void UnregisterBlockUpdateCallback()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_UNREGISTERBLOCKUPDATECALLBACK_OFFSET))();
		}

		static ::System::Void TryReleaseSocialUpdateSubscription()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_TRYRELEASESOCIALUPDATESUBSCRIPTION_OFFSET))();
		}

		static ::System::Void GetAchievements(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETACHIEVEMENTS_OFFSET))(a1);
		}

		static ::System::Void UpdateAchievement(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_UPDATEACHIEVEMENT_OFFSET))(a1);
		}

		static ::System::Void GetStatistics(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETSTATISTICS_OFFSET))(a1, a2);
		}

		static ::System::Void UpdateStatistics(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_UPDATESTATISTICS_OFFSET))(a1);
		}

		static ::System::Void GetLeaderboard(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETLEADERBOARD_OFFSET))(a1, a2);
		}

		static ::System::Void SetActivity(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SETACTIVITY_OFFSET))(a1, a2);
		}

		static ::System::Void SetActivityInternal(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SETACTIVITYINTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Void DeleteActivity(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_DELETEACTIVITY_OFFSET))(a1);
		}

		static ::System::Void GetActivities(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETACTIVITIES_OFFSET))(a1, a2);
		}

		static ::System::String* HasJoinSession()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_HASJOINSESSION_OFFSET))();
		}

		static ::System::Void ShowSessionInvite(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWSESSIONINVITE_OFFSET))(a1);
		}

		static ::System::Void ShowSessionInviteInternal(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWSESSIONINVITEINTERNAL_OFFSET))(a1);
		}

		static ::System::Void SendSessionInvite(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SENDSESSIONINVITE_OFFSET))(a1, a2);
		}

		static ::System::Void SendSessionInviteInternal(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SENDSESSIONINVITEINTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Void OnInviteReceived(::MiHoYo::SDK::PC::OS::HoYoChannelInviteReceivedResult* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelInviteReceivedResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_ONINVITERECEIVED_OFFSET))(a1);
		}

		static ::System::Void EnsureInviteReceivedRegistered()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_ENSUREINVITERECEIVEDREGISTERED_OFFSET))();
		}

		static ::System::Void RegisterInviteReceivedCallback(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_REGISTERINVITERECEIVEDCALLBACK_OFFSET))(a1);
		}

		static ::System::Void UnregisterInviteReceivedCallback()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_UNREGISTERINVITERECEIVEDCALLBACK_OFFSET))();
		}

		static ::System::Void UpdateRecentPlayers(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_UPDATERECENTPLAYERS_OFFSET))(a1);
		}

		static ::System::Boolean CheckChannel(::MiHoYo::SDK::SubChannelType a1)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::SubChannelType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_CHECKCHANNEL_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannel* get_Instance()
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannel*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GET_INSTANCE_OFFSET))();
		}

		static ::System::String* GetChannelString(::MiHoYo::SDK::SubChannelType a1)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::SubChannelType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETCHANNELSTRING_OFFSET))(a1);
		}

		::MiHoYo::SDK::PC::OS::HoYoChannelQueryResult* Query(::System::String* a1)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelQueryResult*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_QUERY_OFFSET))(this, a1);
		}

		::System::Boolean IsHandheld()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_ISHANDHELD_OFFSET))(this);
		}

		::System::Void Login(::System::Action_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_LOGIN_OFFSET))(this, a1, a2);
		}

		::System::String* GetUserName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETUSERNAME_OFFSET))(this);
		}

		::System::String* GetUserId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETUSERID_OFFSET))(this);
		}

		::System::String* GetSandboxId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETSANDBOXID_OFFSET))(this);
		}

		::System::String* GetAccountCountry()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETACCOUNTCOUNTRY_OFFSET))(this);
		}

		::System::Void LogReport(::MiHoYo::SDK::KibanaLogLevel a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::KibanaLogLevel, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_LOGREPORT_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void ShowVirtualKeyboard_1(::System::Action_1<::System::String*>* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::Int32 a5, ::MiHoYo::SDK::PC::OS::HoYoChannelShowTextEntryInputScope a6)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::MiHoYo::SDK::PC::OS::HoYoChannelShowTextEntryInputScope))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_SHOWVIRTUALKEYBOARD_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean IsInitError(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Boolean(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_ISINITERROR_OFFSET))(a1);
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_ONAPPLICATIONQUIT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_RESET_OFFSET))(this);
		}

	};
}
