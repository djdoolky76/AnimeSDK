#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBJNJPAOCDA;
class KHBEIDOCBCN;
namespace RPG::Client { class OnlinePlayRoomModule_PendingVisitUIDInfo; }
namespace RPG::Client { class OnlinePlayRoomRecentVisitorInfo; }
namespace RPG::Client::SocialPlay { class SocialPlayMapUIBridge; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEE7F30)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BEE7F70)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETMAPUIBRIDGELIST_B__70_0_OFFSET UNITYSDK_OFFSET(0x1BEE8150)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETMAPUIBRIDGELIST_B__70_1_OFFSET UNITYSDK_OFFSET(0x1BEE82B0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETONLINEROOMPLAYERBRIEFDISPLAYDATALISTBYFLOOR_B__40_0_OFFSET UNITYSDK_OFFSET(0x1BEE8090)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETONLINEROOMPLAYERBRIEFDISPLAYDATALIST_B__39_0_OFFSET UNITYSDK_OFFSET(0x1BEE8050)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETRECENTVISITORLIST_B__69_0_OFFSET UNITYSDK_OFFSET(0x1BEE8110)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GET__FIRSTPENDINGVISITINFO_B__129_0_OFFSET UNITYSDK_OFFSET(0x1BEE8350)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__TRANSFERTOARRANGEPAGE_B__62_3_OFFSET UNITYSDK_OFFSET(0x1BEE80D0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__TRYQUERYONLINEROOMSTATUS_B__36_0_OFFSET UNITYSDK_OFFSET(0x1BEE7FC0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C___GETONLINEPLAYERINFOLISTINROOM_B__82_0_OFFSET UNITYSDK_OFFSET(0x1BEE8340)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C___ONSOCIALPLAYGAMEPLAYOPERATIONSCNOTIFY_B__9_0_OFFSET UNITYSDK_OFFSET(0x1BEE7F80)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomModule___c_TypeDefinitionIndex = 68338;

	class OnlinePlayRoomModule___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::OnlinePlayRoomRecentVisitorInfo*>** StaticGet___9__69_0()
		{
			return (::System::Comparison_1<::RPG::Client::OnlinePlayRoomRecentVisitorInfo*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1AD40);
		}

		static ::System::Action** StaticGet___9__9_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1AD48);
		}

		static ::System::Comparison_1<::JBJNJPAOCDA*>** StaticGet___9__40_0()
		{
			return (::System::Comparison_1<::JBJNJPAOCDA*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1AD50);
		}

		static ::System::Comparison_1<::KHBEIDOCBCN*>** StaticGet___9__70_0()
		{
			return (::System::Comparison_1<::KHBEIDOCBCN*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1AD58);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__36_0()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1AD60);
		}

		static ::System::Comparison_1<::System::Object*>** StaticGet___9__129_0()
		{
			return (::System::Comparison_1<::System::Object*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1AD68);
		}

		static ::System::Func_2<::JBJNJPAOCDA*, ::System::Boolean>** StaticGet___9__82_0()
		{
			return (::System::Func_2<::JBJNJPAOCDA*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1AD70);
		}

		static ::System::Action** StaticGet___9__62_3()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1AD78);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1AD80);
		}

		static ::System::Comparison_1<::JBJNJPAOCDA*>** StaticGet___9__39_0()
		{
			return (::System::Comparison_1<::JBJNJPAOCDA*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1AD88);
		}

		static ::System::Func_2<::KHBEIDOCBCN*, ::RPG::Client::SocialPlay::SocialPlayMapUIBridge*>** StaticGet___9__70_1()
		{
			return (::System::Func_2<::KHBEIDOCBCN*, ::RPG::Client::SocialPlay::SocialPlayMapUIBridge*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1AD90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Void __OnSocialPlayGameplayOperationScNotify_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C___ONSOCIALPLAYGAMEPLAYOPERATIONSCNOTIFY_B__9_0_OFFSET))(this);
		}

		::System::Void _TryqueryOnlineRoomStatus_b__36_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__TRYQUERYONLINEROOMSTATUS_B__36_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetOnlineRoomPlayerBriefDisplayDataList_b__39_0(::JBJNJPAOCDA* a1, ::JBJNJPAOCDA* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::JBJNJPAOCDA*, ::JBJNJPAOCDA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETONLINEROOMPLAYERBRIEFDISPLAYDATALIST_B__39_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetOnlineRoomPlayerBriefDisplayDataListByFloor_b__40_0(::JBJNJPAOCDA* a1, ::JBJNJPAOCDA* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::JBJNJPAOCDA*, ::JBJNJPAOCDA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETONLINEROOMPLAYERBRIEFDISPLAYDATALISTBYFLOOR_B__40_0_OFFSET))(this, a1, a2);
		}

		::System::Void _TransferToArrangePage_b__62_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__TRANSFERTOARRANGEPAGE_B__62_3_OFFSET))(this);
		}

		::System::Int32 _GetRecentVisitorList_b__69_0(::RPG::Client::OnlinePlayRoomRecentVisitorInfo* a1, ::RPG::Client::OnlinePlayRoomRecentVisitorInfo* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::OnlinePlayRoomRecentVisitorInfo*, ::RPG::Client::OnlinePlayRoomRecentVisitorInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETRECENTVISITORLIST_B__69_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetMapUIBridgeList_b__70_0(::KHBEIDOCBCN* a1, ::KHBEIDOCBCN* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::KHBEIDOCBCN*, ::KHBEIDOCBCN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETMAPUIBRIDGELIST_B__70_0_OFFSET))(this, a1, a2);
		}

		::RPG::Client::SocialPlay::SocialPlayMapUIBridge* _GetMapUIBridgeList_b__70_1(::KHBEIDOCBCN* a1)
		{
			return ((::RPG::Client::SocialPlay::SocialPlayMapUIBridge*(*)(::PVOID, ::KHBEIDOCBCN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETMAPUIBRIDGELIST_B__70_1_OFFSET))(this, a1);
		}

		::System::Boolean __GetOnlinePlayerInfoListInRoom_b__82_0(::JBJNJPAOCDA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBJNJPAOCDA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C___GETONLINEPLAYERINFOLISTINROOM_B__82_0_OFFSET))(this, a1);
		}

		::System::Int32 _get__FirstPendingVisitInfo_b__129_0(::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo* a1, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GET__FIRSTPENDINGVISITINFO_B__129_0_OFFSET))(this, a1, a2);
		}

	};
}
