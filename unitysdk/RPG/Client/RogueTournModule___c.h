#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/System/Object.h"
class AFFHHHEJEFH;
class BICALEAAKEL;
class CENKIMNOOFH;
class FFDPILCDNLE;
class GHHJNCOAIJF;
class GKLHNHFCDBL;
class IHGIENOHBMJ;
class MNKPPNJIFLL;
class MPJLKGGKKFH;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GetRogueTournBuildRefHistoryHttpRsp; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { template <typename T> class RPGHttpPlatformActResponse_1; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_ROGUETOURNMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE0108C0)
#define RPG_CLIENT_ROGUETOURNMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE0108F0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__GET_ISAUTOSHOWENTRANCEPAGEAFTERGOTOPROMISED_B__194_0_OFFSET UNITYSDK_OFFSET(0xE010F00)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__36_0_OFFSET UNITYSDK_OFFSET(0xE010A70)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__36_1_OFFSET UNITYSDK_OFFSET(0xE010AA0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFHISTORYHTTPREQ_B__41_0_OFFSET UNITYSDK_OFFSET(0xE010C70)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFHISTORYHTTPREQ_B__41_1_OFFSET UNITYSDK_OFFSET(0xE010CA0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFINTERACTDATAHTTPREQ_B__38_0_OFFSET UNITYSDK_OFFSET(0xE010AF0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFINTERACTDATAHTTPREQ_B__38_1_OFFSET UNITYSDK_OFFSET(0xE010B20)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__40_0_OFFSET UNITYSDK_OFFSET(0xE010BF0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__40_1_OFFSET UNITYSDK_OFFSET(0xE010C20)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFLIKEHTTPREQ_B__39_0_OFFSET UNITYSDK_OFFSET(0xE010B70)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFLIKEHTTPREQ_B__39_1_OFFSET UNITYSDK_OFFSET(0xE010BA0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SETROGUETOURNREGULARMODECACHEDLINEUP_B__3_0_OFFSET UNITYSDK_OFFSET(0xE010900)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SETROGUETOURNWEEKCHALLENGEMODECACHEDLINEUP_B__4_0_OFFSET UNITYSDK_OFFSET(0xE010910)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SHOWCOLLECTIONEXHIBITIONPAGEFROMENTRANCEPROMISED_B__87_0_OFFSET UNITYSDK_OFFSET(0xE010D20)
#define RPG_CLIENT_ROGUETOURNMODULE___C___ONCMDENTERSCENEBYSERVERSCNOTIFY_B__110_0_OFFSET UNITYSDK_OFFSET(0xE010E00)
#define RPG_CLIENT_ROGUETOURNMODULE___C___ONGETROGUETOURNBUILDREFINTERACTDATAHTTPRSP_B__45_0_OFFSET UNITYSDK_OFFSET(0xE010CF0)
#define RPG_CLIENT_ROGUETOURNMODULE___C___SENDGETROGUETOURNBUILDREFSTATICDATAAPIHTTPREQ_B__32_0_OFFSET UNITYSDK_OFFSET(0xE010970)
#define RPG_CLIENT_ROGUETOURNMODULE___C___SENDGETROGUETOURNBUILDREFSTATICDATAAPIHTTPREQ_B__32_1_OFFSET UNITYSDK_OFFSET(0xE0109A0)
#define RPG_CLIENT_ROGUETOURNMODULE___C___SENDGETROGUETOURNBUILDREFSTATICDATACDNHTTPREQ_B__31_0_OFFSET UNITYSDK_OFFSET(0xE010920)
#define RPG_CLIENT_ROGUETOURNMODULE___C___SENDSETROGUETOURNBUILDREFAPPLIEDHTTPREQ_B__35_0_OFFSET UNITYSDK_OFFSET(0xE0109F0)
#define RPG_CLIENT_ROGUETOURNMODULE___C___SENDSETROGUETOURNBUILDREFAPPLIEDHTTPREQ_B__35_1_OFFSET UNITYSDK_OFFSET(0xE010A20)

