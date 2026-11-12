#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
class ALEAKDBNMKC;
class BFAKMCIJFCB;
class GNNOKOIPMLA;
class GOONIFMOOEH;
class IFEKHDCLFAA;
class IKAHKMNCFDN;
class JOFHMCJPBCE;
class KPBCIIFIAGI;
class MLNOEMIDHME;
class NHGEOKPFDBE;
class PBMDEBCGNMD;
class PJFIMFJPMCN;
namespace RPG::Client { class CakeCatchArrangeContext; }
namespace RPG::Client { class CakeCatchCatData; }
namespace RPG::Client { class CakeCatchCatGodData; }
namespace RPG::Client { class CakeCatchDIYHistory; }
namespace RPG::Client { class CakeCatchPerformanceData; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKECATCHMODULE_CANSEARCHCAKESLOT_OFFSET UNITYSDK_OFFSET(0xD24E530)
#define RPG_CLIENT_CAKECATCHMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0xD251560)
#define RPG_CLIENT_CAKECATCHMODULE_DISPOSEARRANGECONTEXT_OFFSET UNITYSDK_OFFSET(0xD248870)
#define RPG_CLIENT_CAKECATCHMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD249C10)
#define RPG_CLIENT_CAKECATCHMODULE_FAKEALLCATPOINTS_OFFSET UNITYSDK_OFFSET(0xD24E050)
#define RPG_CLIENT_CAKECATCHMODULE_GETALLCAKEDATA_OFFSET UNITYSDK_OFFSET(0xD24EDE0)
#define RPG_CLIENT_CAKECATCHMODULE_GETALLCAUGHTCAKECOUNT_OFFSET UNITYSDK_OFFSET(0xD250480)
#define RPG_CLIENT_CAKECATCHMODULE_GETALLPERFORMANCEDATA_OFFSET UNITYSDK_OFFSET(0xD24F020)
#define RPG_CLIENT_CAKECATCHMODULE_GETARRANGEDPOSITIONINFOLIST_OFFSET UNITYSDK_OFFSET(0xD248190)
#define RPG_CLIENT_CAKECATCHMODULE_GETCAKECATCHCOUNTHISTORY_OFFSET UNITYSDK_OFFSET(0xD2420E0)
#define RPG_CLIENT_CAKECATCHMODULE_GETCAKECAUGHTCOUNTINROOM_OFFSET UNITYSDK_OFFSET(0xD24FFE0)
#define RPG_CLIENT_CAKECATCHMODULE_GETCATGODATLASDATA_OFFSET UNITYSDK_OFFSET(0xD2508E0)
#define RPG_CLIENT_CAKECATCHMODULE_GETCAUGHTCAKEDATA_OFFSET UNITYSDK_OFFSET(0xD241DD0)
#define RPG_CLIENT_CAKECATCHMODULE_GETCURRENTROOMCAKECATCHPROGRESS_OFFSET UNITYSDK_OFFSET(0xD2505D0)
#define RPG_CLIENT_CAKECATCHMODULE_GETLOCALCAKEDATA_OFFSET UNITYSDK_OFFSET(0xD24FB00)
#define RPG_CLIENT_CAKECATCHMODULE_GETPERFORMANCEDATA_OFFSET UNITYSDK_OFFSET(0xD24F2A0)
#define RPG_CLIENT_CAKECATCHMODULE_GETRANDOMCAKEDATAS_OFFSET UNITYSDK_OFFSET(0xD250E20)
#define RPG_CLIENT_CAKECATCHMODULE_GETRUNTIMEIDBYPOSITIONINFO_OFFSET UNITYSDK_OFFSET(0xD243780)
#define RPG_CLIENT_CAKECATCHMODULE_GETSLOTINFO_OFFSET UNITYSDK_OFFSET(0xD243F90)
#define RPG_CLIENT_CAKECATCHMODULE_GET_ARRANGECONTEXT_OFFSET UNITYSDK_OFFSET(0xD248E30)
#define RPG_CLIENT_CAKECATCHMODULE_GET_ARRANGELAYOUTHISTORY_OFFSET UNITYSDK_OFFSET(0xD23DA70)
#define RPG_CLIENT_CAKECATCHMODULE_GET_BOXVALIDTIMESTRING_OFFSET UNITYSDK_OFFSET(0xD251410)
#define RPG_CLIENT_CAKECATCHMODULE_GET_DIYLIKECOUNT_OFFSET UNITYSDK_OFFSET(0xD251330)
#define RPG_CLIENT_CAKECATCHMODULE_GET_ISARRANGING_OFFSET UNITYSDK_OFFSET(0xD248DE0)
#define RPG_CLIENT_CAKECATCHMODULE_GET_ISBOXOPENABLE_OFFSET UNITYSDK_OFFSET(0xD251290)
#define RPG_CLIENT_CAKECATCHMODULE_GET_ISLOCALBOXOPENABLE_OFFSET UNITYSDK_OFFSET(0xD2512E0)
#define RPG_CLIENT_CAKECATCHMODULE_GET_PENDINGCAKEID_OFFSET UNITYSDK_OFFSET(0xD2513D0)
#define RPG_CLIENT_CAKECATCHMODULE_GET_WEEKLYSEARCHCOUNT_OFFSET UNITYSDK_OFFSET(0xD251380)
#define RPG_CLIENT_CAKECATCHMODULE_HASANYCAKESTORYNEW_OFFSET UNITYSDK_OFFSET(0xD24F950)
#define RPG_CLIENT_CAKECATCHMODULE_HASANYPERFORMANCECANTAKEREWARD_OFFSET UNITYSDK_OFFSET(0xD24F330)
#define RPG_CLIENT_CAKECATCHMODULE_HASANYPERFORMANCENEW_OFFSET UNITYSDK_OFFSET(0xD24F650)
#define RPG_CLIENT_CAKECATCHMODULE_HASATLASHUDREDDOT_OFFSET UNITYSDK_OFFSET(0xD23BF50)
#define RPG_CLIENT_CAKECATCHMODULE_INITARRANGECONTEXT_OFFSET UNITYSDK_OFFSET(0xD2487E0)
#define RPG_CLIENT_CAKECATCHMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xD248E50)
#define RPG_CLIENT_CAKECATCHMODULE_INTERRUPALLDIALOGUE_OFFSET UNITYSDK_OFFSET(0xD23F170)
#define RPG_CLIENT_CAKECATCHMODULE_ISALLPOSSIBLECAKECAUGHT_OFFSET UNITYSDK_OFFSET(0xD24E7C0)
#define RPG_CLIENT_CAKECATCHMODULE_ISCAKECAUGHTINROOM_OFFSET UNITYSDK_OFFSET(0xD24FF20)
#define RPG_CLIENT_CAKECATCHMODULE_ISCAKECAUGHT_OFFSET UNITYSDK_OFFSET(0xD250260)
#define RPG_CLIENT_CAKECATCHMODULE_ISCAKELOCALAVAILABLE_OFFSET UNITYSDK_OFFSET(0xD2502F0)
#define RPG_CLIENT_CAKECATCHMODULE_ONPLAYERINDIALOGUERANGECHANGED_OFFSET UNITYSDK_OFFSET(0xD251110)
#define RPG_CLIENT_CAKECATCHMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xD249BC0)
#define RPG_CLIENT_CAKECATCHMODULE_ONSOCIALPLAYGAMEPLAYOPERATION_OFFSET UNITYSDK_OFFSET(0xD24BE50)
#define RPG_CLIENT_CAKECATCHMODULE_OPENCAKEBOXRESULTPAGE_OFFSET UNITYSDK_OFFSET(0xD24FCF0)
#define RPG_CLIENT_CAKECATCHMODULE_PLAYSCENERANDOMDIALOGUELOOP_OFFSET UNITYSDK_OFFSET(0xD23F380)
#define RPG_CLIENT_CAKECATCHMODULE_REGISTERWAITPERFORMANCEBACKTOADVENTURE_OFFSET UNITYSDK_OFFSET(0xD2509C0)
#define RPG_CLIENT_CAKECATCHMODULE_SETISPLAYERINDIALOGUERANGE_OFFSET UNITYSDK_OFFSET(0xD251240)
#define RPG_CLIENT_CAKECATCHMODULE_SET_ARRANGECONTEXT_OFFSET UNITYSDK_OFFSET(0xD248E40)
#define RPG_CLIENT_CAKECATCHMODULE_SYNCARRANGECONTEXTWITHSCENE_OFFSET UNITYSDK_OFFSET(0xD247380)
#define RPG_CLIENT_CAKECATCHMODULE_SYNCORIGINALDATAWITHSCENE_OFFSET UNITYSDK_OFFSET(0xD247580)
#define RPG_CLIENT_CAKECATCHMODULE_SYNCSOCIALPLAYROOMDATA_OFFSET UNITYSDK_OFFSET(0xD24BB20)
#define RPG_CLIENT_CAKECATCHMODULE_SYNCTRAINROOMGATEDATA_OFFSET UNITYSDK_OFFSET(0xD249D00)
#define RPG_CLIENT_CAKECATCHMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xD24DE20)
#define RPG_CLIENT_CAKECATCHMODULE_TRYOPENCAKEBOX_OFFSET UNITYSDK_OFFSET(0xD24E290)
#define RPG_CLIENT_CAKECATCHMODULE_TRYSEARCHSLOT_OFFSET UNITYSDK_OFFSET(0xD24EB10)
#define RPG_CLIENT_CAKECATCHMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xD249B80)
#define RPG_CLIENT_CAKECATCHMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xD249830)
#define RPG_CLIENT_CAKECATCHMODULE__DISPOSECAKEDIALOGUEMANAGER_OFFSET UNITYSDK_OFFSET(0xD249CA0)
#define RPG_CLIENT_CAKECATCHMODULE__ENSURECAKEDIALOGUEMANAGER_OFFSET UNITYSDK_OFFSET(0xD250A60)
#define RPG_CLIENT_CAKECATCHMODULE__GETARRANGEAREAINTERACTPROP_OFFSET UNITYSDK_OFFSET(0xD248CE0)
#define RPG_CLIENT_CAKECATCHMODULE__GETWEEKLYSEARCHCOUNT_OFFSET UNITYSDK_OFFSET(0xD24E5F0)
#define RPG_CLIENT_CAKECATCHMODULE__ISBOXOPENABLE_OFFSET UNITYSDK_OFFSET(0xD250830)
#define RPG_CLIENT_CAKECATCHMODULE__ISLOCALBOXOPENABLE_OFFSET UNITYSDK_OFFSET(0xD250D70)
#define RPG_CLIENT_CAKECATCHMODULE__ONENTERSCENESCRSP_OFFSET UNITYSDK_OFFSET(0xD24DC10)
#define RPG_CLIENT_CAKECATCHMODULE__ONTRAINCAKECATCHDATASCNOTIFY_OFFSET UNITYSDK_OFFSET(0xD24DB80)
#define RPG_CLIENT_CAKECATCHMODULE__ONTRAINCAKECATCHDIYSCRSP_OFFSET UNITYSDK_OFFSET(0xD2488D0)
#define RPG_CLIENT_CAKECATCHMODULE__ONTRAINCAKECATCHOPENBOXSCRSP_OFFSET UNITYSDK_OFFSET(0xD24CAD0)
#define RPG_CLIENT_CAKECATCHMODULE__ONTRAINCAKECATCHSEARCHSCRSP_OFFSET UNITYSDK_OFFSET(0xD24D440)
#define RPG_CLIENT_CAKECATCHMODULE__OPENCAKEBOXRESULTPAGE_B__51_0_OFFSET UNITYSDK_OFFSET(0xD251990)
#define RPG_CLIENT_CAKECATCHMODULE__PREPAREPERFORMANCES_OFFSET UNITYSDK_OFFSET(0xD2495B0)
#define RPG_CLIENT_CAKECATCHMODULE__PREPARESLOTS_OFFSET UNITYSDK_OFFSET(0xD248EB0)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHARRANGEAREAINTERACTPROP_OFFSET UNITYSDK_OFFSET(0xD248AC0)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHARRANGELAYOUTSTATUS_OFFSET UNITYSDK_OFFSET(0xD248A10)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHBOXVALIDTIME_OFFSET UNITYSDK_OFFSET(0xD24AEE0)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHCAKECATCHCOUNTHISTORY_OFFSET UNITYSDK_OFFSET(0xD24A410)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHCAKECATCHRECORDHISTORY_OFFSET UNITYSDK_OFFSET(0xD24A8D0)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHCAKECATCHTEXTJOIN_OFFSET UNITYSDK_OFFSET(0xD250C90)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHCAKESTATUS_OFFSET UNITYSDK_OFFSET(0xD24AF60)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHCATGODSTATE_OFFSET UNITYSDK_OFFSET(0xD24C880)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHCURRENTCATGODSATE_OFFSET UNITYSDK_OFFSET(0xD250AF0)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHDIYLIKECOUNT_OFFSET UNITYSDK_OFFSET(0xD24CA30)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHLOCALARRANGELAYOUTSTATUS_OFFSET UNITYSDK_OFFSET(0xD248950)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHLOCALBOXVALIDTIME_OFFSET UNITYSDK_OFFSET(0xD24BAD0)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHLOCALCAKESTATUS_OFFSET UNITYSDK_OFFSET(0xD24B590)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHLOCALCATGODSTATE_OFFSET UNITYSDK_OFFSET(0xD250B60)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHLOCALDIYLIKECOUNT_OFFSET UNITYSDK_OFFSET(0xD24CA80)
#define RPG_CLIENT_CAKECATCHMODULE__REFRESHUNLOCKEDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xD249ED0)
#define RPG_CLIENT_CAKECATCHMODULE__SYNCWITHSCENE_OFFSET UNITYSDK_OFFSET(0xD2475D0)
#define RPG_CLIENT_CAKECATCHMODULE__TRYREFRESHCAKESTATUS_OFFSET UNITYSDK_OFFSET(0xD24BB80)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchModule_TypeDefinitionIndex = 64404;

