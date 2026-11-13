#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipCraftRecipe; }
namespace RPG::Client { class GridFightEquipInfo; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightEquipQuickCraft; }
namespace RPG::Client { class GridFightTraitElationLaughPointEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCRAFTRECIPEDECORATOR_CREATECOSTEQUIPITEMDATA_OFFSET UNITYSDK_OFFSET(0x1D15A720)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCRAFTRECIPEDECORATOR_CREATETARGETEQUIPITEMDATA_OFFSET UNITYSDK_OFFSET(0x1D15A7E0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCRAFTRECIPEDECORATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D15A700)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCRAFTRECIPEDECORATOR_GETQUICKCRAFTS_OFFSET UNITYSDK_OFFSET(0x1D15A860)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCRAFTRECIPEDECORATOR_GET_RAWRECIPE_OFFSET UNITYSDK_OFFSET(0x1D15A710)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCRAFTRECIPEDECORATOR_QUICKCRAFT_OFFSET UNITYSDK_OFFSET(0x1D15B5F0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCRAFTRECIPEDECORATOR__ADDBACKPACKQUICKCRAFTS_OFFSET UNITYSDK_OFFSET(0x1D15A920)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCRAFTRECIPEDECORATOR__ADDTRAITEFFECTQUICKCRAFT_OFFSET UNITYSDK_OFFSET(0x1D15AE20)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCRAFTRECIPEDECORATOR__CREATEEQUIPITEMDATA_OFFSET UNITYSDK_OFFSET(0x1D15A7A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightElationLaughPointEquipCraftRecipeDecorator_TypeDefinitionIndex = 67184;

	class GridFightElationLaughPointEquipCraftRecipeDecorator : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTraitElationLaughPointEffect* _Effect; // 0x10
		::RPG::Client::GridFightEquipCraftRecipe* _RawRecipe_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::Client::GridFightEquipCraftRecipe* a1, ::RPG::Client::GridFightTraitElationLaughPointEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipCraftRecipe*, ::RPG::Client::GridFightTraitElationLaughPointEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCRAFTRECIPEDECORATOR_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightEquipCraftRecipe* get_RawRecipe()
		{
			return ((::RPG::Client::GridFightEquipCraftRecipe*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCRAFTRECIPEDECORATOR_GET_RAWRECIPE_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemData* CreateCostEquipItemData(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCRAFTRECIPEDECORATOR_CREATECOSTEQUIPITEMDATA_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* CreateTargetEquipItemData()
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCRAFTRECIPEDECORATOR_CREATETARGETEQUIPITEMDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipQuickCraft*>* GetQuickCrafts(::RPG::Client::GridFightEquipInfo* a1, ::RPG::Client::GridFightEquipItemData* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipQuickCraft*>*(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCRAFTRECIPEDECORATOR_GETQUICKCRAFTS_OFFSET))(this, a1, a2);
		}

		::System::Void QuickCraft(::RPG::Client::GridFightEquipInfo* a1, ::RPG::Client::GridFightEquipQuickCraft* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*, ::RPG::Client::GridFightEquipQuickCraft*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCRAFTRECIPEDECORATOR_QUICKCRAFT_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::GridFightEquipItemData* _CreateEquipItemData(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCRAFTRECIPEDECORATOR__CREATEEQUIPITEMDATA_OFFSET))(a1);
		}

		::System::Void _AddBackpackQuickCrafts(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipQuickCraft*>* a1, ::RPG::Client::GridFightEquipInfo* a2, ::RPG::Client::GridFightEquipItemData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipQuickCraft*>*, ::RPG::Client::GridFightEquipInfo*, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCRAFTRECIPEDECORATOR__ADDBACKPACKQUICKCRAFTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _AddTraitEffectQuickCraft(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipQuickCraft*>* a1, ::RPG::Client::GridFightEquipInfo* a2, ::RPG::Client::GridFightEquipItemData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipQuickCraft*>*, ::RPG::Client::GridFightEquipInfo*, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCRAFTRECIPEDECORATOR__ADDTRAITEFFECTQUICKCRAFT_OFFSET))(this, a1, a2, a3);
		}

	};
}
