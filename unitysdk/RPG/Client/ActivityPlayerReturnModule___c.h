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

#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC59A860)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC59A890)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDBINDINVITATIONCODEWWWREQ_B__94_0_OFFSET UNITYSDK_OFFSET(0xC59AA70)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDBINDINVITATIONCODEWWWREQ_B__94_1_OFFSET UNITYSDK_OFFSET(0xC59AAA0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDBINDINVITATIONCODEWWWREQ_B__94_2_OFFSET UNITYSDK_OFFSET(0xC59AAF0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITEEINFOWWWREQ_B__93_0_OFFSET UNITYSDK_OFFSET(0xC59A9F0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITEEINFOWWWREQ_B__93_1_OFFSET UNITYSDK_OFFSET(0xC59AA20)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITERINFOWWWREQ_B__92_0_OFFSET UNITYSDK_OFFSET(0xC59A970)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITERINFOWWWREQ_B__92_1_OFFSET UNITYSDK_OFFSET(0xC59A9A0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___ONPLAYERRETURNINFOQUERYSCRSP_B__184_0_OFFSET UNITYSDK_OFFSET(0xC59AB00)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___ONPLAYERRETURNTAKEEXTRAHCOINSCNOTIFY_B__15_1_OFFSET UNITYSDK_OFFSET(0xC59A8A0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___REFRESHCURINVITECONFIG_B__57_0_OFFSET UNITYSDK_OFFSET(0xC59A8E0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___REFRESHCURINVITECONFIG_B__57_1_OFFSET UNITYSDK_OFFSET(0xC59A900)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPlayerReturnModule___c_TypeDefinitionIndex = 61869;

	class ActivityPlayerReturnModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::ItemData*>** StaticGet___9__57_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::ItemData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x38910);
		}

		static ::System::Func_2<::IHGIENOHBMJ*, ::HKNBPHAJEJF*>** StaticGet___9__94_1()
		{
			return (::System::Func_2<::IHGIENOHBMJ*, ::HKNBPHAJEJF*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x38918);
		}

		static ::System::Action** StaticGet___9__94_2()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x38920);
		}

		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__184_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x38928);
		}

		static ::System::Func_2<::GHHJNCOAIJF*, ::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>*>** StaticGet___9__93_0()
		{
			return (::System::Func_2<::GHHJNCOAIJF*, ::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x38930);
		}

		static ::System::Func_2<::IHGIENOHBMJ*, ::RPG::Client::RPGHttpPlatformActResponse_1<::KILNFPKCBCP*>*>** StaticGet___9__93_1()
		{
			return (::System::Func_2<::IHGIENOHBMJ*, ::RPG::Client::RPGHttpPlatformActResponse_1<::KILNFPKCBCP*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x38938);
		}

		static ::System::Func_2<::IHGIENOHBMJ*, ::RPG::Client::RPGHttpPlatformActResponse_1<::JNHLMGOBJLH*>*>** StaticGet___9__92_1()
		{
			return (::System::Func_2<::IHGIENOHBMJ*, ::RPG::Client::RPGHttpPlatformActResponse_1<::JNHLMGOBJLH*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x38940);
		}

		static ::System::Func_2<::GHHJNCOAIJF*, ::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>*>** StaticGet___9__94_0()
		{
			return (::System::Func_2<::GHHJNCOAIJF*, ::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x38948);
		}

		static ::System::Func_2<::GHHJNCOAIJF*, ::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>*>** StaticGet___9__92_0()
		{
			return (::System::Func_2<::GHHJNCOAIJF*, ::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x38950);
		}

		static ::System::Func_2<::RPG::GameCore::PlayerReturnInviteRow*, ::System::UInt32>** StaticGet___9__57_0()
		{
			return (::System::Func_2<::RPG::GameCore::PlayerReturnInviteRow*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x38958);
		}

		static ::System::Action** StaticGet___9__15_1()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x38960);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x38968);
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
