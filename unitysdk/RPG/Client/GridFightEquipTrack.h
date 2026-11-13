#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IHMJHLGKLHP.h"
#include "unitysdk/System/Object.h"
class JJOBHGFOGHP;
namespace RPG::Client { class GridFightEquipTrack; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTraitEffectBase; }
namespace RPG::Client { class IGridFightEquipTrackTarget; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_ADDFINISHEDEQUIPID_OFFSET UNITYSDK_OFFSET(0x1D183630)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_CHANGEBOTHSELECTCONFIG_OFFSET UNITYSDK_OFFSET(0x1D183890)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1D182A50)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_CONTAINSEQUIPWITHVARIANT_OFFSET UNITYSDK_OFFSET(0x1D17D640)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_CREATEFROMSERVER_OFFSET UNITYSDK_OFFSET(0x1D181D20)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D1826C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1821A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D184D20)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GETFINISHEDEQUIPCHECKSTATE_OFFSET UNITYSDK_OFFSET(0x1D182D60)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GETFINISHEDEQUIPIDS_OFFSET UNITYSDK_OFFSET(0x1D182D20)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_BASEMEMBERID_OFFSET UNITYSDK_OFFSET(0x1D17D7B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_DUMMYMEMBER_OFFSET UNITYSDK_OFFSET(0x1D184600)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_EQUIPIDS_OFFSET UNITYSDK_OFFSET(0x1D1846C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_FORCETRACKWHENFULL_OFFSET UNITYSDK_OFFSET(0x1D1845A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_HASBOTHEQUIPCONFIGSELECT_OFFSET UNITYSDK_OFFSET(0x1D183B70)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_ISALLFINISHED_OFFSET UNITYSDK_OFFSET(0x1D184720)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_ISSELECTBACKEQUIPCONFIG_OFFSET UNITYSDK_OFFSET(0x1D1847A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_ISSELECTFRONTEQUIPCONFIG_OFFSET UNITYSDK_OFFSET(0x1D183C30)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_ISTRACKDUMMY_OFFSET UNITYSDK_OFFSET(0x1D1846A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_ISTRACKFRONT_OFFSET UNITYSDK_OFFSET(0x1D184780)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_MEMBERID_OFFSET UNITYSDK_OFFSET(0x1D1845E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_MEMBER_OFFSET UNITYSDK_OFFSET(0x1D184660)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_PRIORITYINDEX_OFFSET UNITYSDK_OFFSET(0x1D184420)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1D184400)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_REQUIREDCOSTEQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0x1D184700)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1D1843E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_TARGETMEMBER_OFFSET UNITYSDK_OFFSET(0x1D183CB0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1D1845C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_TRAITMEMBER_OFFSET UNITYSDK_OFFSET(0x1D184680)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_WAITTRACKEQUIPID2COUNT_OFFSET UNITYSDK_OFFSET(0x1D1846E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_ISTRACKEDBYEQUIPID_OFFSET UNITYSDK_OFFSET(0x1D183FC0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_REBUILDWAITTRACKEQUIPID2COUNT_OFFSET UNITYSDK_OFFSET(0x1D1849F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SETEQUIPIDSITEM_OFFSET UNITYSDK_OFFSET(0x1D184960)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SETISTRACKDUMMY_OFFSET UNITYSDK_OFFSET(0x1D1848C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SETISTRACKFRONT_OFFSET UNITYSDK_OFFSET(0x1D184910)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SETMEMBER_OFFSET UNITYSDK_OFFSET(0x1D184820)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SETPRIORITY_OFFSET UNITYSDK_OFFSET(0x1D183F70)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SETTRAITMEMBER_OFFSET UNITYSDK_OFFSET(0x1D184870)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_EQUIPIDS_OFFSET UNITYSDK_OFFSET(0x1D1846D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_FORCETRACKWHENFULL_OFFSET UNITYSDK_OFFSET(0x1D1845B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_ISTRACKDUMMY_OFFSET UNITYSDK_OFFSET(0x1D1846B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_ISTRACKFRONT_OFFSET UNITYSDK_OFFSET(0x1D184790)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_MEMBERID_OFFSET UNITYSDK_OFFSET(0x1D1845F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_MEMBER_OFFSET UNITYSDK_OFFSET(0x1D184670)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1D184410)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_REQUIREDCOSTEQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0x1D184710)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1D1843F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x1D1845D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_TRAITMEMBER_OFFSET UNITYSDK_OFFSET(0x1D184690)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_WAITTRACKEQUIPID2COUNT_OFFSET UNITYSDK_OFFSET(0x1D1846F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SWAPPRIORITY_OFFSET UNITYSDK_OFFSET(0x1D182AC0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SYNCFINISHEDEQUIPIDS_OFFSET UNITYSDK_OFFSET(0x1D183570)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_TRYRECORDFINISHEQUIPID_OFFSET UNITYSDK_OFFSET(0x1D183410)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_UPDATETARGET_OFFSET UNITYSDK_OFFSET(0x1D182560)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_UPDATETRAITEFFECTREQUIREDEQUIPS_OFFSET UNITYSDK_OFFSET(0x1D1840F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK_UPDATEWAITTRACKEQUIPIDS_OFFSET UNITYSDK_OFFSET(0x1D184270)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK__GETBASEEQUIPITEMID_OFFSET UNITYSDK_OFFSET(0x1D183330)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK__GETFINISHEDEQUIPCHECKSTATES_OFFSET UNITYSDK_OFFSET(0x1D182E00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrack_TypeDefinitionIndex = 67086;

	class GridFightEquipTrack : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTraitEffectBase* _TraitMember_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _WaitTrackEquipID2Count_k__BackingField; // 0x18
		::RPG::Client::GridFightRole* _Member_k__BackingField; // 0x20
		::RPG::Client::IGridFightEquipTrackTarget* _Target_k__BackingField; // 0x28
		::RPG::Client::GridFightRole* _DummyMember; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _RequiredCostEquipCount_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _EquipIDs_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedEquipIDs; // 0x48
		::System::Boolean _ForceTrackWhenFull_k__BackingField; // 0x50
		::System::Boolean _IsTrackDummy_k__BackingField; // 0x51
		::System::Boolean _IsTrackFront_k__BackingField; // 0x52
		::System::Byte _padding0[0x1];
		::IHMJHLGKLHP _Source_k__BackingField; // 0x54
		::System::UInt32 _Priority_k__BackingField; // 0x58
		::System::UInt32 _MemberID_k__BackingField; // 0x5C
		::System::Void _ctor(::JJOBHGFOGHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJOBHGFOGHP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::UInt32 a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::GridFightEquipTrack* CreateFromServer(::JJOBHGFOGHP* a1)
		{
			return ((::RPG::Client::GridFightEquipTrack*(*)(::JJOBHGFOGHP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_CREATEFROMSERVER_OFFSET))(a1);
		}

		::System::Int32 CompareTo(::RPG::Client::GridFightEquipTrack* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_COMPARETO_OFFSET))(this, a1);
		}

		::System::Void SwapPriority(::RPG::Client::GridFightEquipTrack* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SWAPPRIORITY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetFinishedEquipIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GETFINISHEDEQUIPIDS_OFFSET))(this);
		}

		::System::Boolean GetFinishedEquipCheckState(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GETFINISHEDEQUIPCHECKSTATE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Boolean>* _GetFinishedEquipCheckStates()
		{
			return ((::System::Collections::Generic::List_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK__GETFINISHEDEQUIPCHECKSTATES_OFFSET))(this);
		}

		::System::Void TryRecordFinishEquipID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_TRYRECORDFINISHEQUIPID_OFFSET))(this, a1);
		}

		::System::Void AddFinishedEquipID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_ADDFINISHEDEQUIPID_OFFSET))(this, a1);
		}

		::System::Void SyncFinishedEquipIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SYNCFINISHEDEQUIPIDS_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* ChangeBothSelectConfig()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_CHANGEBOTHSELECTCONFIG_OFFSET))(this);
		}

		::System::Void SetPriority(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SETPRIORITY_OFFSET))(this, a1);
		}

		::System::Boolean ContainsEquipWithVariant(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_CONTAINSEQUIPWITHVARIANT_OFFSET))(this, a1);
		}

		::System::Boolean IsTrackedByEquipID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_ISTRACKEDBYEQUIPID_OFFSET))(this, a1);
		}

		::System::Void UpdateTraitEffectRequiredEquips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_UPDATETRAITEFFECTREQUIREDEQUIPS_OFFSET))(this);
		}

		::System::Void UpdateTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_UPDATETARGET_OFFSET))(this);
		}

		::System::Void UpdateWaitTrackEquipIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_UPDATEWAITTRACKEQUIPIDS_OFFSET))(this);
		}

		::IHMJHLGKLHP get_Source()
		{
			return ((::IHMJHLGKLHP(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_SOURCE_OFFSET))(this);
		}

		::System::Void set_Source(::IHMJHLGKLHP a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHMJHLGKLHP))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_SOURCE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Priority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_PRIORITY_OFFSET))(this, a1);
		}

		::System::Int32 get_PriorityIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_PRIORITYINDEX_OFFSET))(this);
		}

		::System::Boolean get_ForceTrackWhenFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_FORCETRACKWHENFULL_OFFSET))(this);
		}

		::System::Void set_ForceTrackWhenFull(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_FORCETRACKWHENFULL_OFFSET))(this, a1);
		}

		::RPG::Client::IGridFightEquipTrackTarget* get_Target()
		{
			return ((::RPG::Client::IGridFightEquipTrackTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::RPG::Client::IGridFightEquipTrackTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGridFightEquipTrackTarget*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_TARGET_OFFSET))(this, a1);
		}

		::System::UInt32 get_MemberID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_MEMBERID_OFFSET))(this);
		}

		::System::Void set_MemberID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_MEMBERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BaseMemberID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_BASEMEMBERID_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* get_TargetMember()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_TARGETMEMBER_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* get_Member()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_MEMBER_OFFSET))(this);
		}

		::System::Void set_Member(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_MEMBER_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitEffectBase* get_TraitMember()
		{
			return ((::RPG::Client::GridFightTraitEffectBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_TRAITMEMBER_OFFSET))(this);
		}

		::System::Void set_TraitMember(::RPG::Client::GridFightTraitEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_TRAITMEMBER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTrackDummy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_ISTRACKDUMMY_OFFSET))(this);
		}

		::System::Void set_IsTrackDummy(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_ISTRACKDUMMY_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* get_DummyMember()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_DUMMYMEMBER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EquipIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_EQUIPIDS_OFFSET))(this);
		}

		::System::Void set_EquipIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_EQUIPIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* get_WaitTrackEquipID2Count()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_WAITTRACKEQUIPID2COUNT_OFFSET))(this);
		}

		::System::Void set_WaitTrackEquipID2Count(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_WAITTRACKEQUIPID2COUNT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_RequiredCostEquipCount()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_REQUIREDCOSTEQUIPCOUNT_OFFSET))(this);
		}

		::System::Void set_RequiredCostEquipCount(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_REQUIREDCOSTEQUIPCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAllFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_ISALLFINISHED_OFFSET))(this);
		}

		::System::Boolean get_IsTrackFront()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_ISTRACKFRONT_OFFSET))(this);
		}

		::System::Void set_IsTrackFront(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SET_ISTRACKFRONT_OFFSET))(this, a1);
		}

		::System::Boolean get_HasBothEquipConfigSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_HASBOTHEQUIPCONFIGSELECT_OFFSET))(this);
		}

		::System::Boolean get_IsSelectFrontEquipConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_ISSELECTFRONTEQUIPCONFIG_OFFSET))(this);
		}

		::System::Boolean get_IsSelectBackEquipConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_GET_ISSELECTBACKEQUIPCONFIG_OFFSET))(this);
		}

		::System::Void SetMember(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SETMEMBER_OFFSET))(this, a1);
		}

		::System::Void SetTraitMember(::RPG::Client::GridFightTraitEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SETTRAITMEMBER_OFFSET))(this, a1);
		}

		::System::Void SetIsTrackDummy(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SETISTRACKDUMMY_OFFSET))(this, a1);
		}

		::System::Void SetIsTrackFront(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SETISTRACKFRONT_OFFSET))(this, a1);
		}

		::System::Void SetEquipIDsItem(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_SETEQUIPIDSITEM_OFFSET))(this, a1, a2);
		}

		::System::Void RebuildWaitTrackEquipID2Count()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_REBUILDWAITTRACKEQUIPID2COUNT_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::GridFightEquipTrack* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK_EQUALS_OFFSET))(this, a1);
		}

		::System::UInt32 _GetBaseEquipItemID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK__GETBASEEQUIPITEMID_OFFSET))(this, a1);
		}

	};
}