	class CakeCatchModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::CakeCatchDIYHistory* _LocalArrangeLayoutHistory; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _CakeCatchCountHistory; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CakeCatchPerformanceData*>* _PerformanceDatas; // 0x20
		::System::Collections::Generic::List_1<::IKAHKMNCFDN*>* _LocalCakeHideList; // 0x28
		::RPG::Client::Promises::Promise_1<::System::UInt32>* _TrySearchSlotPromise; // 0x30
		::RPG::Client::CakeCatchArrangeContext* _ArrangeContext_k__BackingField; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NHGEOKPFDBE*>* _CakeCatchWeekRecord; // 0x40
		::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>*>* _TryOpenCakeBoxPromise; // 0x48
		::RPG::Client::CakeCatchDIYHistory* _ArrangeLayoutHistory; // 0x50
		::IFEKHDCLFAA* _CakeDialogueManager; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::GOONIFMOOEH*>* _SlotInfos; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>* _OpenBoxRspCakeList; // 0x68
		::System::UInt64 _CurrentBoxValidTime; // 0x70
		::System::UInt32 _PendingCakeID; // 0x78
		::System::UInt32 _PendingPerformanceID; // 0x7C
		::System::UInt32 _DIYLikeCount; // 0x80
		::System::Boolean _HasCurrentBoxValidTime; // 0x84
		::System::Byte _padding0[0x3];
		::System::UInt32 _LocalDIYLikeCount; // 0x88
		::System::Byte _padding1[0x4];
		::System::UInt64 _LocalBoxValidTime; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_CTOR_OFFSET))(this);
		}

		::System::Void SyncArrangeContextWithScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_SYNCARRANGECONTEXTWITHSCENE_OFFSET))(this);
		}

		::System::Void SyncOriginalDataWithScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_SYNCORIGINALDATAWITHSCENE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::ALEAKDBNMKC*>* GetArrangedPositionInfoList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::ALEAKDBNMKC*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETARRANGEDPOSITIONINFOLIST_OFFSET))(this, a1);
		}

		::System::UInt32 GetRuntimeIDByPositionInfo(::ALEAKDBNMKC* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::ALEAKDBNMKC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETRUNTIMEIDBYPOSITIONINFO_OFFSET))(this, a1);
		}

		::System::Void InitArrangeContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_INITARRANGECONTEXT_OFFSET))(this);
		}

		::System::Void DisposeArrangeContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_DISPOSEARRANGECONTEXT_OFFSET))(this);
		}

		::System::Void _OnTrainCakeCatchDiyScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ONTRAINCAKECATCHDIYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshArrangeLayoutStatus(::BFAKMCIJFCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFAKMCIJFCB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHARRANGELAYOUTSTATUS_OFFSET))(this, a1);
		}

		::System::Void _RefreshLocalArrangeLayoutStatus(::BFAKMCIJFCB* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::BFAKMCIJFCB*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHLOCALARRANGELAYOUTSTATUS_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncWithScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__SYNCWITHSCENE_OFFSET))(this);
		}

		::System::Void _RefreshArrangeAreaInteractProp(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHARRANGEAREAINTERACTPROP_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* _GetArrangeAreaInteractProp()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__GETARRANGEAREAINTERACTPROP_OFFSET))(this);
		}

		::System::Boolean get_IsArranging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GET_ISARRANGING_OFFSET))(this);
		}

		::RPG::Client::CakeCatchDIYHistory* get_ArrangeLayoutHistory()
		{
			return ((::RPG::Client::CakeCatchDIYHistory*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GET_ARRANGELAYOUTHISTORY_OFFSET))(this);
		}

		::RPG::Client::CakeCatchArrangeContext* get_ArrangeContext()
		{
			return ((::RPG::Client::CakeCatchArrangeContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GET_ARRANGECONTEXT_OFFSET))(this);
		}

		::System::Void set_ArrangeContext(::RPG::Client::CakeCatchArrangeContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeCatchArrangeContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_SET_ARRANGECONTEXT_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncTrainRoomGateData(::KPBCIIFIAGI* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::KPBCIIFIAGI*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_SYNCTRAINROOMGATEDATA_OFFSET))(this, a1, a2);
		}

		::System::Void SyncSocialPlayRoomData(::PBMDEBCGNMD* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::PBMDEBCGNMD*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_SYNCSOCIALPLAYROOMDATA_OFFSET))(this, a1, a2);
		}

		::System::Void OnSocialPlayGameplayOperation(::MLNOEMIDHME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLNOEMIDHME*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_ONSOCIALPLAYGAMEPLAYOPERATION_OFFSET))(this, a1);
		}

		::System::Void _OnTrainCakeCatchOpenBoxScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ONTRAINCAKECATCHOPENBOXSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrainCakeCatchSearchScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ONTRAINCAKECATCHSEARCHSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrainCakeCatchDataScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ONTRAINCAKECATCHDATASCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnEnterSceneScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ONENTERSCENESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::GOONIFMOOEH* GetSlotInfo(::System::UInt32 a1)
		{
			return ((::GOONIFMOOEH*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETSLOTINFO_OFFSET))(this, a1);
		}

		::System::Void FakeAllCatPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_FAKEALLCATPOINTS_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>*>* TryOpenCakeBox()
		{
			return ((::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_TRYOPENCAKEBOX_OFFSET))(this);
		}

		::System::Boolean CanSearchCakeSlot(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_CANSEARCHCAKESLOT_OFFSET))(this, a1);
		}

		::System::Boolean IsAllPossibleCakeCaught()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_ISALLPOSSIBLECAKECAUGHT_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::System::UInt32>* TrySearchSlot(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::Promise_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_TRYSEARCHSLOT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>* GetAllCakeData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETALLCAKEDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchPerformanceData*>* GetAllPerformanceData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeCatchPerformanceData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETALLPERFORMANCEDATA_OFFSET))(this);
		}

		::RPG::Client::CakeCatchPerformanceData* GetPerformanceData(::System::UInt32 a1)
		{
			return ((::RPG::Client::CakeCatchPerformanceData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETPERFORMANCEDATA_OFFSET))(this, a1);
		}

		::System::Boolean HasAnyPerformanceCanTakeReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_HASANYPERFORMANCECANTAKEREWARD_OFFSET))(this);
		}

		::System::Boolean HasAnyPerformanceNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_HASANYPERFORMANCENEW_OFFSET))(this);
		}

		::System::Boolean HasAnyCakeStoryNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_HASANYCAKESTORYNEW_OFFSET))(this);
		}

		::System::Boolean HasAtlasHUDReddot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_HASATLASHUDREDDOT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>* GetLocalCakeData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETLOCALCAKEDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>* GetCaughtCakeData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETCAUGHTCAKEDATA_OFFSET))(this);
		}

		::System::UInt32 GetCakeCatchCountHistory(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETCAKECATCHCOUNTHISTORY_OFFSET))(this, a1);
		}

		::System::Void OpenCakeBoxResultPage(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_OPENCAKEBOXRESULTPAGE_OFFSET))(this, a1);
		}

		::System::Boolean IsCakeCaughtInRoom(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_ISCAKECAUGHTINROOM_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetCakeCaughtCountInRoom(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETCAKECAUGHTCOUNTINROOM_OFFSET))(this, a1);
		}

		::System::Boolean IsCakeCaught(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_ISCAKECAUGHT_OFFSET))(this, a1);
		}

		::System::Boolean IsCakeLocalAvailable(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_ISCAKELOCALAVAILABLE_OFFSET))(this, a1);
		}

		::System::UInt32 GetAllCaughtCakeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETALLCAUGHTCAKECOUNT_OFFSET))(this);
		}

		::System::UInt32 GetCurrentRoomCakeCatchProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETCURRENTROOMCAKECATCHPROGRESS_OFFSET))(this);
		}

		::RPG::Client::CakeCatchCatGodData* GetCatGodAtlasData()
		{
			return ((::RPG::Client::CakeCatchCatGodData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETCATGODATLASDATA_OFFSET))(this);
		}

		::System::Void RegisterWaitPerformanceBackToAdventure(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_REGISTERWAITPERFORMANCEBACKTOADVENTURE_OFFSET))(this, a1);
		}

		::System::Void _PrepareSlots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__PREPARESLOTS_OFFSET))(this);
		}

		::System::Void _PreparePerformances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__PREPAREPERFORMANCES_OFFSET))(this);
		}

		::System::Void _EnsureCakeDialogueManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ENSURECAKEDIALOGUEMANAGER_OFFSET))(this);
		}

		::System::Void _DisposeCakeDialogueManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__DISPOSECAKEDIALOGUEMANAGER_OFFSET))(this);
		}

		::System::Void _TryRefreshCakeStatus(::PBMDEBCGNMD* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::PBMDEBCGNMD*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__TRYREFRESHCAKESTATUS_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshCatGodState(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHCATGODSTATE_OFFSET))(this, a1);
		}

		::System::Void _RefreshCurrentCatGodSate(::GNNOKOIPMLA* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::GNNOKOIPMLA*, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHCURRENTCATGODSATE_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshLocalCatGodState(::GNNOKOIPMLA* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::GNNOKOIPMLA*, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHLOCALCATGODSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshCakeStatus(::System::Collections::Generic::IEnumerable_1<::IKAHKMNCFDN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::IKAHKMNCFDN*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHCAKESTATUS_OFFSET))(this, a1);
		}

		::System::Void _RefreshUnlockedPerformance(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHUNLOCKEDPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void _RefreshCakeCatchCountHistory(::System::Collections::Generic::IEnumerable_1<::JOFHMCJPBCE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::JOFHMCJPBCE*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHCAKECATCHCOUNTHISTORY_OFFSET))(this, a1);
		}

		::System::Void _RefreshCakeCatchRecordHistory(::System::Collections::Generic::IEnumerable_1<::PJFIMFJPMCN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::PJFIMFJPMCN*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHCAKECATCHRECORDHISTORY_OFFSET))(this, a1);
		}

		::System::Void _RefreshLocalCakeStatus(::System::Collections::Generic::IEnumerable_1<::IKAHKMNCFDN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::IKAHKMNCFDN*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHLOCALCAKESTATUS_OFFSET))(this, a1);
		}

		::System::Void _RefreshBoxValidTime(::System::UInt64 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHBOXVALIDTIME_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshLocalBoxValidTime(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHLOCALBOXVALIDTIME_OFFSET))(this, a1);
		}

		::System::Void _RefreshDIYLikeCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHDIYLIKECOUNT_OFFSET))(this, a1);
		}

		::System::Void _RefreshLocalDIYLikeCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHLOCALDIYLIKECOUNT_OFFSET))(this, a1);
		}

		::System::Void _RefreshCakeCatchTextJoin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__REFRESHCAKECATCHTEXTJOIN_OFFSET))(this);
		}

		::System::Boolean _IsBoxOpenable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ISBOXOPENABLE_OFFSET))(this);
		}

		::System::Boolean _IsLocalBoxOpenable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__ISLOCALBOXOPENABLE_OFFSET))(this);
		}

		::System::UInt32 _GetWeeklySearchCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__GETWEEKLYSEARCHCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>* GetRandomCakeDatas(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GETRANDOMCAKEDATAS_OFFSET))(this, a1);
		}

		::System::Void OnPlayerInDialogueRangeChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_ONPLAYERINDIALOGUERANGECHANGED_OFFSET))(this, a1);
		}

		::System::Void SetIsPlayerInDialogueRange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_SETISPLAYERINDIALOGUERANGE_OFFSET))(this, a1);
		}

		::System::Void PlaySceneRandomDialogueLoop(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_PLAYSCENERANDOMDIALOGUELOOP_OFFSET))(this, a1);
		}

		::System::Void InterrupAllDialogue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_INTERRUPALLDIALOGUE_OFFSET))(this);
		}

		::System::Boolean get_IsBoxOpenable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GET_ISBOXOPENABLE_OFFSET))(this);
		}

		::System::Boolean get_IsLocalBoxOpenable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GET_ISLOCALBOXOPENABLE_OFFSET))(this);
		}

		::System::UInt32 get_DIYLikeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GET_DIYLIKECOUNT_OFFSET))(this);
		}

		::System::UInt32 get_WeeklySearchCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GET_WEEKLYSEARCHCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_PendingCakeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GET_PENDINGCAKEID_OFFSET))(this);
		}

		::System::String* get_BoxValidTimeString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE_GET_BOXVALIDTIMESTRING_OFFSET))(this);
		}

		::System::Void _OpenCakeBoxResultPage_b__51_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE__OPENCAKEBOXRESULTPAGE_B__51_0_OFFSET))(this);
		}

	};
}
