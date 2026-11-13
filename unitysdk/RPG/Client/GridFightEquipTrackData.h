#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IHMJHLGKLHP.h"
#include "unitysdk/RPG/Client/GridFightEquipTrackCancelReason.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"
#include "unitysdk/System/Nullable_1.h"
class FBFODNFGMKG;
class GCMCEDELOJL;
class HLHHLIGPNOM;
class JJOBHGFOGHP;
class KLLHNFLCDGF;
namespace RPG::Client { class GridFightConsumableInfo_GridFightConsumableItemUseParam; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightEquipTrack; }
namespace RPG::Client { class GridFightEquipTrackData; }
namespace RPG::Client { class GridFightEquipTrackQuickCraftParam; }
namespace RPG::Client { class GridFightEquipTrackQuickDressParam; }
namespace RPG::Client { class GridFightEquipTrackTargetSelector; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTraitElationLaughPointEffect; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace Sofa::Core { template <typename T1, typename T2> class ObservableDictionary_2; }
namespace Sofa::Core { template <typename T> class ObservableList_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ADDEQUIPTRACKLATESTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1D18AD90)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ADDEQUIPTRACK_1_OFFSET UNITYSDK_OFFSET(0x1D15E2B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ADDEQUIPTRACK_OFFSET UNITYSDK_OFFSET(0x1D189150)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_CHANGETRACKEQUIPIDS_OFFSET UNITYSDK_OFFSET(0x1D183D40)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_CREATESERVERTRACKUPDATEINFO_OFFSET UNITYSDK_OFFSET(0x1D1836C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D185010)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D185490)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_FORCESETEQUIPTRACK_OFFSET UNITYSDK_OFFSET(0x1D18A9F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GETEQUIPTRACKBYROLEID_OFFSET UNITYSDK_OFFSET(0x1D18D390)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GETEQUIPTRACKSOURCE_1_OFFSET UNITYSDK_OFFSET(0x1D18D710)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GETEQUIPTRACKSOURCE_OFFSET UNITYSDK_OFFSET(0x1D189320)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GETEQUIPTRACK_OFFSET UNITYSDK_OFFSET(0x1D15C390)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D184FF0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GET_ISEQUIPTRACKFULL_OFFSET UNITYSDK_OFFSET(0x1D18E6D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GET_ISQUICKOPPARAMSCHANGED_OFFSET UNITYSDK_OFFSET(0x1D18F580)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_HASEQUIPTRACK_OFFSET UNITYSDK_OFFSET(0x1D18D4B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_HIDEQUICKPARAMS_1_OFFSET UNITYSDK_OFFSET(0x1D18DA20)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_HIDEQUICKPARAMS_OFFSET UNITYSDK_OFFSET(0x1D18D960)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ISTRACKSAME_OFFSET UNITYSDK_OFFSET(0x1D18AB40)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ONBEFOREUSECONSUMABLEITEM_OFFSET UNITYSDK_OFFSET(0x1D18DAE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ONUPDATETRACKRSP_OFFSET UNITYSDK_OFFSET(0x1D18E2A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_REMOVEEQUIPTRACK_1_OFFSET UNITYSDK_OFFSET(0x1D18C0B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_REMOVEEQUIPTRACK_OFFSET UNITYSDK_OFFSET(0x1D15E4A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_REMOVEGUIDETRACK_OFFSET UNITYSDK_OFFSET(0x1D18CF80)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_REPLACEEQUIPTRACK_OFFSET UNITYSDK_OFFSET(0x1D18C3A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x1D1855E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D185000)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_SET_ISQUICKOPPARAMSCHANGED_OFFSET UNITYSDK_OFFSET(0x1D18F590)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_SYNCGAMEREFCHANGE_OFFSET UNITYSDK_OFFSET(0x1D18CD40)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_UPDATEEQUIPTRACKFROMSERVER_OFFSET UNITYSDK_OFFSET(0x1D18C740)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D186480)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__ADDTRACKTOLASTANDSEND_OFFSET UNITYSDK_OFFSET(0x1D18AF50)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__CANADDQUICKDRESSPARAM_OFFSET UNITYSDK_OFFSET(0x1D18F150)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__CANQUICKDRESSLAUGHPOINTEQUIP_OFFSET UNITYSDK_OFFSET(0x1D18F370)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__CHECKUNHIDEEQUIP_OFFSET UNITYSDK_OFFSET(0x1D187C30)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__GETALREADYEQUIPPEDEQUIPIDS_OFFSET UNITYSDK_OFFSET(0x1D18BBD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__GETMAXPRIORITY_OFFSET UNITYSDK_OFFSET(0x1D18E360)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__GETMINPRIORITY_OFFSET UNITYSDK_OFFSET(0x1D18E510)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__RESETALLTRACKSPRIORITYANDSEND_OFFSET UNITYSDK_OFFSET(0x1D1893B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__TRYASSIGNNONEOWNEREQUIP_OFFSET UNITYSDK_OFFSET(0x1D18ED90)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATECANCELTRACK_OFFSET UNITYSDK_OFFSET(0x1D186900)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEHIDEEQUIPCOUNTSNAPSHOTS_OFFSET UNITYSDK_OFFSET(0x1D187DF0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEQUICKDRESSANDCRAFTPARAMS_1_OFFSET UNITYSDK_OFFSET(0x1D18E780)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEQUICKDRESSANDCRAFTPARAMS_OFFSET UNITYSDK_OFFSET(0x1D188500)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEREQUIREDEQUIPS_OFFSET UNITYSDK_OFFSET(0x1D187740)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATETRACKTARGET_OFFSET UNITYSDK_OFFSET(0x1D187340)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEWAITTRACKEQUIP_OFFSET UNITYSDK_OFFSET(0x1D186500)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___CHECKUNHIDEEQUIP_B__40_0_OFFSET UNITYSDK_OFFSET(0x1D18F5A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___CHECKUNHIDEEQUIP_B__40_1_OFFSET UNITYSDK_OFFSET(0x1D18F740)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___CHECKUNHIDEEQUIP_B__40_2_OFFSET UNITYSDK_OFFSET(0x1D18F830)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___CHECKUNHIDEEQUIP_B__40_3_OFFSET UNITYSDK_OFFSET(0x1D18F9D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___CHECKUNHIDEEQUIP_B__40_6_OFFSET UNITYSDK_OFFSET(0x1D18FAB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackData_TypeDefinitionIndex = 67093;

	class GridFightEquipTrackData : public ::Sofa::Core::ObservableObject
	{
	public:
		::Sofa::Core::ObservableList_1<::RPG::Client::GridFightEquipTrackQuickCraftParam*>* QuickCraftParams; // 0x18
		::Sofa::Core::ObservableList_1<::RPG::Client::GridFightEquipTrack*>* AllTracks; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* HideEquipCountSnapShot; // 0x28
		::Sofa::Core::ObservableList_1<::RPG::Client::GridFightEquipTrackQuickDressParam*>* QuickDressParams; // 0x30
		::Sofa::Core::ObservableDictionary_2<::RPG::Client::GridFightEquipTrack*, ::RPG::Client::GridFightEquipTrackCancelReason>* TracksToCancel; // 0x38
		::GCMCEDELOJL* TrackContext; // 0x40
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _UpdateTrackPromise; // 0x48
		::System::Collections::Generic::HashSet_1<::RPG::Client::GridFightEquipTrackQuickCraftParam*>* HideQuickCraftParams; // 0x50
		::System::Collections::Generic::HashSet_1<::RPG::Client::GridFightEquipTrackQuickDressParam*>* HideQuickDressParams; // 0x58
		::RPG::Client::GridFightEquipTrackTargetSelector* TargetSelector; // 0x60
		::System::Boolean _IsQuickOPParamsChanged_k__BackingField; // 0x68
		static ::RPG::Client::GridFightEquipTrackData** StaticGet__Instance_k__BackingField()
		{
			return (::RPG::Client::GridFightEquipTrackData**)UnitySDK::FromName("RPG.Client", "GridFightEquipTrackData")->GetStaticField(0x22470);
		}

		::System::Void _ctor(::GCMCEDELOJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCMCEDELOJL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightEquipTrackData* get_Instance()
		{
			return ((::RPG::Client::GridFightEquipTrackData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::RPG::Client::GridFightEquipTrackData* a1)
		{
			return ((::System::Void(*)(::RPG::Client::GridFightEquipTrackData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void SetCollector(::FBFODNFGMKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBFODNFGMKG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_SETCOLLECTOR_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_UPDATE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* AddEquipTrack(::RPG::Client::GridFightRole* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2, ::IHMJHLGKLHP a3, ::System::Nullable_1<::System::UInt32> a4)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::Client::GridFightRole*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::IHMJHLGKLHP, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ADDEQUIPTRACK_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* AddEquipTrack_1(::System::UInt32 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2, ::IHMJHLGKLHP a3, ::System::Nullable_1<::System::UInt32> a4)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::IHMJHLGKLHP, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ADDEQUIPTRACK_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* ForceSetEquipTrack(::RPG::Client::GridFightRole* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2, ::IHMJHLGKLHP a3, ::System::Nullable_1<::System::UInt32> a4)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::Client::GridFightRole*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::IHMJHLGKLHP, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_FORCESETEQUIPTRACK_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* AddEquipTrackLatestPriority(::RPG::Client::GridFightRole* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2, ::IHMJHLGKLHP a3)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::Client::GridFightRole*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::IHMJHLGKLHP))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ADDEQUIPTRACKLATESTPRIORITY_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* ChangeTrackEquipIDs(::RPG::Client::GridFightEquipTrack* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_CHANGETRACKEQUIPIDS_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* RemoveEquipTrack(::RPG::Client::GridFightEquipTrack* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_REMOVEEQUIPTRACK_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* RemoveEquipTrack_1(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_REMOVEEQUIPTRACK_1_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* ReplaceEquipTrack(::RPG::Client::GridFightEquipTrack* a1, ::RPG::Client::GridFightRole* a2, ::System::Collections::Generic::IList_1<::System::UInt32>* a3, ::IHMJHLGKLHP a4)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*, ::RPG::Client::GridFightRole*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::IHMJHLGKLHP))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_REPLACEEQUIPTRACK_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::HLHHLIGPNOM* CreateServerTrackUpdateInfo(::System::UInt32 a1, ::System::Boolean a2, ::System::Collections::Generic::IList_1<::System::UInt32>* a3, ::System::Collections::Generic::IList_1<::System::UInt32>* a4, ::System::UInt32 a5, ::IHMJHLGKLHP a6)
		{
			return ((::HLHHLIGPNOM*(*)(::System::UInt32, ::System::Boolean, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::UInt32, ::IHMJHLGKLHP))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_CREATESERVERTRACKUPDATEINFO_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Void UpdateEquipTrackFromServer(::System::Collections::Generic::IEnumerable_1<::JJOBHGFOGHP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::JJOBHGFOGHP*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_UPDATEEQUIPTRACKFROMSERVER_OFFSET))(this, a1);
		}

		::System::Void SyncGameRefChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_SYNCGAMEREFCHANGE_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipTrack* GetEquipTrackByRoleID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipTrack*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GETEQUIPTRACKBYROLEID_OFFSET))(this, a1);
		}

		::System::Boolean HasEquipTrack(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_HASEQUIPTRACK_OFFSET))(this, a1);
		}

		::IHMJHLGKLHP GetEquipTrackSource(::RPG::Client::GridFightRole* a1)
		{
			return ((::IHMJHLGKLHP(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GETEQUIPTRACKSOURCE_OFFSET))(this, a1);
		}

		::IHMJHLGKLHP GetEquipTrackSource_1(::System::UInt32 a1)
		{
			return ((::IHMJHLGKLHP(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GETEQUIPTRACKSOURCE_1_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipTrack* GetEquipTrack(::System::UInt32 a1, ::IHMJHLGKLHP a2)
		{
			return ((::RPG::Client::GridFightEquipTrack*(*)(::PVOID, ::System::UInt32, ::IHMJHLGKLHP))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GETEQUIPTRACK_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveGuideTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_REMOVEGUIDETRACK_OFFSET))(this);
		}

		::System::Boolean IsTrackSame(::RPG::Client::GridFightRole* a1, ::IHMJHLGKLHP a2, ::System::Collections::Generic::IList_1<::System::UInt32>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*, ::IHMJHLGKLHP, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ISTRACKSAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HideQuickParams(::RPG::Client::GridFightEquipTrackQuickDressParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipTrackQuickDressParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_HIDEQUICKPARAMS_OFFSET))(this, a1);
		}

		::System::Void HideQuickParams_1(::RPG::Client::GridFightEquipTrackQuickCraftParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipTrackQuickCraftParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_HIDEQUICKPARAMS_1_OFFSET))(this, a1);
		}

		::System::Void OnBeforeUseConsumableItem(::RPG::Client::GridFightConsumableItemData* a1, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ONBEFOREUSECONSUMABLEITEM_OFFSET))(this, a1, a2);
		}

		::System::Void OnUpdateTrackRsp(::KLLHNFLCDGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLLHNFLCDGF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_ONUPDATETRACKRSP_OFFSET))(this, a1);
		}

		::System::UInt32 _GetMaxPriority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__GETMAXPRIORITY_OFFSET))(this);
		}

		::System::UInt32 _GetMinPriority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__GETMINPRIORITY_OFFSET))(this);
		}

		::System::Boolean get_IsEquipTrackFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GET_ISEQUIPTRACKFULL_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* _ResetAllTracksPriorityAndSend(::System::UInt32 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2, ::IHMJHLGKLHP a3, ::System::Nullable_1<::System::UInt32> a4)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::IHMJHLGKLHP, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__RESETALLTRACKSPRIORITYANDSEND_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* _AddTrackToLastAndSend(::System::UInt32 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2, ::IHMJHLGKLHP a3)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::IHMJHLGKLHP))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__ADDTRACKTOLASTANDSEND_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::IList_1<::System::UInt32>* _GetAlreadyEquippedEquipIDs(::System::UInt32 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__GETALREADYEQUIPPEDEQUIPIDS_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateTrackTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATETRACKTARGET_OFFSET))(this);
		}

		::System::Void _UpdateRequiredEquips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEREQUIREDEQUIPS_OFFSET))(this);
		}

		::System::Void _UpdateHideEquipCountSnapShots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEHIDEEQUIPCOUNTSNAPSHOTS_OFFSET))(this);
		}

		::System::Void _CheckUnHideEquip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__CHECKUNHIDEEQUIP_OFFSET))(this);
		}

		::System::Void _UpdateQuickDressAndCraftParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEQUICKDRESSANDCRAFTPARAMS_OFFSET))(this);
		}

		::System::Void _UpdateQuickDressAndCraftParams_1(::RPG::Client::GridFightEquipTrack* a1, ::System::UInt32 a2, ::System::Object* a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*, ::System::UInt32, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEQUICKDRESSANDCRAFTPARAMS_1_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Boolean _CanAddQuickDressParam(::RPG::Client::GridFightEquipTrack* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightEquipTrack*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__CANADDQUICKDRESSPARAM_OFFSET))(a1, a2);
		}

		static ::System::Boolean _CanQuickDressLaughPointEquip(::RPG::Client::GridFightTraitElationLaughPointEffect* a1, ::RPG::Client::GridFightEquipTrack* a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightTraitElationLaughPointEffect*, ::RPG::Client::GridFightEquipTrack*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__CANQUICKDRESSLAUGHPOINTEQUIP_OFFSET))(a1, a2, a3);
		}

		::System::Boolean _TryAssignNoneOwnerEquip(::System::UInt32 a1, ::RPG::Client::GridFightEquipTrack* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3, ::RPG::Client::GridFightEquipItemData* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightEquipTrack*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__TRYASSIGNNONEOWNEREQUIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _UpdateWaitTrackEquip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATEWAITTRACKEQUIP_OFFSET))(this);
		}

		::System::Void _UpdateCancelTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA__UPDATECANCELTRACK_OFFSET))(this);
		}

		::System::Boolean get_IsQuickOPParamsChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_GET_ISQUICKOPPARAMSCHANGED_OFFSET))(this);
		}

		::System::Void set_IsQuickOPParamsChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA_SET_ISQUICKOPPARAMSCHANGED_OFFSET))(this, a1);
		}

		::System::Boolean __CheckUnHideEquip_b__40_0(::RPG::Client::GridFightEquipTrackQuickDressParam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrackQuickDressParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___CHECKUNHIDEEQUIP_B__40_0_OFFSET))(this, a1);
		}

		::System::Boolean __CheckUnHideEquip_b__40_1(::RPG::Client::GridFightEquipTrackQuickDressParam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrackQuickDressParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___CHECKUNHIDEEQUIP_B__40_1_OFFSET))(this, a1);
		}

		::System::Boolean __CheckUnHideEquip_b__40_2(::RPG::Client::GridFightEquipTrackQuickCraftParam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrackQuickCraftParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___CHECKUNHIDEEQUIP_B__40_2_OFFSET))(this, a1);
		}

		::System::Boolean __CheckUnHideEquip_b__40_3(::RPG::Client::GridFightEquipTrackQuickCraftParam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrackQuickCraftParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___CHECKUNHIDEEQUIP_B__40_3_OFFSET))(this, a1);
		}

		::System::Boolean __CheckUnHideEquip_b__40_6(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___CHECKUNHIDEEQUIP_B__40_6_OFFSET))(this, a1);
		}

	};
}
