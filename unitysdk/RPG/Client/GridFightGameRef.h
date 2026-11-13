#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
class CCGFCHPPIDH;
class DPFBIPPLJAP;
class GHHJNCOAIJF;
class GHHJNCOAIJF_KKHGKLOBDFN;
class IHGIENOHBMJ;
class KKJMAOMDCAE;
namespace RPG::Client { class GridFightGameFormation; }
namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { class GridFightPortalCalculator; }
namespace RPG::Client { class GridFightTeamCalculator; }
namespace RPG::Client { template <typename T> class GridFightGameRefHttpRspBody_1; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF_APPLYFORMATION_OFFSET UNITYSDK_OFFSET(0x1D68A540)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_APPLYREF_1_OFFSET UNITYSDK_OFFSET(0x1D69BC20)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_APPLYREF_OFFSET UNITYSDK_OFFSET(0x1D69B420)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D69E420)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_CLEARAPPLIEDGAMEREF_OFFSET UNITYSDK_OFFSET(0x1D69BE60)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_COUNTAPPLIEDGAMEREF_OFFSET UNITYSDK_OFFSET(0x1D69BD90)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D698EA0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_DELETEFORMATION_OFFSET UNITYSDK_OFFSET(0x1D69B150)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D69AE90)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_FAVOUR_OFFSET UNITYSDK_OFFSET(0x1D69CDC0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_GETFAVOURLIST_OFFSET UNITYSDK_OFFSET(0x1D69CAE0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_GETGAMEREFH5URL_OFFSET UNITYSDK_OFFSET(0x1D69DB10)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_GETREFREALLIKECNT_OFFSET UNITYSDK_OFFSET(0x1D69D690)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_GET_ALLFORMATIONS_OFFSET UNITYSDK_OFFSET(0x1D697F90)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_GET_ALLRELATIVEREFSBYPORTAL_OFFSET UNITYSDK_OFFSET(0x1D698900)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_GET_ALLRELATIVEREFS_OFFSET UNITYSDK_OFFSET(0x1D6984B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_GET_FAVOURCNT_OFFSET UNITYSDK_OFFSET(0x1D698E30)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_GET_FAVOURMAXCNT_OFFSET UNITYSDK_OFFSET(0x1D698D20)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_GET_FAVOURSORTEDREFS_OFFSET UNITYSDK_OFFSET(0x1D6982A0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_GET_FIRSTEMPTYFORMATION_OFFSET UNITYSDK_OFFSET(0x1D698150)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_GET_FORMATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1D698000)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_GET_FORMATIONSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x1D697FB0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_GET_GAMEREFPAGETABCACHE_OFFSET UNITYSDK_OFFSET(0x1D698D00)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_GET_HASREFS_OFFSET UNITYSDK_OFFSET(0x1D698450)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_GET_HASSAVEDAPPLIEDGAMEREFID_OFFSET UNITYSDK_OFFSET(0x1D698400)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_INITFORMATIONSLOT_OFFSET UNITYSDK_OFFSET(0x1D6992A0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_ISCOMPLIANT_OFFSET UNITYSDK_OFFSET(0x1D69C8D0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_ISFAVOUR_OFFSET UNITYSDK_OFFSET(0x1D69E300)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_ISLIKE_OFFSET UNITYSDK_OFFSET(0x1D69E270)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_ISNEW_OFFSET UNITYSDK_OFFSET(0x1D69E390)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_ISREFERENCEDINFINAL_OFFSET UNITYSDK_OFFSET(0x1D69CA30)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_ISREFERENCED_OFFSET UNITYSDK_OFFSET(0x1D69C9B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_LIKE_OFFSET UNITYSDK_OFFSET(0x1D69CB40)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_PENDINGREADUPDATE_OFFSET UNITYSDK_OFFSET(0x1D69D030)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_PENDINGREQINTERECTDATA_OFFSET UNITYSDK_OFFSET(0x1D69DCB0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_READUPDATE_OFFSET UNITYSDK_OFFSET(0x1D69CF00)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_REPORTAPPLIEDGAMEREF_OFFSET UNITYSDK_OFFSET(0x1D69BEF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_REQALLPENDINGREADUPDATE_OFFSET UNITYSDK_OFFSET(0x1D69D360)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_REQCURPENDINGIDSINTERECTDATA_OFFSET UNITYSDK_OFFSET(0x1D69DD40)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_REQFORMATION_OFFSET UNITYSDK_OFFSET(0x1D699850)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_REQGAMEREFDATABYSHARECODEINFO_OFFSET UNITYSDK_OFFSET(0x1D69D7B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_REQINTERECTDATA_OFFSET UNITYSDK_OFFSET(0x1D69DE70)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_REQSHARECODEINFO_OFFSET UNITYSDK_OFFSET(0x1D69DA20)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_RESTOREAPPLIEDGAMEREF_OFFSET UNITYSDK_OFFSET(0x1D699570)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SAVEAPPLIEDGAMEREF_OFFSET UNITYSDK_OFFSET(0x1D69B6A0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SAVEFORMATIONTOSERVER_OFFSET UNITYSDK_OFFSET(0x1D68A940)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SAVEFORMATION_OFFSET UNITYSDK_OFFSET(0x1D69B340)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGETGAMEREFSTATICDATAAPIHTTPREQ_OFFSET UNITYSDK_OFFSET(0x1D695F50)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGETGRIDFIGHTGAMEREFSHARECODEREQ_OFFSET UNITYSDK_OFFSET(0x1D697290)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGRIDFIGHTGAMEREFAPPLYREQ_OFFSET UNITYSDK_OFFSET(0x1D695890)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGRIDFIGHTGAMEREFFAVOURREQ_OFFSET UNITYSDK_OFFSET(0x1D694AF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGRIDFIGHTGAMEREFLIKEREQ_OFFSET UNITYSDK_OFFSET(0x1D6951C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_OFFSET UNITYSDK_OFFSET(0x1D694070)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGRIDFIGHTGETGAMEREFINTERECTDATAREQ_OFFSET UNITYSDK_OFFSET(0x1D696410)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGRIDFIGHTREADGAMEREFUPDATEREQ_OFFSET UNITYSDK_OFFSET(0x1D696AA0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SET_ALLFORMATIONS_OFFSET UNITYSDK_OFFSET(0x1D697FA0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SET_GAMEREFPAGETABCACHE_OFFSET UNITYSDK_OFFSET(0x1D698D10)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SWITCHLANG_OFFSET UNITYSDK_OFFSET(0x1D69A9A0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SYNCFAVOURLIST_OFFSET UNITYSDK_OFFSET(0x1D69AEE0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SYNCFROMFILE_OFFSET UNITYSDK_OFFSET(0x1D699A50)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SYNC_1_OFFSET UNITYSDK_OFFSET(0x1D69A9F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SYNC_OFFSET UNITYSDK_OFFSET(0x1D6993F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_UNAPPLYFORMATION_OFFSET UNITYSDK_OFFSET(0x1D68A6E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_UNAPPLYREF_OFFSET UNITYSDK_OFFSET(0x1D69BA50)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_UNFAVOUR_OFFSET UNITYSDK_OFFSET(0x1D69D540)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_UNLIKE_OFFSET UNITYSDK_OFFSET(0x1D69CC80)
#define RPG_CLIENT_GRIDFIGHTGAMEREF__GETALLPORTALRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x1D698950)
#define RPG_CLIENT_GRIDFIGHTGAMEREF__GETALLRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x1D698500)
#define RPG_CLIENT_GRIDFIGHTGAMEREF__LOGHTTPRSP_OFFSET UNITYSDK_OFFSET(0x1D697E60)
#define RPG_CLIENT_GRIDFIGHTGAMEREF__NOTIFYAPPLIEDGAMEREFCHANGED_OFFSET UNITYSDK_OFFSET(0x1D69B910)
#define RPG_CLIENT_GRIDFIGHTGAMEREF__ONHTTPERROR_OFFSET UNITYSDK_OFFSET(0x1D697EB0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF__READNECESSARYDATA_OFFSET UNITYSDK_OFFSET(0x1D699EF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF__READOFFSET_OFFSET UNITYSDK_OFFSET(0x1D699B50)
#define RPG_CLIENT_GRIDFIGHTGAMEREF__REQCURPENDINGIDSINTERECTDATA_B__109_0_OFFSET UNITYSDK_OFFSET(0x1D69E4F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF__RESTOREAPPLIEDGAMEREF_B__75_0_OFFSET UNITYSDK_OFFSET(0x1D69E470)
#define RPG_CLIENT_GRIDFIGHTGAMEREF__SENDGAMEREFHTTPREQ_OFFSET UNITYSDK_OFFSET(0x1D696ED0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF__SETHTTPREQDEBUGPARAMS_OFFSET UNITYSDK_OFFSET(0x1D697960)
#define RPG_CLIENT_GRIDFIGHTGAMEREF__SETHTTPREQPARAMS_OFFSET UNITYSDK_OFFSET(0x1D694960)
#define RPG_CLIENT_GRIDFIGHTGAMEREF__SYNCAPPLIEDSPOTLIGHTGUIDETRACKS_OFFSET UNITYSDK_OFFSET(0x1D69C270)
#define RPG_CLIENT_GRIDFIGHTGAMEREF__SYNCGAMEREFDATAINTERECT_OFFSET UNITYSDK_OFFSET(0x1D69DF70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef_TypeDefinitionIndex = 66240;

	class GridFightGameRef : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>* FavourRefs; // 0x10
		::System::Collections::Generic::HashSet_1<::System::String*>* _NewGameRefIDS; // 0x18
		::System::String* _ApiDomain; // 0x20
		::System::String* CurLang; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormation*>* _AllFormations_k__BackingField; // 0x30
		::System::Collections::Generic::HashSet_1<::System::String*>* _CurPendingReadUpdateIDs; // 0x38
		::System::Collections::Generic::List_1<::Il2CppArray<::System::String*>*>* _PendingReadUpdateIDs; // 0x40
		::RPG::Client::GridFightGameRefData* AppliedGameRef; // 0x48
		::System::Collections::Generic::HashSet_1<::System::String*>* _LikedGameRefIDS; // 0x50
		::Il2CppArray<::RPG::Client::GridFightGameRefData*>* AllRefs; // 0x58
		::System::Collections::Generic::HashSet_1<::System::String*>* _PendingInterectDataIDs; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _RealLikeCnt; // 0x68
		::System::Collections::Generic::HashSet_1<::RPG::Client::MongoObjectId>* _AppliedGameRefs; // 0x70
		::System::String* CurFilePath; // 0x78
		::System::Collections::Generic::HashSet_1<::System::String*>* _FavourGameRefIDS; // 0x80
		::RPG::Client::Promises::Promise_1<::System::Boolean>* SaveFormationPromise; // 0x88
		::RPG::Client::Promises::Promise* ReqFormationPromise; // 0x90
		::RPG::Client::GridFightGameFormation* AppliedFormation; // 0x98
		::System::UInt32 CurRefVersion; // 0xA0
		::System::Boolean IsFormationOpen; // 0xA4
		::System::Byte _padding0[0x3];
		::System::UInt32 PendingVersion; // 0xA8
		::System::UInt32 _GameRefPageTabCache_k__BackingField; // 0xAC
		::System::Single _LastInterectTime; // 0xB0
		static ::RPG::Client::GridFightPortalCalculator** StaticGet__PortalCalculator()
		{
			return (::RPG::Client::GridFightPortalCalculator**)UnitySDK::FromName("RPG.Client", "GridFightGameRef")->GetStaticField(0x32DC0);
		}

		static ::System::String** StaticGet_FallBackLang()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "GridFightGameRef")->GetStaticField(0x32DC8);
		}

		static ::RPG::Client::GridFightTeamCalculator** StaticGet__Calculator()
		{
			return (::RPG::Client::GridFightTeamCalculator**)UnitySDK::FromName("RPG.Client", "GridFightGameRef")->GetStaticField(0x32DD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_CCTOR_OFFSET))();
		}

		::System::Void SendGridFightGetFavourListGameRefReq(::System::Int32 a1, ::System::Int32 a2, ::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SendGridFightGameRefFavourReq(::System::String* a1, ::System::Boolean a2, ::System::Action_1<::System::Boolean>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGRIDFIGHTGAMEREFFAVOURREQ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SendGridFightGameRefLikeReq(::System::String* a1, ::System::Boolean a2, ::System::Action_1<::System::Boolean>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGRIDFIGHTGAMEREFLIKEREQ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SendGridFightGameRefApplyReq(::Il2CppArray<::System::String*>* a1, ::System::Action_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGRIDFIGHTGAMEREFAPPLYREQ_OFFSET))(this, a1, a2);
		}

		::System::Void SendGetGameRefStaticDataApiHttpReq(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGETGAMEREFSTATICDATAAPIHTTPREQ_OFFSET))(this, a1);
		}

		::System::Void SendGridFightGetGameRefInterectDataReq(::Il2CppArray<::System::String*>* a1, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::CCGFCHPPIDH*>*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::CCGFCHPPIDH*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGRIDFIGHTGETGAMEREFINTERECTDATAREQ_OFFSET))(this, a1, a2);
		}

		::System::Void SendGridFightReadGameRefUpdateReq(::Il2CppArray<::System::String*>* a1, ::System::Action_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGRIDFIGHTREADGAMEREFUPDATEREQ_OFFSET))(this, a1, a2);
		}

		::System::Void SendGetGridFightGameRefShareCodeReq(::System::String* a1, ::System::Action_1<::RPG::Client::GridFightGameRefHttpRspBody_1<::DPFBIPPLJAP*>*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::RPG::Client::GridFightGameRefHttpRspBody_1<::DPFBIPPLJAP*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGETGRIDFIGHTGAMEREFSHARECODEREQ_OFFSET))(this, a1, a2);
		}

		::System::Void _SetHttpReqDebugParams(::GHHJNCOAIJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHHJNCOAIJF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF__SETHTTPREQDEBUGPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetHttpReqParams(::GHHJNCOAIJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHHJNCOAIJF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF__SETHTTPREQPARAMS_OFFSET))(this, a1);
		}

		::System::Void _LogHttpRsp(::IHGIENOHBMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHGIENOHBMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF__LOGHTTPRSP_OFFSET))(this, a1);
		}

		::System::Void _OnHttpError(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF__ONHTTPERROR_OFFSET))(this, a1);
		}

		::System::Void _SendGameRefHttpReq(::GHHJNCOAIJF* a1, ::System::Func_2<::System::String*, ::System::Object*>* a2, ::GHHJNCOAIJF_KKHGKLOBDFN* a3, ::System::Action_1<::IHGIENOHBMJ*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::GHHJNCOAIJF*, ::System::Func_2<::System::String*, ::System::Object*>*, ::GHHJNCOAIJF_KKHGKLOBDFN*, ::System::Action_1<::IHGIENOHBMJ*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF__SENDGAMEREFHTTPREQ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormation*>* get_AllFormations()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormation*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_GET_ALLFORMATIONS_OFFSET))(this);
		}

		::System::Void set_AllFormations(::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormation*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormation*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SET_ALLFORMATIONS_OFFSET))(this, a1);
		}

		::System::Int32 get_FormationSlotCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_GET_FORMATIONSLOTCOUNT_OFFSET))(this);
		}

		::System::Int32 get_FormationCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_GET_FORMATIONCOUNT_OFFSET))(this);
		}

		::RPG::Client::GridFightGameFormation* get_FirstEmptyFormation()
		{
			return ((::RPG::Client::GridFightGameFormation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_GET_FIRSTEMPTYFORMATION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>* get_FavourSortedRefs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_GET_FAVOURSORTEDREFS_OFFSET))(this);
		}

		::System::Boolean get_HasSavedAppliedGameRefID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_GET_HASSAVEDAPPLIEDGAMEREFID_OFFSET))(this);
		}

		::System::Boolean get_HasRefs()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_GET_HASREFS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>* get_AllRelativeRefs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_GET_ALLRELATIVEREFS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>* get_AllRelativeRefsByPortal()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_GET_ALLRELATIVEREFSBYPORTAL_OFFSET))(this);
		}

		::System::UInt32 get_GameRefPageTabCache()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_GET_GAMEREFPAGETABCACHE_OFFSET))(this);
		}

		::System::Void set_GameRefPageTabCache(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SET_GAMEREFPAGETABCACHE_OFFSET))(this, a1);
		}

		::System::UInt32 get_FavourMaxCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_GET_FAVOURMAXCNT_OFFSET))(this);
		}

		::System::UInt32 get_FavourCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_GET_FAVOURCNT_OFFSET))(this);
		}

		::System::Void Sync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SYNC_OFFSET))(this);
		}

		::System::Boolean SyncFromFile(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SYNCFROMFILE_OFFSET))(this, a1);
		}

		::System::Void SwitchLang()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SWITCHLANG_OFFSET))(this);
		}

		::System::Void _ReadNecessaryData(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF__READNECESSARYDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int32>*>* _ReadOffset(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int32>*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF__READOFFSET_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* ReqFormation(::System::Action* a1)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_REQFORMATION_OFFSET))(this, a1);
		}

		::System::Void Sync_1(::KKJMAOMDCAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKJMAOMDCAE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SYNC_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncFavourList(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SYNCFAVOURLIST_OFFSET))(this, a1);
		}

		::System::Void RestoreAppliedGameRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_RESTOREAPPLIEDGAMEREF_OFFSET))(this);
		}

		::System::Void InitFormationSlot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_INITFORMATIONSLOT_OFFSET))(this);
		}

		::System::Void DeleteFormation(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_DELETEFORMATION_OFFSET))(this, a1);
		}

		::System::Void SaveFormation(::RPG::Client::GridFightGameFormation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SAVEFORMATION_OFFSET))(this, a1);
		}

		::System::Void SaveFormationToServer(::System::Int32 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SAVEFORMATIONTOSERVER_OFFSET))(this, a1, a2);
		}

		::System::Void ApplyRef(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_APPLYREF_OFFSET))(this, a1);
		}

		::System::Void ApplyFormation(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_APPLYFORMATION_OFFSET))(this, a1);
		}

		::System::Void UnApplyFormation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_UNAPPLYFORMATION_OFFSET))(this);
		}

		::System::Void ApplyRef_1(::RPG::Client::GridFightGameRefData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_APPLYREF_1_OFFSET))(this, a1);
		}

		::System::Void SaveAppliedGameRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SAVEAPPLIEDGAMEREF_OFFSET))(this);
		}

		::System::Void CountAppliedGameRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_COUNTAPPLIEDGAMEREF_OFFSET))(this);
		}

		::System::Void ClearAppliedGameRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_CLEARAPPLIEDGAMEREF_OFFSET))(this);
		}

		::System::Void ReportAppliedGameRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_REPORTAPPLIEDGAMEREF_OFFSET))(this);
		}

		::System::Void UnApplyRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_UNAPPLYREF_OFFSET))(this);
		}

		::System::Void _NotifyAppliedGameRefChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF__NOTIFYAPPLIEDGAMEREFCHANGED_OFFSET))(this);
		}

		::System::Void _SyncAppliedSpotLightGuideTracks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF__SYNCAPPLIEDSPOTLIGHTGUIDETRACKS_OFFSET))(this);
		}

		::System::Boolean IsCompliant(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_ISCOMPLIANT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>* _GetAllRecommendData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF__GETALLRECOMMENDDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>* _GetAllPortalRecommendData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF__GETALLPORTALRECOMMENDDATA_OFFSET))(this);
		}

		::System::Boolean IsReferenced(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_ISREFERENCED_OFFSET))(this, a1);
		}

		::System::Boolean IsReferencedInFinal(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_ISREFERENCEDINFINAL_OFFSET))(this, a1);
		}

		::System::Void GetFavourList(::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_GETFAVOURLIST_OFFSET))(this, a1);
		}

		::System::Void Like(::System::String* a1, ::System::Action_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_LIKE_OFFSET))(this, a1, a2);
		}

		::System::Void Unlike(::System::String* a1, ::System::Action_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_UNLIKE_OFFSET))(this, a1, a2);
		}

		::System::Void Favour(::System::String* a1, ::System::Action_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_FAVOUR_OFFSET))(this, a1, a2);
		}

		::System::Void ReadUpdate(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_READUPDATE_OFFSET))(this, a1);
		}

		::System::Void PendingReadUpdate(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_PENDINGREADUPDATE_OFFSET))(this, a1);
		}

		::System::Void ReqAllPendingReadUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_REQALLPENDINGREADUPDATE_OFFSET))(this);
		}

		::System::Void Unfavour(::System::String* a1, ::System::Action_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_UNFAVOUR_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetRefRealLikeCnt(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_GETREFREALLIKECNT_OFFSET))(this, a1);
		}

		::System::Void ReqGameRefDataByShareCodeInfo(::System::String* a1, ::System::Action_1<::RPG::Client::GridFightGameRefData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::RPG::Client::GridFightGameRefData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_REQGAMEREFDATABYSHARECODEINFO_OFFSET))(this, a1, a2);
		}

		::System::String* GetGameRefH5URL(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_GETGAMEREFH5URL_OFFSET))(this, a1);
		}

		::System::Void ReqShareCodeInfo(::System::String* a1, ::System::Action_1<::RPG::Client::GridFightGameRefData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::RPG::Client::GridFightGameRefData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_REQSHARECODEINFO_OFFSET))(this, a1, a2);
		}

		::System::Void PendingReqInterectData(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_PENDINGREQINTERECTDATA_OFFSET))(this, a1);
		}

		::System::Void ReqCurPendingIDsInterectData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_REQCURPENDINGIDSINTERECTDATA_OFFSET))(this);
		}

		::System::Void ReqInterectData(::Il2CppArray<::System::String*>* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_REQINTERECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncGameRefDataInterect(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::CCGFCHPPIDH*> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::CCGFCHPPIDH*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF__SYNCGAMEREFDATAINTERECT_OFFSET))(this, a1);
		}

		::System::Boolean IsLike(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_ISLIKE_OFFSET))(this, a1);
		}

		::System::Boolean IsFavour(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_ISFAVOUR_OFFSET))(this, a1);
		}

		::System::Boolean IsNew(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_ISNEW_OFFSET))(this, a1);
		}

		::System::Void _RestoreAppliedGameRef_b__75_0(::RPG::Client::GridFightGameRefHttpRspBody_1<::DPFBIPPLJAP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefHttpRspBody_1<::DPFBIPPLJAP*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF__RESTOREAPPLIEDGAMEREF_B__75_0_OFFSET))(this, a1);
		}

		::System::Void _ReqCurPendingIDsInterectData_b__109_0(::System::Collections::Generic::Dictionary_2<::System::String*, ::CCGFCHPPIDH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::CCGFCHPPIDH*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF__REQCURPENDINGIDSINTERECTDATA_B__109_0_OFFSET))(this, a1);
		}

	};
}
