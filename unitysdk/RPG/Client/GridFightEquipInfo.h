#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACNPGGHPDJB.h"
#include "unitysdk/DMGOKGLBNJJ.h"
#include "unitysdk/System/Object.h"
class DLDENAECKHF;
class FBFODNFGMKG;
class IJDLENJJBHJ;
class INFGDNHDOLB;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightGameModifier; }
namespace RPG::Client { class GridFightGameSession; }
namespace RPG::Client { class GridFightModifierInfo; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace Sofa::Core { template <typename T1, typename T2> class ObservableDictionary_2; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_CANDRESSEQUIPTOROLE_OFFSET UNITYSDK_OFFSET(0x1D17BD60)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_CONTAINSEQUIPID_OFFSET UNITYSDK_OFFSET(0x1D179860)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D178850)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D1791A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPBYUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1D179460)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0x1D172530)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPRECOMMENDROLEIDLIST_OFFSET UNITYSDK_OFFSET(0x1D17C170)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPSBYITEMID_OFFSET UNITYSDK_OFFSET(0x1D1795A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPSBYPRED_OFFSET UNITYSDK_OFFSET(0x1D176C00)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPSCANDRESSTOROLEBYITEMID_OFFSET UNITYSDK_OFFSET(0x1D179680)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPSCOUNTBYITEMID_OFFSET UNITYSDK_OFFSET(0x1D179760)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETROLEEQUIPS_OFFSET UNITYSDK_OFFSET(0x1D1792C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GET_ALLEQUIPS_OFFSET UNITYSDK_OFFSET(0x1D17B780)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GET_IDLEEQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0x1D17B810)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GET__CURGAMESESSION_OFFSET UNITYSDK_OFFSET(0x1D17D550)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_INIT_1_OFFSET UNITYSDK_OFFSET(0x1D178CE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1D178CA0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_ONCRAFTEQUIPRSP_OFFSET UNITYSDK_OFFSET(0x1D17C110)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_ONDRESSEQUIPRSP_OFFSET UNITYSDK_OFFSET(0x1D17C0B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x1D178E80)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_SYNCREMOVE_OFFSET UNITYSDK_OFFSET(0x1D17A9A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0x1D179BE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x1D179B50)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_TRYCRAFTEQUIP_OFFSET UNITYSDK_OFFSET(0x1D1745C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_TRYDRESSEQUIPTOROLE_OFFSET UNITYSDK_OFFSET(0x1D17B980)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D17A5D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO__CLEARITEMS_OFFSET UNITYSDK_OFFSET(0x1D179240)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO__GETITEM_OFFSET UNITYSDK_OFFSET(0x1D1794B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO__GETOWNEDROLEPRIORITY_OFFSET UNITYSDK_OFFSET(0x1D17DCE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO__GETSERVERDATAUIDS_OFFSET UNITYSDK_OFFSET(0x1D17B270)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO__MERGESAMEAVATARROLEIDS_OFFSET UNITYSDK_OFFSET(0x1D17D840)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO__ONFINANCINGMODIFIERCHANGE_OFFSET UNITYSDK_OFFSET(0x1D17AF80)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO__REMOVEITEM_OFFSET UNITYSDK_OFFSET(0x1D17AEF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipInfo_TypeDefinitionIndex = 66548;

	class GridFightEquipInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _RecommendCandidateRoleIDs; // 0x10
		::FBFODNFGMKG* _Collector; // 0x18
		::System::Collections::Generic::List_1<::DLDENAECKHF*>* _EquipDressConstraits; // 0x20
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _DressEquipRspPromise; // 0x28
		::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>* EquipItemDataDict; // 0x30
		::INFGDNHDOLB* _Comparer; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* _EquipListHelper; // 0x40
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _CraftEquipRspPromise; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_INIT_OFFSET))(this);
		}

		::System::Void Init_1(::RPG::Client::GridFightModifierInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightModifierInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_INIT_1_OFFSET))(this, a1);
		}

		::System::Void SetCollector(::FBFODNFGMKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBFODNFGMKG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_SETCOLLECTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* GetRoleEquips(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETROLEEQUIPS_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* GetEquipByUniqueID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPBYUNIQUEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* GetEquipsByItemID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPSBYITEMID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* GetEquipsCanDressToRoleByItemID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPSCANDRESSTOROLEBYITEMID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* GetEquipsByPred(::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPSBYPRED_OFFSET))(this, a1);
		}

		::System::Int32 GetEquipsCountByItemID(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPSCOUNTBYITEMID_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetEquipCount(::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean ContainsEquipID(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_CONTAINSEQUIPID_OFFSET))(this, a1, a2);
		}

		::System::Void Sync(::System::Collections::Generic::IEnumerable_1<::IJDLENJJBHJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::IJDLENJJBHJ*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncUpdate(::System::Collections::Generic::IEnumerable_1<::IJDLENJJBHJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::IJDLENJJBHJ*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_SYNCUPDATE_OFFSET))(this, a1);
		}

		::System::Void SyncRemove(::System::Collections::Generic::IEnumerable_1<::IJDLENJJBHJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::IJDLENJJBHJ*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_SYNCREMOVE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* _GetItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO__GETITEM_OFFSET))(this, a1);
		}

		::System::Void _AddItem(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO__ADDITEM_OFFSET))(this, a1);
		}

		::System::Void _RemoveItem(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO__REMOVEITEM_OFFSET))(this, a1);
		}

		::System::Void _ClearItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO__CLEARITEMS_OFFSET))(this);
		}

		::System::Void _OnFinancingModifierChange(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO__ONFINANCINGMODIFIERCHANGE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* _GetServerDataUIDs(::System::Collections::Generic::IEnumerable_1<::IJDLENJJBHJ*>* a1)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::IJDLENJJBHJ*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO__GETSERVERDATAUIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* get_AllEquips()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GET_ALLEQUIPS_OFFSET))(this);
		}

		::System::Int32 get_IdleEquipCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GET_IDLEEQUIPCOUNT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* TryDressEquipToRole(::System::UInt32 a1, ::System::UInt32 a2, ::DMGOKGLBNJJ a3)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::DMGOKGLBNJJ))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_TRYDRESSEQUIPTOROLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CanDressEquipToRole(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_CANDRESSEQUIPTOROLE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnDressEquipRsp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_ONDRESSEQUIPRSP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* TryCraftEquip(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::ACNPGGHPDJB a4)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::ACNPGGHPDJB))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_TRYCRAFTEQUIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnCraftEquipRsp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_ONCRAFTEQUIPRSP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetEquipRecommendRoleIDList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPRECOMMENDROLEIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _MergeSameAvatarRoleIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO__MERGESAMEAVATARROLEIDS_OFFSET))(this, a1);
		}

		::System::Int32 _GetOwnedRolePriority(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO__GETOWNEDROLEPRIORITY_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGameSession* get__CurGameSession()
		{
			return ((::RPG::Client::GridFightGameSession*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GET__CURGAMESESSION_OFFSET))(this);
		}

	};
}
