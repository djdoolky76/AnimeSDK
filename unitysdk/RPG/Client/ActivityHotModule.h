#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/Nullable_1.h"
class EFGIHHJGCFA;
class NDKGIMLKJHA;
class NEGCAHDLGMI;
namespace RPG::Client { class ActivityHotCoreRewardData; }
namespace RPG::Client { class ActivityHotExtraCoreRewardData; }
namespace RPG::Client { class IActivityHotData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHOTMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D126200)
#define RPG_CLIENT_ACTIVITYHOTMODULE_GETACTIVITYHOTDATAS_OFFSET UNITYSDK_OFFSET(0x1D126550)
#define RPG_CLIENT_ACTIVITYHOTMODULE_GETREWARDPROGRESS_OFFSET UNITYSDK_OFFSET(0x1D12A390)
#define RPG_CLIENT_ACTIVITYHOTMODULE_GET_INTROID_OFFSET UNITYSDK_OFFSET(0x1D12C5B0)
#define RPG_CLIENT_ACTIVITYHOTMODULE_HASNEWVERSIONNOTSEEN_OFFSET UNITYSDK_OFFSET(0x1D12AD60)
#define RPG_CLIENT_ACTIVITYHOTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1D1262D0)
#define RPG_CLIENT_ACTIVITYHOTMODULE_ISFUNCTIONUNLOCK_OFFSET UNITYSDK_OFFSET(0x1D1264A0)
#define RPG_CLIENT_ACTIVITYHOTMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1D1263B0)
#define RPG_CLIENT_ACTIVITYHOTMODULE_PROCESSCOREREWARDDATAS_OFFSET UNITYSDK_OFFSET(0x1D126FE0)
#define RPG_CLIENT_ACTIVITYHOTMODULE_PROCESSTITLEREWARDDATAS_OFFSET UNITYSDK_OFFSET(0x1D128EF0)
#define RPG_CLIENT_ACTIVITYHOTMODULE_REBUILDACTIVITYHOTDATAS_OFFSET UNITYSDK_OFFSET(0x1D126770)
#define RPG_CLIENT_ACTIVITYHOTMODULE_SETNEWVERSIONSEEN_OFFSET UNITYSDK_OFFSET(0x1D12AF30)
#define RPG_CLIENT_ACTIVITYHOTMODULE_SHOWACTIVITYHOTNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x1D12AD00)
#define RPG_CLIENT_ACTIVITYHOTMODULE_TRYGETHCOINCOUNT_OFFSET UNITYSDK_OFFSET(0x1D12B020)
#define RPG_CLIENT_ACTIVITYHOTMODULE__ACTIVITYHOTDATALISTSORTCOMPARER_OFFSET UNITYSDK_OFFSET(0x1D12B380)
#define RPG_CLIENT_ACTIVITYHOTMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1D12C380)
#define RPG_CLIENT_ACTIVITYHOTMODULE__COLLECTAVATARCOREREWARDS_OFFSET UNITYSDK_OFFSET(0x1D127170)
#define RPG_CLIENT_ACTIVITYHOTMODULE__COLLECTCOREREWARDBYITEMID_OFFSET UNITYSDK_OFFSET(0x1D129080)
#define RPG_CLIENT_ACTIVITYHOTMODULE__COLLECTEXTRACOREREWARDS_OFFSET UNITYSDK_OFFSET(0x1D128A40)
#define RPG_CLIENT_ACTIVITYHOTMODULE__COLLECTOTHERCOREREWARDSBYITEMID_OFFSET UNITYSDK_OFFSET(0x1D12B0D0)
#define RPG_CLIENT_ACTIVITYHOTMODULE__COLLECTOTHERCOREREWARDS_OFFSET UNITYSDK_OFFSET(0x1D128130)
#define RPG_CLIENT_ACTIVITYHOTMODULE__GETCURRENTVERSIONIDFORACTIVITYHOT_OFFSET UNITYSDK_OFFSET(0x1D12AEA0)
#define RPG_CLIENT_ACTIVITYHOTMODULE__INIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1D12C6A0)
#define RPG_CLIENT_ACTIVITYHOTMODULE__MERGEHOTVERSIONDATAS_OFFSET UNITYSDK_OFFSET(0x1D126A20)
#define RPG_CLIENT_ACTIVITYHOTMODULE__ONGETACTIVITYHOTDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1D12C460)
#define RPG_CLIENT_ACTIVITYHOTMODULE__SYNCACTIVITYHOTDATAS_OFFSET UNITYSDK_OFFSET(0x1D12B5C0)
#define RPG_CLIENT_ACTIVITYHOTMODULE__SYNCACTIVITYHOTVERSIONDATAS_OFFSET UNITYSDK_OFFSET(0x1D12BD70)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityHotModule_TypeDefinitionIndex = 62923;

	class ActivityHotModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHotExtraCoreRewardData*>* _ExtraCoreRewardDataCacheList; // 0x10
		::RPG::Client::Promises::Promise_1<::NDKGIMLKJHA*>* _WaitServerSyncPromise; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Nullable_1<::System::Int32>>* _ActivityIDToTotalHCoinCounts; // 0x20
		// static const ::System::Object DefaultHCoins; // 0x0
		// static const ::System::Object _StellarJadeID; // 0x0
		// static const ::System::Object _GachaTicketID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE_INIT_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Boolean IsFunctionUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE_ISFUNCTIONUNLOCK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>*>* GetActivityHotDatas()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE_GETACTIVITYHOTDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>* RebuildActivityHotDatas(::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE_REBUILDACTIVITYHOTDATAS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>* ProcessCoreRewardDatas(::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE_PROCESSCOREREWARDDATAS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>* ProcessTitleRewardDatas(::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE_PROCESSTITLEREWARDDATAS_OFFSET))(this, a1);
		}

		::System::Single GetRewardProgress(::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE_GETREWARDPROGRESS_OFFSET))(this, a1);
		}

		::System::Boolean ShowActivityHotNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE_SHOWACTIVITYHOTNEWREDDOT_OFFSET))(this);
		}

		::System::Boolean HasNewVersionNotSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE_HASNEWVERSIONNOTSEEN_OFFSET))(this);
		}

		::System::Void SetNewVersionSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE_SETNEWVERSIONSEEN_OFFSET))(this);
		}

		::System::Int32 TryGetHCoinCount(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE_TRYGETHCOINCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 _GetCurrentVersionIDForActivityHot()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__GETCURRENTVERSIONIDFORACTIVITYHOT_OFFSET))(this);
		}

		::System::Void _CollectCoreRewardByItemId(::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>*, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__COLLECTCOREREWARDBYITEMID_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _CollectAvatarCoreRewards(::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>*, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__COLLECTAVATARCOREREWARDS_OFFSET))(this, a1, a2);
		}

		::System::Void _CollectOtherCoreRewards(::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>*, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__COLLECTOTHERCOREREWARDS_OFFSET))(this, a1, a2);
		}

		::System::Void _CollectOtherCoreRewardsByItemID(::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>* a1, ::System::UInt32 a2, ::RPG::Client::IActivityHotData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>*, ::System::UInt32, ::RPG::Client::IActivityHotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__COLLECTOTHERCOREREWARDSBYITEMID_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _CollectExtraCoreRewards(::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__COLLECTEXTRACOREREWARDS_OFFSET))(this, a1);
		}

		::System::Int32 _ActivityHotDataListSortComparer(::RPG::Client::IActivityHotData* a1, ::RPG::Client::IActivityHotData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IActivityHotData*, ::RPG::Client::IActivityHotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__ACTIVITYHOTDATALISTSORTCOMPARER_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncActivityHotDatas(::System::Collections::Generic::IEnumerable_1<::EFGIHHJGCFA*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::EFGIHHJGCFA*>*, ::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__SYNCACTIVITYHOTDATAS_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncActivityHotVersionDatas(::System::Collections::Generic::IEnumerable_1<::NEGCAHDLGMI*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::NEGCAHDLGMI*>*, ::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__SYNCACTIVITYHOTVERSIONDATAS_OFFSET))(this, a1, a2);
		}

		::System::Void _MergeHotVersionDatas(::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__MERGEHOTVERSIONDATAS_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetActivityHotDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__ONGETACTIVITYHOTDATASCRSP_OFFSET))(this, a1, a2);
		}

		static ::System::UInt32 get_IntroID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE_GET_INTROID_OFFSET))();
		}

		::System::Void _Init_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__INIT_B__1_0_OFFSET))(this);
		}

	};
}
