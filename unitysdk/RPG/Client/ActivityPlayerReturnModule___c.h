#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
class GHHJNCOAIJF;
class HKNBPHAJEJF;
class IHGIENOHBMJ;
class JNHLMGOBJLH;
class KILNFPKCBCP;
namespace RPG::Client { class ItemData; }
namespace RPG::Client { template <typename T> class RPGHttpPlatformActResponse_1; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::GameCore { class PlayerReturnInviteRow; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC5948A0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC5948D0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDBINDINVITATIONCODEWWWREQ_B__94_0_OFFSET UNITYSDK_OFFSET(0xC594AB0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDBINDINVITATIONCODEWWWREQ_B__94_1_OFFSET UNITYSDK_OFFSET(0xC594AE0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDBINDINVITATIONCODEWWWREQ_B__94_2_OFFSET UNITYSDK_OFFSET(0xC594B30)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITEEINFOWWWREQ_B__93_0_OFFSET UNITYSDK_OFFSET(0xC594A30)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITEEINFOWWWREQ_B__93_1_OFFSET UNITYSDK_OFFSET(0xC594A60)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITERINFOWWWREQ_B__92_0_OFFSET UNITYSDK_OFFSET(0xC5949B0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITERINFOWWWREQ_B__92_1_OFFSET UNITYSDK_OFFSET(0xC5949E0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___ONPLAYERRETURNINFOQUERYSCRSP_B__184_0_OFFSET UNITYSDK_OFFSET(0xC594B40)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___ONPLAYERRETURNTAKEEXTRAHCOINSCNOTIFY_B__15_1_OFFSET UNITYSDK_OFFSET(0xC5948E0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___REFRESHCURINVITECONFIG_B__57_0_OFFSET UNITYSDK_OFFSET(0xC594920)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___REFRESHCURINVITECONFIG_B__57_1_OFFSET UNITYSDK_OFFSET(0xC594940)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPlayerReturnModule___c_TypeDefinitionIndex = 61869;

	class ActivityPlayerReturnModule___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x314E0);
		}

		static ::System::Func_2<::RPG::GameCore::PlayerReturnInviteRow*, ::System::UInt32>** StaticGet___9__57_0()
		{
			return (::System::Func_2<::RPG::GameCore::PlayerReturnInviteRow*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x314E8);
		}

		static ::System::Action** StaticGet___9__94_2()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x314F0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::ItemData*>** StaticGet___9__57_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::ItemData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x314F8);
		}

		static ::System::Action** StaticGet___9__15_1()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x31500);
		}

		static ::System::Func_2<::IHGIENOHBMJ*, ::HKNBPHAJEJF*>** StaticGet___9__94_1()
		{
			return (::System::Func_2<::IHGIENOHBMJ*, ::HKNBPHAJEJF*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x31508);
		}

		static ::System::Func_2<::GHHJNCOAIJF*, ::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>*>** StaticGet___9__94_0()
		{
			return (::System::Func_2<::GHHJNCOAIJF*, ::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x31510);
		}

		static ::System::Func_2<::IHGIENOHBMJ*, ::RPG::Client::RPGHttpPlatformActResponse_1<::KILNFPKCBCP*>*>** StaticGet___9__93_1()
		{
			return (::System::Func_2<::IHGIENOHBMJ*, ::RPG::Client::RPGHttpPlatformActResponse_1<::KILNFPKCBCP*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x31518);
		}

		static ::System::Func_2<::GHHJNCOAIJF*, ::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>*>** StaticGet___9__93_0()
		{
			return (::System::Func_2<::GHHJNCOAIJF*, ::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x31520);
		}

		static ::System::Func_2<::IHGIENOHBMJ*, ::RPG::Client::RPGHttpPlatformActResponse_1<::JNHLMGOBJLH*>*>** StaticGet___9__92_1()
		{
			return (::System::Func_2<::IHGIENOHBMJ*, ::RPG::Client::RPGHttpPlatformActResponse_1<::JNHLMGOBJLH*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x31528);
		}

		static ::System::Func_2<::GHHJNCOAIJF*, ::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>*>** StaticGet___9__92_0()
		{
			return (::System::Func_2<::GHHJNCOAIJF*, ::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x31530);
		}

		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__184_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x31538);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Void __OnPlayerReturnTakeExtraHcoinScNotify_b__15_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___ONPLAYERRETURNTAKEEXTRAHCOINSCNOTIFY_B__15_1_OFFSET))(this);
		}

		::System::UInt32 __RefreshCurInviteConfig_b__57_0(::RPG::GameCore::PlayerReturnInviteRow* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::PlayerReturnInviteRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___REFRESHCURINVITECONFIG_B__57_0_OFFSET))(this, a1);
		}

		::RPG::Client::ItemData* __RefreshCurInviteConfig_b__57_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___REFRESHCURINVITECONFIG_B__57_1_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>* _SendGetInviterInfoWWWReq_b__92_0(::GHHJNCOAIJF* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>*(*)(::PVOID, ::GHHJNCOAIJF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITERINFOWWWREQ_B__92_0_OFFSET))(this, a1);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::JNHLMGOBJLH*>* _SendGetInviterInfoWWWReq_b__92_1(::IHGIENOHBMJ* a1)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::JNHLMGOBJLH*>*(*)(::PVOID, ::IHGIENOHBMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITERINFOWWWREQ_B__92_1_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>* _SendGetInviteeInfoWWWReq_b__93_0(::GHHJNCOAIJF* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>*(*)(::PVOID, ::GHHJNCOAIJF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITEEINFOWWWREQ_B__93_0_OFFSET))(this, a1);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::KILNFPKCBCP*>* _SendGetInviteeInfoWWWReq_b__93_1(::IHGIENOHBMJ* a1)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::KILNFPKCBCP*>*(*)(::PVOID, ::IHGIENOHBMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITEEINFOWWWREQ_B__93_1_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>* _SendBindInvitationCodeWWWReq_b__94_0(::GHHJNCOAIJF* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>*(*)(::PVOID, ::GHHJNCOAIJF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDBINDINVITATIONCODEWWWREQ_B__94_0_OFFSET))(this, a1);
		}

		::HKNBPHAJEJF* _SendBindInvitationCodeWWWReq_b__94_1(::IHGIENOHBMJ* a1)
		{
			return ((::HKNBPHAJEJF*(*)(::PVOID, ::IHGIENOHBMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDBINDINVITATIONCODEWWWREQ_B__94_1_OFFSET))(this, a1);
		}

		::System::Void _SendBindInvitationCodeWWWReq_b__94_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDBINDINVITATIONCODEWWWREQ_B__94_2_OFFSET))(this);
		}

		::System::Boolean __OnPlayerReturnInfoQueryScRsp_b__184_0(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___ONPLAYERRETURNINFOQUERYSCRSP_B__184_0_OFFSET))(this, a1);
		}

	};
}
