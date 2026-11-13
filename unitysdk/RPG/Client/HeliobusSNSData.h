#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/HeliobusSNSPostPhase.h"
#include "unitysdk/System/Object.h"
class BGOMIHEFHPA;
namespace RPG::Client { class HeliobusSNSAccountBeforeData; }
namespace RPG::Client { class HeliobusSNSPostData; }
namespace RPG::Client { class MainMissionData; }
namespace RPG::GameCore { class HeliobusSpecialPostRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HELIOBUSSNSDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F4C10)
#define RPG_CLIENT_HELIOBUSSNSDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C5F56F0)
#define RPG_CLIENT_HELIOBUSSNSDATA_GETALLPOSTMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x1C5FD010)
#define RPG_CLIENT_HELIOBUSSNSDATA_GETANCHROPOSTCANTAKE_OFFSET UNITYSDK_OFFSET(0x1C5F3C70)
#define RPG_CLIENT_HELIOBUSSNSDATA_GETPOSTCOUNT_OFFSET UNITYSDK_OFFSET(0x1C5FD520)
#define RPG_CLIENT_HELIOBUSSNSDATA_GETPOSTINPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C5FD670)
#define RPG_CLIENT_HELIOBUSSNSDATA_GETSPPOSTDATACANSEND_OFFSET UNITYSDK_OFFSET(0x1C5FCDD0)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_ACTIONDAY_OFFSET UNITYSDK_OFFSET(0x1C5FDB40)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_ALLHELIOBUSSNSPOSTDATADICT_OFFSET UNITYSDK_OFFSET(0x1C5FDCB0)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_FANS_OFFSET UNITYSDK_OFFSET(0x1C5FDB20)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_HELIOBUSSNSACCOUNTBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x1C5FDC70)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_INCOMELEVEL_OFFSET UNITYSDK_OFFSET(0x1C5FDB80)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_INCOMES_OFFSET UNITYSDK_OFFSET(0x1C5F4980)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_ISMISSIONPREPARED_OFFSET UNITYSDK_OFFSET(0x1C5FDD10)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_ISSENDINGLIKE_OFFSET UNITYSDK_OFFSET(0x1C5FDCF0)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_LASTPOSTMISSIONINPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C5FDC50)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_MAXINCOMELEVEL_OFFSET UNITYSDK_OFFSET(0x1C5FDBA0)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_PLAYERUSERID_OFFSET UNITYSDK_OFFSET(0x1C5FDCD0)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_POPPHASE_OFFSET UNITYSDK_OFFSET(0x1C5FDB60)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_POSTMAINMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0x1C5FDC90)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_POSTMISSIONINPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C5FDC30)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_POSTPHASE_OFFSET UNITYSDK_OFFSET(0x1C5FDBC0)
#define RPG_CLIENT_HELIOBUSSNSDATA_INIT_OFFSET UNITYSDK_OFFSET(0x1C5F5050)
#define RPG_CLIENT_HELIOBUSSNSDATA_ISALLMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x1C5FD3C0)
#define RPG_CLIENT_HELIOBUSSNSDATA_PREPAREALLMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1C5F7900)
#define RPG_CLIENT_HELIOBUSSNSDATA_REFRESHTAKENMISSIONINFO_OFFSET UNITYSDK_OFFSET(0x1C5F5B40)
#define RPG_CLIENT_HELIOBUSSNSDATA_RESETBEFOREFANSDATA_OFFSET UNITYSDK_OFFSET(0x1C5FD810)
#define RPG_CLIENT_HELIOBUSSNSDATA_SETPOSTISLIKE_OFFSET UNITYSDK_OFFSET(0x1C5F8C20)
#define RPG_CLIENT_HELIOBUSSNSDATA_SETPOSTISREAD_OFFSET UNITYSDK_OFFSET(0x1C5F89F0)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_ACTIONDAY_OFFSET UNITYSDK_OFFSET(0x1C5FDB50)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_ALLHELIOBUSSNSPOSTDATADICT_OFFSET UNITYSDK_OFFSET(0x1C5FDCC0)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_FANS_OFFSET UNITYSDK_OFFSET(0x1C5FDB30)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_HELIOBUSSNSACCOUNTBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x1C5FDC80)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_INCOMELEVEL_OFFSET UNITYSDK_OFFSET(0x1C5FDB90)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_ISSENDINGLIKE_OFFSET UNITYSDK_OFFSET(0x1C5FDD00)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_LASTPOSTMISSIONINPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C5FDC60)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_MAXINCOMELEVEL_OFFSET UNITYSDK_OFFSET(0x1C5FDBB0)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_PLAYERUSERID_OFFSET UNITYSDK_OFFSET(0x1C5FDCE0)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_POPPHASE_OFFSET UNITYSDK_OFFSET(0x1C5FDB70)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_POSTMAINMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0x1C5FDCA0)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_POSTMISSIONINPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C5FDC40)
#define RPG_CLIENT_HELIOBUSSNSDATA_SYNCACCOUNTINFO_OFFSET UNITYSDK_OFFSET(0x1C5F7870)
#define RPG_CLIENT_HELIOBUSSNSDATA_SYNCACTIONDAY_OFFSET UNITYSDK_OFFSET(0x1C5F7420)
#define RPG_CLIENT_HELIOBUSSNSDATA_SYNCINCOMELEVEL_OFFSET UNITYSDK_OFFSET(0x1C5F7810)
#define RPG_CLIENT_HELIOBUSSNSDATA_SYNCPOSTLIST_OFFSET UNITYSDK_OFFSET(0x1C5F7470)
#define RPG_CLIENT_HELIOBUSSNSDATA_SYNCSINGLEPOST_OFFSET UNITYSDK_OFFSET(0x1C5F8730)
#define RPG_CLIENT_HELIOBUSSNSDATA__CHECKISPOSTAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1C5FBF40)
#define RPG_CLIENT_HELIOBUSSNSDATA__GETPOSTCOUNT_OFFSET UNITYSDK_OFFSET(0x1C5FD580)
#define RPG_CLIENT_HELIOBUSSNSDATA__PREPAREALLMISSIONDATA_B__12_0_OFFSET UNITYSDK_OFFSET(0x1C5FDD50)
#define RPG_CLIENT_HELIOBUSSNSDATA__RECORDACCOUNTBEFORE_OFFSET UNITYSDK_OFFSET(0x1C5FD860)
#define RPG_CLIENT_HELIOBUSSNSDATA__REFRESHACCOUNTBEFORE_OFFSET UNITYSDK_OFFSET(0x1C5FCA50)
#define RPG_CLIENT_HELIOBUSSNSDATA__REFRESHTAKENMISSIONINFO_OFFSET UNITYSDK_OFFSET(0x1C5FC700)
#define RPG_CLIENT_HELIOBUSSNSDATA__SETMAXINCOMELEVEL_OFFSET UNITYSDK_OFFSET(0x1C5FBDF0)
#define RPG_CLIENT_HELIOBUSSNSDATA__UPDATEALLPOSTLIKE_OFFSET UNITYSDK_OFFSET(0x1C5FCCB0)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusSNSData_TypeDefinitionIndex = 67593;

	class HeliobusSNSData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _PostMainMissionIDList_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSPostData*>* _AllHeliobusSNSPostDataDict_k__BackingField; // 0x18
		::RPG::Client::MainMissionData* _LastPostMissionInProgress_k__BackingField; // 0x20
		::RPG::Client::MainMissionData* _PostMissionInProgress_k__BackingField; // 0x28
		::RPG::Client::HeliobusSNSAccountBeforeData* _RecordAccountBeforeData; // 0x30
		::RPG::Client::HeliobusSNSAccountBeforeData* _HeliobusSNSAccountBeforeData_k__BackingField; // 0x38
		::System::UInt32 _MaxIncomeLevel_k__BackingField; // 0x40
		::System::UInt32 _ActionDay_k__BackingField; // 0x44
		::System::UInt32 _PopPhase_k__BackingField; // 0x48
		::System::Boolean _IsSendingLike_k__BackingField; // 0x4C
		::System::Boolean _IsMissionPrepared; // 0x4D
		::System::Byte _padding0[0x2];
		::System::UInt32 _Fans_k__BackingField; // 0x50
		::System::UInt32 _PlayerUserID_k__BackingField; // 0x54
		::System::UInt32 _IncomeItemID; // 0x58
		::System::UInt32 _IncomeLevel_k__BackingField; // 0x5C
		// static const ::System::String* _IncomeItemString; // 0x0
		// static const ::System::String* _PlayerUserIDString; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_INIT_OFFSET))(this);
		}

		::System::Void SyncPostList(::System::Collections::Generic::IList_1<::BGOMIHEFHPA*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::BGOMIHEFHPA*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SYNCPOSTLIST_OFFSET))(this, a1, a2);
		}

		::System::Void SyncSinglePost(::BGOMIHEFHPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGOMIHEFHPA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SYNCSINGLEPOST_OFFSET))(this, a1);
		}

		::System::Void SetPostIsRead(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SETPOSTISREAD_OFFSET))(this, a1, a2);
		}

		::System::Void SetPostIsLike(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SETPOSTISLIKE_OFFSET))(this, a1, a2);
		}

		::System::Void SyncActionDay(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SYNCACTIONDAY_OFFSET))(this, a1);
		}

		::System::Void SyncAccountInfo(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SYNCACCOUNTINFO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SyncIncomeLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SYNCINCOMELEVEL_OFFSET))(this, a1);
		}

		::RPG::GameCore::HeliobusSpecialPostRow* GetSPPostDataCanSend()
		{
			return ((::RPG::GameCore::HeliobusSpecialPostRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GETSPPOSTDATACANSEND_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllPostMainMissionID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GETALLPOSTMAINMISSIONID_OFFSET))(this);
		}

		::System::Void PrepareAllMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_PREPAREALLMISSIONDATA_OFFSET))(this);
		}

		::System::Boolean IsAllMissionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_ISALLMISSIONFINISH_OFFSET))(this);
		}

		::System::Void RefreshTakenMissionInfo(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_REFRESHTAKENMISSIONINFO_OFFSET))(this, a1);
		}

		::System::UInt32 GetPostCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GETPOSTCOUNT_OFFSET))(this);
		}

		::RPG::Client::HeliobusSNSPostData* GetPostInProgress()
		{
			return ((::RPG::Client::HeliobusSNSPostData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GETPOSTINPROGRESS_OFFSET))(this);
		}

		::RPG::Client::HeliobusSNSPostData* GetAnchroPostCanTake()
		{
			return ((::RPG::Client::HeliobusSNSPostData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GETANCHROPOSTCANTAKE_OFFSET))(this);
		}

		::System::Void ResetBeforeFansData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_RESETBEFOREFANSDATA_OFFSET))(this);
		}

		::System::Void _RefreshTakenMissionInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA__REFRESHTAKENMISSIONINFO_OFFSET))(this);
		}

		::System::Void _RefreshAccountBefore(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA__REFRESHACCOUNTBEFORE_OFFSET))(this, a1);
		}

		::System::Void _RecordAccountBefore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA__RECORDACCOUNTBEFORE_OFFSET))(this);
		}

		::System::UInt32 _GetPostCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA__GETPOSTCOUNT_OFFSET))(this);
		}

		::System::Boolean _CheckIsPostAvailable(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA__CHECKISPOSTAVAILABLE_OFFSET))(this, a1);
		}

		::System::Void _UpdateAllPostLike()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA__UPDATEALLPOSTLIKE_OFFSET))(this);
		}

		::System::Void _SetMaxIncomeLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA__SETMAXINCOMELEVEL_OFFSET))(this);
		}

		::System::UInt32 get_Fans()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_FANS_OFFSET))(this);
		}

		::System::Void set_Fans(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_FANS_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActionDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_ACTIONDAY_OFFSET))(this);
		}

		::System::Void set_ActionDay(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_ACTIONDAY_OFFSET))(this, a1);
		}

		::System::UInt32 get_PopPhase()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_POPPHASE_OFFSET))(this);
		}

		::System::Void set_PopPhase(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_POPPHASE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Incomes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_INCOMES_OFFSET))(this);
		}

		::System::UInt32 get_IncomeLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_INCOMELEVEL_OFFSET))(this);
		}

		::System::Void set_IncomeLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_INCOMELEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxIncomeLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_MAXINCOMELEVEL_OFFSET))(this);
		}

		::System::Void set_MaxIncomeLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_MAXINCOMELEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::HeliobusSNSPostPhase get_PostPhase()
		{
			return ((::RPG::Client::HeliobusSNSPostPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_POSTPHASE_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* get_PostMissionInProgress()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_POSTMISSIONINPROGRESS_OFFSET))(this);
		}

		::System::Void set_PostMissionInProgress(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_POSTMISSIONINPROGRESS_OFFSET))(this, a1);
		}

		::RPG::Client::MainMissionData* get_LastPostMissionInProgress()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_LASTPOSTMISSIONINPROGRESS_OFFSET))(this);
		}

		::System::Void set_LastPostMissionInProgress(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_LASTPOSTMISSIONINPROGRESS_OFFSET))(this, a1);
		}

		::RPG::Client::HeliobusSNSAccountBeforeData* get_HeliobusSNSAccountBeforeData()
		{
			return ((::RPG::Client::HeliobusSNSAccountBeforeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_HELIOBUSSNSACCOUNTBEFOREDATA_OFFSET))(this);
		}

		::System::Void set_HeliobusSNSAccountBeforeData(::RPG::Client::HeliobusSNSAccountBeforeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HeliobusSNSAccountBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_HELIOBUSSNSACCOUNTBEFOREDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_PostMainMissionIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_POSTMAINMISSIONIDLIST_OFFSET))(this);
		}

		::System::Void set_PostMainMissionIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_POSTMAINMISSIONIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSPostData*>* get_AllHeliobusSNSPostDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSPostData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_ALLHELIOBUSSNSPOSTDATADICT_OFFSET))(this);
		}

		::System::Void set_AllHeliobusSNSPostDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSPostData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSPostData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_ALLHELIOBUSSNSPOSTDATADICT_OFFSET))(this, a1);
		}

		::System::UInt32 get_PlayerUserID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_PLAYERUSERID_OFFSET))(this);
		}

		::System::Void set_PlayerUserID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_PLAYERUSERID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSendingLike()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_ISSENDINGLIKE_OFFSET))(this);
		}

		::System::Void set_IsSendingLike(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_ISSENDINGLIKE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMissionPrepared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_ISMISSIONPREPARED_OFFSET))(this);
		}

		::System::Void _PrepareAllMissionData_b__12_0(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA__PREPAREALLMISSIONDATA_B__12_0_OFFSET))(this, a1);
		}

	};
}