namespace RPG::Client
{
	class RogueTournModule___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::RPG::Client::Promises::IPromise*>** StaticGet___9__87_0()
		{
			return (::System::Func_1<::RPG::Client::Promises::IPromise*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6D320);
		}

		static ::System::Func_2<::RPG::Client::RPGHttpPlatformActResponse_1<::CENKIMNOOFH*>*, ::GKLHNHFCDBL*>** StaticGet___9__32_1()
		{
			return (::System::Func_2<::RPG::Client::RPGHttpPlatformActResponse_1<::CENKIMNOOFH*>*, ::GKLHNHFCDBL*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6D328);
		}

		static ::System::Func_2<::GHHJNCOAIJF*, ::RPG::Client::Promises::IPromise*>** StaticGet___9__36_0()
		{
			return (::System::Func_2<::GHHJNCOAIJF*, ::RPG::Client::Promises::IPromise*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6D330);
		}

		static ::System::Action** StaticGet___9__110_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6D338);
		}

		static ::System::Func_2<::GHHJNCOAIJF*, ::RPG::Client::Promises::IPromise*>** StaticGet___9__40_0()
		{
			return (::System::Func_2<::GHHJNCOAIJF*, ::RPG::Client::Promises::IPromise*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6D340);
		}

		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::UInt32>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6D348);
		}

		static ::System::Func_2<::GHHJNCOAIJF*, ::RPG::Client::Promises::IPromise*>** StaticGet___9__41_0()
		{
			return (::System::Func_2<::GHHJNCOAIJF*, ::RPG::Client::Promises::IPromise*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6D350);
		}

		static ::System::Func_2<::IHGIENOHBMJ*, ::RPG::Client::RPGHttpPlatformActResponse_1<::MPJLKGGKKFH*>*>** StaticGet___9__35_1()
		{
			return (::System::Func_2<::IHGIENOHBMJ*, ::RPG::Client::RPGHttpPlatformActResponse_1<::MPJLKGGKKFH*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6D358);
		}

		static ::System::Func_2<::IHGIENOHBMJ*, ::RPG::Client::RPGHttpPlatformActResponse_1<::MNKPPNJIFLL*>*>** StaticGet___9__39_1()
		{
			return (::System::Func_2<::IHGIENOHBMJ*, ::RPG::Client::RPGHttpPlatformActResponse_1<::MNKPPNJIFLL*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6D360);
		}

		static ::System::Func_2<::IHGIENOHBMJ*, ::RPG::Client::RPGHttpPlatformActResponse_1<::AFFHHHEJEFH*>*>** StaticGet___9__36_1()
		{
			return (::System::Func_2<::IHGIENOHBMJ*, ::RPG::Client::RPGHttpPlatformActResponse_1<::AFFHHHEJEFH*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6D368);
		}

		static ::System::Func_2<::System::Boolean, ::System::Boolean>** StaticGet___9__194_0()
		{
			return (::System::Func_2<::System::Boolean, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6D370);
		}

		static ::System::Func_2<::GHHJNCOAIJF*, ::RPG::Client::Promises::IPromise*>** StaticGet___9__39_0()
		{
			return (::System::Func_2<::GHHJNCOAIJF*, ::RPG::Client::Promises::IPromise*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6D378);
		}

		static ::System::Func_2<::IHGIENOHBMJ*, ::RPG::Client::RPGHttpPlatformActResponse_1<::BICALEAAKEL*>*>** StaticGet___9__40_1()
		{
			return (::System::Func_2<::IHGIENOHBMJ*, ::RPG::Client::RPGHttpPlatformActResponse_1<::BICALEAAKEL*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6D380);
		}

		static ::System::Func_2<::System::String*, ::RPG::Client::MongoObjectId>** StaticGet___9__45_0()
		{
			return (::System::Func_2<::System::String*, ::RPG::Client::MongoObjectId>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6D388);
		}

		static ::System::Func_2<::IHGIENOHBMJ*, ::RPG::Client::RPGHttpPlatformActResponse_1<::FFDPILCDNLE*>*>** StaticGet___9__38_1()
		{
			return (::System::Func_2<::IHGIENOHBMJ*, ::RPG::Client::RPGHttpPlatformActResponse_1<::FFDPILCDNLE*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6D390);
		}

		static ::System::Func_2<::GHHJNCOAIJF*, ::RPG::Client::Promises::IPromise*>** StaticGet___9__38_0()
		{
			return (::System::Func_2<::GHHJNCOAIJF*, ::RPG::Client::Promises::IPromise*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6D398);
		}

		static ::System::Func_2<::GHHJNCOAIJF*, ::RPG::Client::Promises::IPromise*>** StaticGet___9__35_0()
		{
			return (::System::Func_2<::GHHJNCOAIJF*, ::RPG::Client::Promises::IPromise*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6D3A0);
		}

		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::UInt32>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6D3A8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6D3B0);
		}

		static ::System::Func_2<::IHGIENOHBMJ*, ::RPG::Client::RPGHttpPlatformActResponse_1<::RPG::Client::GetRogueTournBuildRefHistoryHttpRsp*>*>** StaticGet___9__41_1()
		{
			return (::System::Func_2<::IHGIENOHBMJ*, ::RPG::Client::RPGHttpPlatformActResponse_1<::RPG::Client::GetRogueTournBuildRefHistoryHttpRsp*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6D3B8);
		}

		static ::System::Func_2<::IHGIENOHBMJ*, ::RPG::Client::RPGHttpPlatformActResponse_1<::CENKIMNOOFH*>*>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::IHGIENOHBMJ*, ::RPG::Client::RPGHttpPlatformActResponse_1<::CENKIMNOOFH*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6D3C0);
		}

		static ::System::Func_2<::IHGIENOHBMJ*, ::GKLHNHFCDBL*>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::IHGIENOHBMJ*, ::GKLHNHFCDBL*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6D3C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _SetRogueTournRegularModeCachedLineup_b__3_0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SETROGUETOURNREGULARMODECACHEDLINEUP_B__3_0_OFFSET))(this, a1);
		}

		::System::UInt32 _SetRogueTournWeekChallengeModeCachedLineup_b__4_0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SETROGUETOURNWEEKCHALLENGEMODECACHEDLINEUP_B__4_0_OFFSET))(this, a1);
		}

		::GKLHNHFCDBL* __SendGetRogueTournBuildRefStaticDataCdnHttpReq_b__31_0(::IHGIENOHBMJ* a1)
		{
			return ((::GKLHNHFCDBL*(*)(::PVOID, ::IHGIENOHBMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C___SENDGETROGUETOURNBUILDREFSTATICDATACDNHTTPREQ_B__31_0_OFFSET))(this, a1);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::CENKIMNOOFH*>* __SendGetRogueTournBuildRefStaticDataApiHttpReq_b__32_0(::IHGIENOHBMJ* a1)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::CENKIMNOOFH*>*(*)(::PVOID, ::IHGIENOHBMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C___SENDGETROGUETOURNBUILDREFSTATICDATAAPIHTTPREQ_B__32_0_OFFSET))(this, a1);
		}

		::GKLHNHFCDBL* __SendGetRogueTournBuildRefStaticDataApiHttpReq_b__32_1(::RPG::Client::RPGHttpPlatformActResponse_1<::CENKIMNOOFH*>* a1)
		{
			return ((::GKLHNHFCDBL*(*)(::PVOID, ::RPG::Client::RPGHttpPlatformActResponse_1<::CENKIMNOOFH*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C___SENDGETROGUETOURNBUILDREFSTATICDATAAPIHTTPREQ_B__32_1_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __SendSetRogueTournBuildRefAppliedHttpReq_b__35_0(::GHHJNCOAIJF* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::GHHJNCOAIJF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C___SENDSETROGUETOURNBUILDREFAPPLIEDHTTPREQ_B__35_0_OFFSET))(this, a1);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::MPJLKGGKKFH*>* __SendSetRogueTournBuildRefAppliedHttpReq_b__35_1(::IHGIENOHBMJ* a1)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::MPJLKGGKKFH*>*(*)(::PVOID, ::IHGIENOHBMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C___SENDSETROGUETOURNBUILDREFAPPLIEDHTTPREQ_B__35_1_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _SendGetRogueTournBuildRefFavoriteHttpReq_b__36_0(::GHHJNCOAIJF* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::GHHJNCOAIJF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__36_0_OFFSET))(this, a1);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::AFFHHHEJEFH*>* _SendGetRogueTournBuildRefFavoriteHttpReq_b__36_1(::IHGIENOHBMJ* a1)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::AFFHHHEJEFH*>*(*)(::PVOID, ::IHGIENOHBMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__36_1_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _SendGetRogueTournBuildRefInteractDataHttpReq_b__38_0(::GHHJNCOAIJF* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::GHHJNCOAIJF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFINTERACTDATAHTTPREQ_B__38_0_OFFSET))(this, a1);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::FFDPILCDNLE*>* _SendGetRogueTournBuildRefInteractDataHttpReq_b__38_1(::IHGIENOHBMJ* a1)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::FFDPILCDNLE*>*(*)(::PVOID, ::IHGIENOHBMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFINTERACTDATAHTTPREQ_B__38_1_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _SendSetRogueTournBuildRefLikeHttpReq_b__39_0(::GHHJNCOAIJF* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::GHHJNCOAIJF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFLIKEHTTPREQ_B__39_0_OFFSET))(this, a1);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::MNKPPNJIFLL*>* _SendSetRogueTournBuildRefLikeHttpReq_b__39_1(::IHGIENOHBMJ* a1)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::MNKPPNJIFLL*>*(*)(::PVOID, ::IHGIENOHBMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFLIKEHTTPREQ_B__39_1_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _SendSetRogueTournBuildRefFavoriteHttpReq_b__40_0(::GHHJNCOAIJF* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::GHHJNCOAIJF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__40_0_OFFSET))(this, a1);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::BICALEAAKEL*>* _SendSetRogueTournBuildRefFavoriteHttpReq_b__40_1(::IHGIENOHBMJ* a1)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::BICALEAAKEL*>*(*)(::PVOID, ::IHGIENOHBMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__40_1_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _SendGetRogueTournBuildRefHistoryHttpReq_b__41_0(::GHHJNCOAIJF* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::GHHJNCOAIJF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFHISTORYHTTPREQ_B__41_0_OFFSET))(this, a1);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::RPG::Client::GetRogueTournBuildRefHistoryHttpRsp*>* _SendGetRogueTournBuildRefHistoryHttpReq_b__41_1(::IHGIENOHBMJ* a1)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::RPG::Client::GetRogueTournBuildRefHistoryHttpRsp*>*(*)(::PVOID, ::IHGIENOHBMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFHISTORYHTTPREQ_B__41_1_OFFSET))(this, a1);
		}

		::RPG::Client::MongoObjectId __OnGetRogueTournBuildRefInteractDataHttpRsp_b__45_0(::System::String* a1)
		{
			return ((::RPG::Client::MongoObjectId(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C___ONGETROGUETOURNBUILDREFINTERACTDATAHTTPRSP_B__45_0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _ShowCollectionExhibitionPageFromEntrancePromised_b__87_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SHOWCOLLECTIONEXHIBITIONPAGEFROMENTRANCEPROMISED_B__87_0_OFFSET))(this);
		}

		::System::Void __OnCmdEnterSceneByServerScNotify_b__110_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C___ONCMDENTERSCENEBYSERVERSCNOTIFY_B__110_0_OFFSET))(this);
		}

		::System::Boolean _get_IsAutoShowEntrancePageAfterGotoPromised_b__194_0(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__GET_ISAUTOSHOWENTRANCEPAGEAFTERGOTOPROMISED_B__194_0_OFFSET))(this, a1);
		}

	};
}
