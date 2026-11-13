#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"
class MGBHKCMHDOK;
namespace RPG::Client { class GridFightBonusResultData; }
namespace RPG::Client { class GridFightElationLaughPointDressPreview; }
namespace RPG::Client { class GridFightElationLaughPointEquipComponent; }
namespace RPG::Client { class GridFightElationLaughPointProperty; }
namespace RPG::Client { class GridFightElationLaughPointSkill; }
namespace RPG::Client { class GridFightEquipCraftRecipe; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightEquipTrack; }
namespace RPG::Client { class GridFightPreparationTraitEffectIndicator; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitElationLaughPointIndicator; }
namespace RPG::Client { class IGridFightEquipCraftRecipeEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_CREATEPREVIEWEQUIPITEMDATA_OFFSET UNITYSDK_OFFSET(0x1D3FD200)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FC600)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_DECORATECRAFTRECIPES_OFFSET UNITYSDK_OFFSET(0x1D3FE350)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_DRESSTO_OFFSET UNITYSDK_OFFSET(0x1D3FD0D0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_GETDRESSPREVIEW_OFFSET UNITYSDK_OFFSET(0x1D3FD250)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_GETPREPARATIONINDICATOR_OFFSET UNITYSDK_OFFSET(0x1D3FCA20)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_GET_EQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1D3FDF10)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_GET_EQUIPITEMDATAS_OFFSET UNITYSDK_OFFSET(0x1D3FDF20)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1D3FE270)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1D3FE0E0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_GET_PROPERTY_OFFSET UNITYSDK_OFFSET(0x1D3FE0C0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_GET_ROUNDHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1D3FE2E0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_GET_SKILLCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1D3FE0D0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_GET_STAR_OFFSET UNITYSDK_OFFSET(0x1D3FE220)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_NOTIFYAHATHREESTAR_OFFSET UNITYSDK_OFFSET(0x1D3FDDE0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_NOTIFYBONUS_OFFSET UNITYSDK_OFFSET(0x1D3FDC80)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_NOTIFYEQUIPUNDRESSED_OFFSET UNITYSDK_OFFSET(0x1D3FDA90)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_ONTRAITCHANGE_OFFSET UNITYSDK_OFFSET(0x1D3FCE90)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D3FCB30)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_USECONSUMABLE_OFFSET UNITYSDK_OFFSET(0x1D3FD950)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT__CONTAINSMATERIALEQUIP_OFFSET UNITYSDK_OFFSET(0x1D3FEA10)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT__GETCRAFTRECIPE_OFFSET UNITYSDK_OFFSET(0x1D3FD4F0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT__GETEQUIPTRACK_OFFSET UNITYSDK_OFFSET(0x1D3FCCC0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT__ISMATERIALEQUIP_OFFSET UNITYSDK_OFFSET(0x1D3FEB30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitElationLaughPointEffect_TypeDefinitionIndex = 67200;

	class GridFightTraitElationLaughPointEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::RPG::Client::GridFightElationLaughPointEquipComponent* _EquipComponent_k__BackingField; // 0x30
		::RPG::Client::GridFightElationLaughPointProperty* _Property_k__BackingField; // 0x38
		::RPG::Client::GridFightTraitElationLaughPointIndicator* _PreparationIndicator; // 0x40
		::RPG::Client::GridFightElationLaughPointSkill* _SkillComponent_k__BackingField; // 0x48
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightPreparationTraitEffectIndicator* GetPreparationIndicator()
		{
			return ((::RPG::Client::GridFightPreparationTraitEffectIndicator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_GETPREPARATIONINDICATOR_OFFSET))(this);
		}

		::System::Void OnUpdate(::MGBHKCMHDOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGBHKCMHDOK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Void OnTraitChange(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_ONTRAITCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void DressTo(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_DRESSTO_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* CreatePreviewEquipItemData(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_CREATEPREVIEWEQUIPITEMDATA_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightElationLaughPointDressPreview* GetDressPreview(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::RPG::Client::GridFightElationLaughPointDressPreview*(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_GETDRESSPREVIEW_OFFSET))(this, a1);
		}

		::System::Void UseConsumable(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_USECONSUMABLE_OFFSET))(this, a1, a2);
		}

		::System::Void NotifyEquipUndressed(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_NOTIFYEQUIPUNDRESSED_OFFSET))(this, a1, a2);
		}

		::System::Void NotifyBonus(::RPG::Client::GridFightBonusResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_NOTIFYBONUS_OFFSET))(this, a1);
		}

		::System::Void NotifyAhaThreeStar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_NOTIFYAHATHREESTAR_OFFSET))(this);
		}

		::RPG::Client::GridFightElationLaughPointEquipComponent* get_EquipComponent()
		{
			return ((::RPG::Client::GridFightElationLaughPointEquipComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_GET_EQUIPCOMPONENT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* get_EquipItemDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_GET_EQUIPITEMDATAS_OFFSET))(this);
		}

		::RPG::Client::GridFightElationLaughPointProperty* get_Property()
		{
			return ((::RPG::Client::GridFightElationLaughPointProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_GET_PROPERTY_OFFSET))(this);
		}

		::RPG::Client::GridFightElationLaughPointSkill* get_SkillComponent()
		{
			return ((::RPG::Client::GridFightElationLaughPointSkill*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_GET_SKILLCOMPONENT_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_GET_LEVEL_OFFSET))(this);
		}

		::System::UInt32 get_Star()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_GET_STAR_OFFSET))(this);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::String* get_RoundHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_GET_ROUNDHEADICONPATH_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::IGridFightEquipCraftRecipeEntry*>* DecorateCraftRecipes(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IGridFightEquipCraftRecipeEntry*>*(*)(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipCraftRecipe*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT_DECORATECRAFTRECIPES_OFFSET))(a1);
		}

		static ::System::Boolean _ContainsMaterialEquip(::RPG::Client::GridFightEquipCraftRecipe* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightEquipCraftRecipe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT__CONTAINSMATERIALEQUIP_OFFSET))(a1);
		}

		static ::System::Boolean _IsMaterialEquip(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT__ISMATERIALEQUIP_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightEquipCraftRecipe* _GetCraftRecipe(::RPG::Client::GridFightEquipItemData* a1, ::RPG::Client::GridFightEquipItemData* a2)
		{
			return ((::RPG::Client::GridFightEquipCraftRecipe*(*)(::RPG::Client::GridFightEquipItemData*, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT__GETCRAFTRECIPE_OFFSET))(a1, a2);
		}

		::RPG::Client::GridFightEquipTrack* _GetEquipTrack()
		{
			return ((::RPG::Client::GridFightEquipTrack*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONLAUGHPOINTEFFECT__GETEQUIPTRACK_OFFSET))(this);
		}

	};
}
