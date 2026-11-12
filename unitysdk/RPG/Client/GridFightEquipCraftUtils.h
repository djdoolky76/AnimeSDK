#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightAddItemSourceType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipCraftCombination; }
namespace RPG::Client { class GridFightEquipCraftRecipe; }
namespace RPG::Client { class GridFightEquipCraftRecipeCollection; }
namespace RPG::Client { class GridFightEquipInfo; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_ARECRAFTCOSTSOURCESCOMPATIBLE_OFFSET UNITYSDK_OFFSET(0xDAD55E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_CANCRAFTWITHCOSTITEMS_OFFSET UNITYSDK_OFFSET(0xDAD27B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_CANPAIRASCRAFTCOST_OFFSET UNITYSDK_OFFSET(0xDAD50A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_CANUSEASCRAFTCOST_OFFSET UNITYSDK_OFFSET(0xDABB640)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_CREATECRAFTTARGETPREVIEWITEMDATA_OFFSET UNITYSDK_OFFSET(0xDAD53E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_GETALLAVAILABLECRAFTCOMBINATIONS_1_OFFSET UNITYSDK_OFFSET(0xDAD6250)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_GETALLAVAILABLECRAFTCOMBINATIONS_2_OFFSET UNITYSDK_OFFSET(0xDABB310)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_GETALLAVAILABLECRAFTCOMBINATIONS_3_OFFSET UNITYSDK_OFFSET(0xDAD3930)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_GETALLAVAILABLECRAFTCOMBINATIONS_OFFSET UNITYSDK_OFFSET(0xDAD6030)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_ISELATIONLAUGHPOINTSOURCE_1_OFFSET UNITYSDK_OFFSET(0xDAD4D80)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_ISELATIONLAUGHPOINTSOURCE_OFFSET UNITYSDK_OFFSET(0xDABB370)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_ISRECIPECANCRAFTEXCLUDEDRESSED_OFFSET UNITYSDK_OFFSET(0xDAD5DC0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_ISRECIPECANCRAFTINCLUDEDRESSED_OFFSET UNITYSDK_OFFSET(0xDAD5E60)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS__FINDCOMBINATIONS_OFFSET UNITYSDK_OFFSET(0xDAD6580)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS__GENERATECOMBINATIONSHELPER_OFFSET UNITYSDK_OFFSET(0xDAD7570)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS__GENERATECOMBINATIONS_OFFSET UNITYSDK_OFFSET(0xDAD74A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftUtils_TypeDefinitionIndex = 66531;

	class GridFightEquipCraftUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsElationLaughPointSource(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_ISELATIONLAUGHPOINTSOURCE_OFFSET))(a1);
		}

		static ::System::Boolean IsElationLaughPointSource_1(::RPG::GameCore::GridFightAddItemSourceType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GridFightAddItemSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_ISELATIONLAUGHPOINTSOURCE_1_OFFSET))(a1);
		}

		static ::System::Boolean CanUseAsCraftCost(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_CANUSEASCRAFTCOST_OFFSET))(a1);
		}

		static ::System::Boolean CanPairAsCraftCost(::RPG::Client::GridFightEquipItemData* a1, ::RPG::Client::GridFightEquipItemData* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightEquipItemData*, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_CANPAIRASCRAFTCOST_OFFSET))(a1, a2);
		}

		static ::System::Boolean CanCraftWithCostItems(::RPG::Client::GridFightEquipCraftRecipe* a1, ::RPG::Client::GridFightEquipItemData* a2, ::RPG::Client::GridFightEquipItemData* a3)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightEquipCraftRecipe*, ::RPG::Client::GridFightEquipItemData*, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_CANCRAFTWITHCOSTITEMS_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::GridFightEquipItemData* CreateCraftTargetPreviewItemData(::RPG::Client::GridFightEquipCraftRecipe* a1, ::RPG::Client::GridFightEquipItemData* a2, ::RPG::Client::GridFightEquipItemData* a3)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::RPG::Client::GridFightEquipCraftRecipe*, ::RPG::Client::GridFightEquipItemData*, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_CREATECRAFTTARGETPREVIEWITEMDATA_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean AreCraftCostSourcesCompatible(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* a1)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_ARECRAFTCOSTSOURCESCOMPATIBLE_OFFSET))(a1);
		}

		static ::System::Boolean IsRecipeCanCraftExcludeDressed(::RPG::Client::GridFightEquipCraftRecipe* a1, ::RPG::Client::GridFightEquipInfo* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightEquipCraftRecipe*, ::RPG::Client::GridFightEquipInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_ISRECIPECANCRAFTEXCLUDEDRESSED_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsRecipeCanCraftIncludeDressed(::RPG::Client::GridFightEquipCraftRecipe* a1, ::RPG::Client::GridFightEquipInfo* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightEquipCraftRecipe*, ::RPG::Client::GridFightEquipInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_ISRECIPECANCRAFTINCLUDEDRESSED_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftCombination*>* GetAllAvailableCraftCombinations(::RPG::Client::GridFightEquipCraftRecipeCollection* a1, ::RPG::Client::GridFightEquipInfo* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftCombination*>*(*)(::RPG::Client::GridFightEquipCraftRecipeCollection*, ::RPG::Client::GridFightEquipInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_GETALLAVAILABLECRAFTCOMBINATIONS_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftCombination*>* GetAllAvailableCraftCombinations_1(::RPG::Client::GridFightEquipCraftRecipeCollection* a1, ::RPG::Client::GridFightEquipInfo* a2, ::System::Boolean a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftCombination*>*(*)(::RPG::Client::GridFightEquipCraftRecipeCollection*, ::RPG::Client::GridFightEquipInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_GETALLAVAILABLECRAFTCOMBINATIONS_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftCombination*>* GetAllAvailableCraftCombinations_2(::RPG::Client::GridFightEquipCraftRecipe* a1, ::RPG::Client::GridFightEquipInfo* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftCombination*>*(*)(::RPG::Client::GridFightEquipCraftRecipe*, ::RPG::Client::GridFightEquipInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_GETALLAVAILABLECRAFTCOMBINATIONS_2_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftCombination*>* GetAllAvailableCraftCombinations_3(::RPG::Client::GridFightEquipCraftRecipe* a1, ::RPG::Client::GridFightEquipInfo* a2, ::System::Boolean a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftCombination*>*(*)(::RPG::Client::GridFightEquipCraftRecipe*, ::RPG::Client::GridFightEquipInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS_GETALLAVAILABLECRAFTCOMBINATIONS_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _FindCombinations(::RPG::Client::GridFightEquipCraftRecipe* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*>* a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*>* a4, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftCombination*>* a5)
		{
			return ((::System::Void(*)(::RPG::Client::GridFightEquipCraftRecipe*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*>*, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*>*, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftCombination*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS__FINDCOMBINATIONS_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*>* _GenerateCombinations(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*>*(*)(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS__GENERATECOMBINATIONS_OFFSET))(a1, a2);
		}

		static ::System::Void _GenerateCombinationsHelper(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* a4, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*>* a5)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*, ::System::UInt32, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS__GENERATECOMBINATIONSHELPER_OFFSET))(a1, a2, a3, a4, a5);
		}

	};
}
