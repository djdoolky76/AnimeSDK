#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipCraftRecipe; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_ADDRECIPE_OFFSET UNITYSDK_OFFSET(0xDAD00F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDAD0050)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_GET_RECIPES_OFFSET UNITYSDK_OFFSET(0xDAD5080)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_GET_TARGETEQUIPITEMID_OFFSET UNITYSDK_OFFSET(0xDAD5060)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_SET_RECIPES_OFFSET UNITYSDK_OFFSET(0xDAD5090)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_SET_TARGETEQUIPITEMID_OFFSET UNITYSDK_OFFSET(0xDAD5070)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftRecipeCollection_TypeDefinitionIndex = 66045;

	class GridFightEquipCraftRecipeCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>* _Recipes_k__BackingField; // 0x10
		::System::UInt32 _TargetEquipItemID_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_CTOR_OFFSET))(this, a1);
		}

		::System::Void AddRecipe(::RPG::Client::GridFightEquipCraftRecipe* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipCraftRecipe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_ADDRECIPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_TargetEquipItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_GET_TARGETEQUIPITEMID_OFFSET))(this);
		}

		::System::Void set_TargetEquipItemID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_SET_TARGETEQUIPITEMID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>* get_Recipes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_GET_RECIPES_OFFSET))(this);
		}

		::System::Void set_Recipes(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPECOLLECTION_SET_RECIPES_OFFSET))(this, a1);
		}

	};
}
