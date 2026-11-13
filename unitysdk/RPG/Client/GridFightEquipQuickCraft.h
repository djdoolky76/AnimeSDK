#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipCraftCombination; }
namespace RPG::Client { class IGridFightEquipCraftRecipeEntry; }

#define RPG_CLIENT_GRIDFIGHTEQUIPQUICKCRAFT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D15BDD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPQUICKCRAFT_GET_COMBINATION_OFFSET UNITYSDK_OFFSET(0x1D181C10)
#define RPG_CLIENT_GRIDFIGHTEQUIPQUICKCRAFT_GET_RECIPEENTRY_OFFSET UNITYSDK_OFFSET(0x1D181C00)
#define RPG_CLIENT_GRIDFIGHTEQUIPQUICKCRAFT_GET_TARGETROLEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1D181C20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipQuickCraft_TypeDefinitionIndex = 66040;

	class GridFightEquipQuickCraft : public ::System::Object
	{
	public:
		::RPG::Client::IGridFightEquipCraftRecipeEntry* _RecipeEntry_k__BackingField; // 0x10
		::RPG::Client::GridFightEquipCraftCombination* _Combination_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::Client::IGridFightEquipCraftRecipeEntry* a1, ::RPG::Client::GridFightEquipCraftCombination* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGridFightEquipCraftRecipeEntry*, ::RPG::Client::GridFightEquipCraftCombination*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPQUICKCRAFT_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::IGridFightEquipCraftRecipeEntry* get_RecipeEntry()
		{
			return ((::RPG::Client::IGridFightEquipCraftRecipeEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPQUICKCRAFT_GET_RECIPEENTRY_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipCraftCombination* get_Combination()
		{
			return ((::RPG::Client::GridFightEquipCraftCombination*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPQUICKCRAFT_GET_COMBINATION_OFFSET))(this);
		}

		::System::UInt32 get_TargetRoleUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPQUICKCRAFT_GET_TARGETROLEUNIQUEID_OFFSET))(this);
		}

	};
}
