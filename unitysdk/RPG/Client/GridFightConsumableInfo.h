#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConsumeType.h"
#include "unitysdk/System/Object.h"
class DEIPIMGMGPO;
class FBFODNFGMKG;
class FLGMGNEOFBH;
class LALKBPJANIH;
namespace RPG::Client { class GridFightConsumableInfo_GridFightConsumableItemUseParam; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace Sofa::Core { template <typename T1, typename T2> class ObservableDictionary_2; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_CANUSECONSUMABLEITEM_OFFSET UNITYSDK_OFFSET(0x1D59AB90)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D596A50)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D5984A0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_GETITEMBYGROUPID_OFFSET UNITYSDK_OFFSET(0x1D598B80)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_GETITEM_OFFSET UNITYSDK_OFFSET(0x1D5985C0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_GET_CONSUMABLEITEMDATAS_OFFSET UNITYSDK_OFFSET(0x1D59AB00)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1D598140)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x1D598180)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNCREMOVE_OFFSET UNITYSDK_OFFSET(0x1D599FE0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNCUPDATE_1_OFFSET UNITYSDK_OFFSET(0x1D5998A0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0x1D598D50)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x1D598CC0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_USECONSUMABLEITEM_OFFSET UNITYSDK_OFFSET(0x1D59B350)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D5994F0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__CHECKCONSTRAITS_1_OFFSET UNITYSDK_OFFSET(0x1D59AE50)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__CHECKCONSTRAITS_OFFSET UNITYSDK_OFFSET(0x1D59B1A0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__CLEARITEMS_OFFSET UNITYSDK_OFFSET(0x1D598540)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__GETFIRSTITEMBYITEMID_OFFSET UNITYSDK_OFFSET(0x1D598610)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__GETITEMBYGROUPID_OFFSET UNITYSDK_OFFSET(0x1D598BD0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__GETSERVERDATAGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1D59A040)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__REMOVEITEM_OFFSET UNITYSDK_OFFSET(0x1D59AA70)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__REMOVEMULTIPLEITEM_OFFSET UNITYSDK_OFFSET(0x1D59A550)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightConsumableInfo_TypeDefinitionIndex = 66466;

	class GridFightConsumableInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightConsumeType, ::System::Collections::Generic::List_1<::DEIPIMGMGPO*>*>* _ConstraitsToChimeraLUT; // 0x10
		::System::Collections::Generic::List_1<::DEIPIMGMGPO*>* _CommonConstraits; // 0x18
		::FBFODNFGMKG* _gridFightDataChangeCollector; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightConsumeType, ::System::Collections::Generic::List_1<::DEIPIMGMGPO*>*>* _ConstraitsToEquipLUT; // 0x28
		::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightConsumableItemData*>* ConsumableItemDataDict; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightConsumeType, ::System::Collections::Generic::List_1<::DEIPIMGMGPO*>*>* _ConstraitsToRoleLUT; // 0x38
		::System::Action_2<::RPG::Client::GridFightConsumableItemData*, ::System::Object*>* OnBeforeUseConsumable; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_INIT_OFFSET))(this);
		}

		::System::Void SetCollector(::FBFODNFGMKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBFODNFGMKG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SETCOLLECTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::GridFightConsumableItemData* GetItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_GETITEM_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightConsumableItemData* GetItemByGroupID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_GETITEMBYGROUPID_OFFSET))(this, a1);
		}

		::System::Void Sync(::System::Collections::Generic::IEnumerable_1<::LALKBPJANIH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::LALKBPJANIH*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncUpdate(::System::Collections::Generic::IEnumerable_1<::LALKBPJANIH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::LALKBPJANIH*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNCUPDATE_OFFSET))(this, a1);
		}

		::System::Void SyncUpdate_1(::System::Collections::Generic::IEnumerable_1<::FLGMGNEOFBH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::FLGMGNEOFBH*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNCUPDATE_1_OFFSET))(this, a1);
		}

		::System::Void SyncRemove(::System::Collections::Generic::IEnumerable_1<::FLGMGNEOFBH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::FLGMGNEOFBH*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNCREMOVE_OFFSET))(this, a1);
		}

		::System::Void _ClearItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__CLEARITEMS_OFFSET))(this);
		}

		::RPG::Client::GridFightConsumableItemData* _GetItemByGroupID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__GETITEMBYGROUPID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightConsumableItemData* _GetFirstItemByItemID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__GETFIRSTITEMBYITEMID_OFFSET))(this, a1);
		}

		::System::Void _RemoveMultiPleItem(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__REMOVEMULTIPLEITEM_OFFSET))(this, a1);
		}

		::System::Void _RemoveItem(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__REMOVEITEM_OFFSET))(this, a1);
		}

		::System::Void _AddItem(::RPG::Client::GridFightConsumableItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__ADDITEM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* _GetServerDataGroupIDs(::System::Collections::Generic::IEnumerable_1<::FLGMGNEOFBH*>* a1)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::FLGMGNEOFBH*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__GETSERVERDATAGROUPIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightConsumableItemData*>* get_ConsumableItemDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightConsumableItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_GET_CONSUMABLEITEMDATAS_OFFSET))(this);
		}

		::System::Boolean CanUseConsumableItem(::RPG::Client::GridFightConsumableItemData* a1, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_CANUSECONSUMABLEITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UseConsumableItem(::RPG::Client::GridFightConsumableItemData* a1, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_USECONSUMABLEITEM_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckConstraits(::RPG::Client::GridFightConsumableItemData* a1, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* a2, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightConsumeType, ::System::Collections::Generic::List_1<::DEIPIMGMGPO*>*>* a3, ::System::String* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightConsumeType, ::System::Collections::Generic::List_1<::DEIPIMGMGPO*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__CHECKCONSTRAITS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean _CheckConstraits_1(::RPG::Client::GridFightConsumableItemData* a1, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* a2, ::System::Collections::Generic::List_1<::DEIPIMGMGPO*>* a3, ::System::String* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*, ::System::Collections::Generic::List_1<::DEIPIMGMGPO*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__CHECKCONSTRAITS_1_OFFSET))(this, a1, a2, a3, a4);
		}

	};
}
