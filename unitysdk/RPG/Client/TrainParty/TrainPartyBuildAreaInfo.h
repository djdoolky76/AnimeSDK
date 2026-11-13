#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGKPFHIANDF;
class FNMEHOIANGN;
class IDBCDHIOKEG;
class NDLMAMEGFDM;
class OIIPJFDNPAH;
class PPLKBFMCGLD;
namespace RPG::Client::TrainParty { class TrainPartyBuildAreaInfo; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace RPG::Client::TrainParty { class TrainPartyBuildGoalData; }
namespace RPG::Client::TrainParty { class TrainPartyBuildSlotInfo; }
namespace RPG::GameCore { class TrainPartyAreaConfigRow; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ADDFINISHEDSTEP_OFFSET UNITYSDK_OFFSET(0x1C61BAB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_CLEARBLUEPRINTREDDOT_OFFSET UNITYSDK_OFFSET(0x1C61CBE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_CLEARNEWSTATUS_OFFSET UNITYSDK_OFFSET(0x1C61CD30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_CLEARSTEPREDDOT_OFFSET UNITYSDK_OFFSET(0x1C61C700)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C618530)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C618490)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_FETCHSLOTINFOS_OFFSET UNITYSDK_OFFSET(0x1C61CFB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETBLUEPRINTIDLIST_OFFSET UNITYSDK_OFFSET(0x1C61D590)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETCURGOALDATA_OFFSET UNITYSDK_OFFSET(0x1C61CF70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETGOALDATABYID_OFFSET UNITYSDK_OFFSET(0x1C61CF10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETORIGINALSLOTINFOLIST_OFFSET UNITYSDK_OFFSET(0x1C61D310)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETSLOTINFOBYID_OFFSET UNITYSDK_OFFSET(0x1C61B7D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETSLOTINFOLIST_OFFSET UNITYSDK_OFFSET(0x1C61D280)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x1C61D9B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1C61C640)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x1C61DA90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ISSHOWINACTIVITY_OFFSET UNITYSDK_OFFSET(0x1C61D9D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1C61D990)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1C61DA70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1C61C6A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ISNEWCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1C61CD70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ISNEWSTEPBLUEPRINT_OFFSET UNITYSDK_OFFSET(0x1C61D610)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ISSTEPFINISHED_OFFSET UNITYSDK_OFFSET(0x1C61D720)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ONGETNEWBLUEPRINTS_OFFSET UNITYSDK_OFFSET(0x1C619B10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ONNEWGOALUNLOCK_OFFSET UNITYSDK_OFFSET(0x1C61BA00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ONUNLOCKSTATICID_OFFSET UNITYSDK_OFFSET(0x1C61C3C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_RESET_OFFSET UNITYSDK_OFFSET(0x1C61BFF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SETISNEW_OFFSET UNITYSDK_OFFSET(0x1C61C370)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SETISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1C61BFA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SET_AREAID_OFFSET UNITYSDK_OFFSET(0x1C61D9C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0x1C61DAA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1C61D9A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1C61DA80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SYNC_1_OFFSET UNITYSDK_OFFSET(0x1C61A160)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x1C6185D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SYSTEM_ICOMPARABLE_RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__COMPARETO_OFFSET UNITYSDK_OFFSET(0x1C61D7F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_TRIGGERCOMPLETEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1C61CDC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C61C570)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_UPDATESLOTINFO_OFFSET UNITYSDK_OFFSET(0x1C61B340)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__ADDSLOTINFOBYSTATICID_OFFSET UNITYSDK_OFFSET(0x1C61C410)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__CREATESLOTINFO_OFFSET UNITYSDK_OFFSET(0x1C61B860)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__SYNCBUILDGOAL_OFFSET UNITYSDK_OFFSET(0x1C618920)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__SYNCFINISHEDSTEP_OFFSET UNITYSDK_OFFSET(0x1C619600)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__SYNCSLOTINFOLIST_OFFSET UNITYSDK_OFFSET(0x1C618E80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__SYNCSTATICIDLIST_OFFSET UNITYSDK_OFFSET(0x1C6189E0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildAreaInfo_TypeDefinitionIndex = 76454;

	class TrainPartyBuildAreaInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*>* _SlotInfoPool; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*>* _SlotInfoMap; // 0x18
		::System::Collections::Generic::IList_1<::System::UInt32>* _BlueprintIDList; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _FinishedStepSet; // 0x28
		::RPG::Client::TrainParty::TrainPartyBuildGoalData* _CurGoalData; // 0x30
		::System::UInt32 _Progress_k__BackingField; // 0x38
		::System::Boolean _IsNewCompleted; // 0x3C
		::System::Boolean _IsNew_k__BackingField; // 0x3D
		::System::Boolean _IsUnlock_k__BackingField; // 0x3E
		::System::Byte _padding0[0x1];
		::System::UInt32 _AreaID_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void Sync(::NDLMAMEGFDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDLMAMEGFDM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void Sync_1(::OIIPJFDNPAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIIPJFDNPAH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SYNC_1_OFFSET))(this, a1);
		}

		::System::Void UpdateSlotInfo(::System::UInt32 a1, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_UPDATESLOTINFO_OFFSET))(this, a1, a2);
		}

		::System::Void OnNewGoalUnlock(::PPLKBFMCGLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPLKBFMCGLD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ONNEWGOALUNLOCK_OFFSET))(this, a1);
		}

		::System::Void AddFinishedStep(::System::Collections::Generic::IList_1<::IDBCDHIOKEG*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::IDBCDHIOKEG*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ADDFINISHEDSTEP_OFFSET))(this, a1);
		}

		::System::Void SetIsUnlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SETISUNLOCK_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_RESET_OFFSET))(this);
		}

		::System::Void SetIsNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SETISNEW_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* GetSlotInfoByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETSLOTINFOBYID_OFFSET))(this, a1);
		}

		::System::Void OnUnlockStaticID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ONUNLOCKSTATICID_OFFSET))(this, a1);
		}

		::System::Void UpdateProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_UPDATEPROGRESS_OFFSET))(this, a1);
		}

		::System::Void OnGetNewBlueprints(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ONGETNEWBLUEPRINTS_OFFSET))(this, a1);
		}

		::System::Void ClearStepRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_CLEARSTEPREDDOT_OFFSET))(this);
		}

		::System::Void ClearBlueprintRedDot(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_CLEARBLUEPRINTREDDOT_OFFSET))(this, a1);
		}

		::System::Void ClearNewStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_CLEARNEWSTATUS_OFFSET))(this);
		}

		::System::Boolean IsNewCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ISNEWCOMPLETED_OFFSET))(this);
		}

		::System::Void TriggerCompletePerformance(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_TRIGGERCOMPLETEPERFORMANCE_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildGoalData* GetGoalDataByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildGoalData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETGOALDATABYID_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildGoalData* GetCurGoalData()
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildGoalData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETCURGOALDATA_OFFSET))(this);
		}

		::System::Void FetchSlotInfos(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_FETCHSLOTINFOS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*>* GetSlotInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETSLOTINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*>* GetOriginalSlotInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETORIGINALSLOTINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::UInt32>* GetBlueprintIDList()
		{
			return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETBLUEPRINTIDLIST_OFFSET))(this);
		}

		::System::Boolean IsNewStepBlueprint(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ISNEWSTEPBLUEPRINT_OFFSET))(this, a1);
		}

		::System::Boolean IsStepFinished(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ISSTEPFINISHED_OFFSET))(this, a1);
		}

		::System::Void _SyncBuildGoal(::CGKPFHIANDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGKPFHIANDF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__SYNCBUILDGOAL_OFFSET))(this, a1);
		}

		::System::Void _SyncStaticIDList(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__SYNCSTATICIDLIST_OFFSET))(this, a1);
		}

		::System::Void _SyncFinishedStep(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__SYNCFINISHEDSTEP_OFFSET))(this, a1);
		}

		::System::Void _AddSlotInfoByStaticID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__ADDSLOTINFOBYSTATICID_OFFSET))(this, a1);
		}

		::System::Void _SyncSlotInfoList(::System::Collections::Generic::IList_1<::FNMEHOIANGN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::FNMEHOIANGN*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__SYNCSLOTINFOLIST_OFFSET))(this, a1);
		}

		::System::Int32 System_IComparable_RPG_Client_TrainParty_TrainPartyBuildAreaInfo__CompareTo(::RPG::Client::TrainParty::TrainPartyBuildAreaInfo* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SYSTEM_ICOMPARABLE_RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__COMPARETO_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* _CreateSlotInfo(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__CREATESLOTINFO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Void set_IsUnlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SET_ISUNLOCK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ISCOMPLETE_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SET_AREAID_OFFSET))(this, a1);
		}

		::RPG::GameCore::TrainPartyAreaConfigRow* get_Row()
		{
			return ((::RPG::GameCore::TrainPartyAreaConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ROW_OFFSET))(this);
		}

		::System::Boolean get_IsShowInActivity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ISSHOWINACTIVITY_OFFSET))(this);
		}

		::System::UInt32 get_Progress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SET_PROGRESS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SET_ISNEW_OFFSET))(this, a1);
		}

	};
}
