#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightAddItemSourceType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightElationLaughPointEquipComponent; }
namespace RPG::Client { class GridFightEquipCraftRecipe; }
namespace RPG::Client { class GridFightEquipCraftRecipeCollection; }
namespace RPG::Client { class GridFightEquipInfo; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class IGridFightEquipCraftRecipeEntry; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_CANCRAFT_OFFSET UNITYSDK_OFFSET(0xDAD19E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_CANUSEDTOCRAFT_OFFSET UNITYSDK_OFFSET(0xDACF200)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xDACF6B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDACFDF0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETRECIPESCANCRAFTBYADDITEM_1_OFFSET UNITYSDK_OFFSET(0xDAD1630)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETRECIPESCANCRAFTBYADDITEM_OFFSET UNITYSDK_OFFSET(0xDAC63F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETRECIPESCANCRAFTBYELATIONLAUGHPOINTEQUIPS_OFFSET UNITYSDK_OFFSET(0xDAD1130)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETRECIPESCANCRAFT_1_OFFSET UNITYSDK_OFFSET(0xDAD0D10)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETRECIPESCANCRAFT_OFFSET UNITYSDK_OFFSET(0xDAD0980)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETRECIPESCONTAINSITEM_1_OFFSET UNITYSDK_OFFSET(0xDAD0760)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETRECIPESCONTAINSITEM_OFFSET UNITYSDK_OFFSET(0xDAD03D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETTARGETEQUIPCRAFTRECIPECOLLECTION_OFFSET UNITYSDK_OFFSET(0xDABC180)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETTARGETEQUIPCRAFTRECIPES_OFFSET UNITYSDK_OFFSET(0xDAD01A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GET_RECIPECOLLECTIONLUT_OFFSET UNITYSDK_OFFSET(0xDAD20B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_SET_RECIPECOLLECTIONLUT_OFFSET UNITYSDK_OFFSET(0xDAD20C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO__CANCRAFTBYELATIONLAUGHPOINTEQUIPS_OFFSET UNITYSDK_OFFSET(0xDAD1B90)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO__GETCURRENTGAMESEASONID_OFFSET UNITYSDK_OFFSET(0xDACFE80)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO__LOADCRAFTMAPCONFIG_OFFSET UNITYSDK_OFFSET(0xDACF730)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftMapInfo_TypeDefinitionIndex = 66046;

	class GridFightEquipCraftMapInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>* _RecipeCollectionLUT_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipCraftRecipeCollection* GetTargetEquipCraftRecipeCollection(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipCraftRecipeCollection*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETTARGETEQUIPCRAFTRECIPECOLLECTION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IGridFightEquipCraftRecipeEntry*>* GetTargetEquipCraftRecipes(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IGridFightEquipCraftRecipeEntry*>*(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETTARGETEQUIPCRAFTRECIPES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>* GetRecipesContainsItem(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETRECIPESCONTAINSITEM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IGridFightEquipCraftRecipeEntry*>* GetRecipesContainsItem_1(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IGridFightEquipCraftRecipeEntry*>*(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETRECIPESCONTAINSITEM_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>* GetRecipesCanCraft(::RPG::Client::GridFightEquipInfo* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>*(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETRECIPESCANCRAFT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>* GetRecipesCanCraft_1(::RPG::Client::GridFightEquipInfo* a1, ::RPG::Client::GridFightEquipItemData* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>*(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETRECIPESCANCRAFT_1_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>* GetRecipesCanCraftByElationLaughPointEquips(::RPG::Client::GridFightEquipInfo* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>*(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETRECIPESCANCRAFTBYELATIONLAUGHPOINTEQUIPS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>* GetRecipesCanCraftByAddItem(::RPG::Client::GridFightEquipInfo* a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>*(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETRECIPESCANCRAFTBYADDITEM_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>* GetRecipesCanCraftByAddItem_1(::RPG::Client::GridFightEquipInfo* a1, ::System::UInt32 a2, ::RPG::GameCore::GridFightAddItemSourceType a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>*(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*, ::System::UInt32, ::RPG::GameCore::GridFightAddItemSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETRECIPESCANCRAFTBYADDITEM_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CanCraft(::RPG::Client::GridFightEquipItemData* a1, ::RPG::Client::GridFightEquipItemData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_CANCRAFT_OFFSET))(this, a1, a2);
		}

		::System::Boolean CanUsedToCraft(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_CANUSEDTOCRAFT_OFFSET))(this, a1);
		}

		static ::System::UInt32 _GetCurrentGameSeasonID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO__GETCURRENTGAMESEASONID_OFFSET))();
		}

		static ::System::Boolean _CanCraftByElationLaughPointEquips(::RPG::Client::GridFightEquipCraftRecipe* a1, ::RPG::Client::GridFightEquipInfo* a2, ::RPG::Client::GridFightElationLaughPointEquipComponent* a3)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightEquipCraftRecipe*, ::RPG::Client::GridFightEquipInfo*, ::RPG::Client::GridFightElationLaughPointEquipComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO__CANCRAFTBYELATIONLAUGHPOINTEQUIPS_OFFSET))(a1, a2, a3);
		}

		::System::Void _LoadCraftMapConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO__LOADCRAFTMAPCONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>* get_RecipeCollectionLUT()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GET_RECIPECOLLECTIONLUT_OFFSET))(this);
		}

		::System::Void set_RecipeCollectionLUT(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_SET_RECIPECOLLECTIONLUT_OFFSET))(this, a1);
		}

	};
}
