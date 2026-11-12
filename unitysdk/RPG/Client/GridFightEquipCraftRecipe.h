#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightAddItemSourceType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipCraftRecipe; }
namespace RPG::Client { class GridFightEquipInfo; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightEquipQuickCraft; }
namespace RPG::GameCore { class GridFightCraftConfigRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CANCRAFTBYADDITEM_1_OFFSET UNITYSDK_OFFSET(0xDAD2510)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CANCRAFTBYADDITEM_OFFSET UNITYSDK_OFFSET(0xDAD4C90)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CANCRAFTTOROLE_1_OFFSET UNITYSDK_OFFSET(0xDAD4B70)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CANCRAFTTOROLE_OFFSET UNITYSDK_OFFSET(0xDAD4CF0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CANCRAFT_1_OFFSET UNITYSDK_OFFSET(0xDAD3050)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CANCRAFT_2_OFFSET UNITYSDK_OFFSET(0xDAD43E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CANCRAFT_OFFSET UNITYSDK_OFFSET(0xDAD2F40)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CREATECOSTEQUIPITEMDATA_OFFSET UNITYSDK_OFFSET(0xDAD3440)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CREATETARGETEQUIPITEMDATA_OFFSET UNITYSDK_OFFSET(0xDAD3490)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CTOR_OFFSET UNITYSDK_OFFSET(0xDAD1E40)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_GETQUICKCRAFTS_OFFSET UNITYSDK_OFFSET(0xDAD34E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_GET_AVAILABLESEASONIDS_OFFSET UNITYSDK_OFFSET(0xDAD4E60)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_GET_COSTITEMIDS_OFFSET UNITYSDK_OFFSET(0xDAD4E40)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_GET_COSTITEMSDICT_OFFSET UNITYSDK_OFFSET(0xDAD4E20)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_GET_CRAFTID_OFFSET UNITYSDK_OFFSET(0xDAD4DE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_GET_RAWRECIPE_OFFSET UNITYSDK_OFFSET(0xDAD3400)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_GET_TARGETEQUIPITEMID_OFFSET UNITYSDK_OFFSET(0xDAD4E00)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_ISAVAILABLEINSEASON_OFFSET UNITYSDK_OFFSET(0xDAD0090)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_NEEDCOSTITEM_OFFSET UNITYSDK_OFFSET(0xDAD2BA0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_QUICKCRAFT_OFFSET UNITYSDK_OFFSET(0xDABAFD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_SET_AVAILABLESEASONIDS_OFFSET UNITYSDK_OFFSET(0xDAD4E70)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_SET_COSTITEMIDS_OFFSET UNITYSDK_OFFSET(0xDAD4E50)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_SET_COSTITEMSDICT_OFFSET UNITYSDK_OFFSET(0xDAD4E30)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_SET_CRAFTID_OFFSET UNITYSDK_OFFSET(0xDAD4DF0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_SET_TARGETEQUIPITEMID_OFFSET UNITYSDK_OFFSET(0xDAD4E10)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE__CANCRAFTTOROLEWITHSOURCE_OFFSET UNITYSDK_OFFSET(0xDAD48D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE__GETRELATEDROLEUIDS_OFFSET UNITYSDK_OFFSET(0xDAD4620)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftRecipe_TypeDefinitionIndex = 66042;

	class GridFightEquipCraftRecipe : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _AvailableSeasonIDs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _CostItemIDs_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _CostItemsDict_k__BackingField; // 0x20
		::System::UInt32 _CraftID_k__BackingField; // 0x28
		::System::UInt32 _TargetEquipItemID_k__BackingField; // 0x2C
		::System::Void _ctor(::RPG::GameCore::GridFightCraftConfigRow* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightCraftConfigRow*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightEquipCraftRecipe* get_RawRecipe()
		{
			return ((::RPG::Client::GridFightEquipCraftRecipe*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_GET_RAWRECIPE_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemData* CreateCostEquipItemData(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CREATECOSTEQUIPITEMDATA_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* CreateTargetEquipItemData()
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CREATETARGETEQUIPITEMDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipQuickCraft*>* GetQuickCrafts(::RPG::Client::GridFightEquipInfo* a1, ::RPG::Client::GridFightEquipItemData* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipQuickCraft*>*(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_GETQUICKCRAFTS_OFFSET))(this, a1, a2);
		}

		::System::Void QuickCraft(::RPG::Client::GridFightEquipInfo* a1, ::RPG::Client::GridFightEquipQuickCraft* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*, ::RPG::Client::GridFightEquipQuickCraft*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_QUICKCRAFT_OFFSET))(this, a1, a2);
		}

		::System::Boolean NeedCostItem(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_NEEDCOSTITEM_OFFSET))(this, a1);
		}

		::System::Boolean IsAvailableInSeason(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_ISAVAILABLEINSEASON_OFFSET))(this, a1);
		}

		::System::Boolean CanCraft(::RPG::Client::GridFightEquipInfo* a1, ::System::Boolean a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CANCRAFT_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CanCraft_1(::RPG::Client::GridFightEquipInfo* a1, ::RPG::Client::GridFightEquipItemData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CANCRAFT_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean CanCraft_2(::RPG::Client::GridFightEquipInfo* a1, ::System::Boolean a2, ::System::UInt32 a3, ::RPG::GameCore::GridFightAddItemSourceType a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*, ::System::Boolean, ::System::UInt32, ::RPG::GameCore::GridFightAddItemSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CANCRAFT_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean CanCraftByAddItem(::RPG::Client::GridFightEquipInfo* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CANCRAFTBYADDITEM_OFFSET))(this, a1, a2);
		}

		::System::Boolean CanCraftByAddItem_1(::RPG::Client::GridFightEquipInfo* a1, ::System::UInt32 a2, ::RPG::GameCore::GridFightAddItemSourceType a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*, ::System::UInt32, ::RPG::GameCore::GridFightAddItemSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CANCRAFTBYADDITEM_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CanCraftToRole(::RPG::Client::GridFightEquipInfo* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::UInt32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*, ::System::UInt32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CANCRAFTTOROLE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean CanCraftToRole_1(::RPG::Client::GridFightEquipInfo* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::UInt32 a4, ::RPG::GameCore::GridFightAddItemSourceType a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*, ::System::UInt32, ::System::Boolean, ::System::UInt32, ::RPG::GameCore::GridFightAddItemSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_CANCRAFTTOROLE_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean _CanCraftToRoleWithSource(::RPG::Client::GridFightEquipInfo* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::UInt32 a4, ::RPG::GameCore::GridFightAddItemSourceType a5, ::System::Boolean a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*, ::System::UInt32, ::System::Boolean, ::System::UInt32, ::RPG::GameCore::GridFightAddItemSourceType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE__CANCRAFTTOROLEWITHSOURCE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _GetRelatedRoleUIDs(::System::UInt32 a1, ::RPG::Client::GridFightEquipInfo* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightEquipInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE__GETRELATEDROLEUIDS_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_CraftID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_GET_CRAFTID_OFFSET))(this);
		}

		::System::Void set_CraftID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_SET_CRAFTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_TargetEquipItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_GET_TARGETEQUIPITEMID_OFFSET))(this);
		}

		::System::Void set_TargetEquipItemID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_SET_TARGETEQUIPITEMID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_CostItemsDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_GET_COSTITEMSDICT_OFFSET))(this);
		}

		::System::Void set_CostItemsDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_SET_COSTITEMSDICT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CostItemIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_GET_COSTITEMIDS_OFFSET))(this);
		}

		::System::Void set_CostItemIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_SET_COSTITEMIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_AvailableSeasonIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_GET_AVAILABLESEASONIDS_OFFSET))(this);
		}

		::System::Void set_AvailableSeasonIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE_SET_AVAILABLESEASONIDS_OFFSET))(this, a1);
		}

	};
}
