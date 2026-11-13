#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/FarmEntrySource.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class EquipmentItemData; }
namespace RPG::Client { class FarmGuide; }
namespace RPG::Client { class GrowthGuideData; }
namespace RPG::GameCore { class AvatarExpItemConfigRow; }
namespace RPG::GameCore { class EquipmentExpItemRow; }
namespace RPG::GameCore { class ItemComposeConfigRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GROWTHMODULE_CHECKAVATARSKILLGROWABLEMINIMUMSTEP_OFFSET UNITYSDK_OFFSET(0x1CA1CE90)
#define RPG_CLIENT_GROWTHMODULE_CHECKCOMPOSABLEMATERIALEXIST_OFFSET UNITYSDK_OFFSET(0x1CA1C380)
#define RPG_CLIENT_GROWTHMODULE_CLEARFARMCONTEXT_OFFSET UNITYSDK_OFFSET(0x1CA1D640)
#define RPG_CLIENT_GROWTHMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA20BA0)
#define RPG_CLIENT_GROWTHMODULE_GETALLGROWTHTARGETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CA1BB10)
#define RPG_CLIENT_GROWTHMODULE_GETAVATARPROGRESSIONFARMGUIDES_OFFSET UNITYSDK_OFFSET(0x1CA199F0)
#define RPG_CLIENT_GROWTHMODULE_GETAVATARPROGRESSIONLACKMATERIALS_OFFSET UNITYSDK_OFFSET(0x1CA19AF0)
#define RPG_CLIENT_GROWTHMODULE_GETAVATARPROGRESSIONPOTENTIALMATERIALS_OFFSET UNITYSDK_OFFSET(0x1CA1B080)
#define RPG_CLIENT_GROWTHMODULE_GETAVATARTRACETREEFARMGUIDES_OFFSET UNITYSDK_OFFSET(0x1CA1A1B0)
#define RPG_CLIENT_GROWTHMODULE_GETAVATARTRACETREELACKMATERIALS_OFFSET UNITYSDK_OFFSET(0x1CA1A2B0)
#define RPG_CLIENT_GROWTHMODULE_GETAVATARTRACETREEPOTENTIALMATERIALS_OFFSET UNITYSDK_OFFSET(0x1CA1B5E0)
#define RPG_CLIENT_GROWTHMODULE_GETGROWTHGUIDE_1_OFFSET UNITYSDK_OFFSET(0x1CA20860)
#define RPG_CLIENT_GROWTHMODULE_GETGROWTHGUIDE_OFFSET UNITYSDK_OFFSET(0x1CA20690)
#define RPG_CLIENT_GROWTHMODULE_GETLIGHTCONEPROGRESSIONFARMGUIDES_OFFSET UNITYSDK_OFFSET(0x1CA19D10)
#define RPG_CLIENT_GROWTHMODULE_GETLIGHTCONEPROGRESSIONLACKMATERIALS_OFFSET UNITYSDK_OFFSET(0x1CA19DD0)
#define RPG_CLIENT_GROWTHMODULE_GETLIGHTCONEPROGRESSIONPOTENTIALMATERIALS_OFFSET UNITYSDK_OFFSET(0x1CA1B830)
#define RPG_CLIENT_GROWTHMODULE_GETPOTENTIALGROWTHTARGETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CA1BFA0)
#define RPG_CLIENT_GROWTHMODULE_GET_FARMENTRY_OFFSET UNITYSDK_OFFSET(0x1CA20670)
#define RPG_CLIENT_GROWTHMODULE_GET_FARMFORAVATARID_OFFSET UNITYSDK_OFFSET(0x1CA20650)
#define RPG_CLIENT_GROWTHMODULE_ISAVATARGROWABLEMINIMUMSTEP_OFFSET UNITYSDK_OFFSET(0x1CA1C5B0)
#define RPG_CLIENT_GROWTHMODULE_SETAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x1CA20B60)
#define RPG_CLIENT_GROWTHMODULE_SETFARMCONTEXT_OFFSET UNITYSDK_OFFSET(0x1CA1D5E0)
#define RPG_CLIENT_GROWTHMODULE_SET_FARMENTRY_OFFSET UNITYSDK_OFFSET(0x1CA20680)
#define RPG_CLIENT_GROWTHMODULE_SET_FARMFORAVATARID_OFFSET UNITYSDK_OFFSET(0x1CA20660)
#define RPG_CLIENT_GROWTHMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x1CA20900)
#define RPG_CLIENT_GROWTHMODULE__ADDNEEDCOIN_OFFSET UNITYSDK_OFFSET(0x1CA20250)
#define RPG_CLIENT_GROWTHMODULE__COLLECTAVATARLEVELUPMATERIALSBYEXP_OFFSET UNITYSDK_OFFSET(0x1CA1CA80)
#define RPG_CLIENT_GROWTHMODULE__COLLECTAVATARLEVELUPMATERIALS_OFFSET UNITYSDK_OFFSET(0x1CA1A3E0)
#define RPG_CLIENT_GROWTHMODULE__COLLECTAVATARLEVELUPPOTENTIALMATERIALS_OFFSET UNITYSDK_OFFSET(0x1CA1B180)
#define RPG_CLIENT_GROWTHMODULE__COLLECTAVATARPROMOTIONMATERIALS_OFFSET UNITYSDK_OFFSET(0x1CA1A4B0)
#define RPG_CLIENT_GROWTHMODULE__COLLECTAVATARPROMOTIONPOTENTIALMATERIALS_OFFSET UNITYSDK_OFFSET(0x1CA1B470)
#define RPG_CLIENT_GROWTHMODULE__COLLECTLIGHTCONEEXPITEMS_OFFSET UNITYSDK_OFFSET(0x1CA1DFE0)
#define RPG_CLIENT_GROWTHMODULE__COLLECTLIGHTCONELEVELUPMATERIALS_OFFSET UNITYSDK_OFFSET(0x1CA1ABE0)
#define RPG_CLIENT_GROWTHMODULE__COLLECTLIGHTCONELEVELUPPOTENTIALMATERIALS_OFFSET UNITYSDK_OFFSET(0x1CA1B970)
#define RPG_CLIENT_GROWTHMODULE__COLLECTLIGHTCONEPROMOTIONMATERIALS_OFFSET UNITYSDK_OFFSET(0x1CA1AE70)
#define RPG_CLIENT_GROWTHMODULE__COLLECTLIGHTCONEPROMOTIONPOTENTIALMATERIALS_OFFSET UNITYSDK_OFFSET(0x1CA1B9C0)
#define RPG_CLIENT_GROWTHMODULE__COLLECTTRACENODELEVELUPMATERIALS_OFFSET UNITYSDK_OFFSET(0x1CA1DD50)
#define RPG_CLIENT_GROWTHMODULE__COLLECTTRACETREEPOTENTIALMATERIALS_OFFSET UNITYSDK_OFFSET(0x1CA1B6E0)
#define RPG_CLIENT_GROWTHMODULE__COLLECTTRACETREEPROGRESSIONMATERIALS_OFFSET UNITYSDK_OFFSET(0x1CA1AA40)
#define RPG_CLIENT_GROWTHMODULE__COMPAREGROWTHTARGETITEM_OFFSET UNITYSDK_OFFSET(0x1CA1F7F0)
#define RPG_CLIENT_GROWTHMODULE__CONVERTTOITEMCONFIGS_OFFSET UNITYSDK_OFFSET(0x1CA1E1C0)
#define RPG_CLIENT_GROWTHMODULE__GATHERMATERIALITEMSFORPRERELEASE_OFFSET UNITYSDK_OFFSET(0x1CA1D3F0)
#define RPG_CLIENT_GROWTHMODULE__GETALLGROWTHTARGETMATERIALFORPRERELEASE_OFFSET UNITYSDK_OFFSET(0x1CA1BD60)
#define RPG_CLIENT_GROWTHMODULE__GETAVATARDISPLAYEXPITEM_OFFSET UNITYSDK_OFFSET(0x1CA1D900)
#define RPG_CLIENT_GROWTHMODULE__GETDISPLAYEXPITEMID_OFFSET UNITYSDK_OFFSET(0x1CA204B0)
#define RPG_CLIENT_GROWTHMODULE__GETGROWTHGUIDE_OFFSET UNITYSDK_OFFSET(0x1CA206F0)
#define RPG_CLIENT_GROWTHMODULE__GETITEMCOMPOSEROWBYITEMID_OFFSET UNITYSDK_OFFSET(0x1CA1C430)
#define RPG_CLIENT_GROWTHMODULE__GETLIGHTCONECOCOONWORLD_OFFSET UNITYSDK_OFFSET(0x1CA19F10)
#define RPG_CLIENT_GROWTHMODULE__GETLIGHTCONEDISPLAYEXPITEM_OFFSET UNITYSDK_OFFSET(0x1CA1D990)
#define RPG_CLIENT_GROWTHMODULE__GETLIGHTCONEMAXPROMOTIONBYPLAYERPROGRESS_OFFSET UNITYSDK_OFFSET(0x1CA1AD00)
#define RPG_CLIENT_GROWTHMODULE__GETPOTENTIALGROWTHTARGETMATERIALFORPRERELEASE_OFFSET UNITYSDK_OFFSET(0x1CA1C110)
#define RPG_CLIENT_GROWTHMODULE__INSERTITEM_OFFSET UNITYSDK_OFFSET(0x1CA1C980)
#define RPG_CLIENT_GROWTHMODULE__ISNEEDEDITEMSALLGOT_OFFSET UNITYSDK_OFFSET(0x1CA1CC10)
#define RPG_CLIENT_GROWTHMODULE__REMOVEALREADYOWNEDITEMS_OFFSET UNITYSDK_OFFSET(0x1CA1E720)
#define RPG_CLIENT_GROWTHMODULE__REMOVECOMPOSABLEITEM_OFFSET UNITYSDK_OFFSET(0x1CA1F9E0)
#define RPG_CLIENT_GROWTHMODULE__SORTANDCLEAN_OFFSET UNITYSDK_OFFSET(0x1CA1A850)

namespace RPG::Client
{
	inline static constexpr unsigned int GrowthModule_TypeDefinitionIndex = 67520;

	class GrowthModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GrowthGuideData*>* _GrowthGuideByAvatarID; // 0x10
		::Il2CppArray<::System::Func_2<::System::UInt32, ::System::Boolean>*>* _ItemPriority; // 0x18
		::System::Boolean _AutoShowFlag; // 0x20
		::System::Byte _padding0[0x3];
		::RPG::Client::FarmEntrySource _FarmEntry_k__BackingField; // 0x24
		::System::UInt32 _FarmForAvatarID_k__BackingField; // 0x28
		// static const ::System::Object _TrackOfDestinyID; // 0x0
		// static const ::System::Object _CoinID; // 0x0
		// static const ::System::String* _AvatarDisplayExpItemKey; // 0x0
		// static const ::System::String* _LightConeDisplayExpItemKey; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FarmGuide*>* GetAvatarProgressionFarmGuides(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FarmGuide*>*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_GETAVATARPROGRESSIONFARMGUIDES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FarmGuide*>* GetLightConeProgressionFarmGuides(::RPG::Client::EquipmentItemData* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FarmGuide*>*(*)(::PVOID, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_GETLIGHTCONEPROGRESSIONFARMGUIDES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FarmGuide*>* GetAvatarTraceTreeFarmGuides(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FarmGuide*>*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_GETAVATARTRACETREEFARMGUIDES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* GetAvatarProgressionLackMaterials(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_GETAVATARPROGRESSIONLACKMATERIALS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* GetAvatarTraceTreeLackMaterials(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_GETAVATARTRACETREELACKMATERIALS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* GetLightConeProgressionLackMaterials(::RPG::Client::EquipmentItemData* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_GETLIGHTCONEPROGRESSIONLACKMATERIALS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAvatarProgressionPotentialMaterials(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_GETAVATARPROGRESSIONPOTENTIALMATERIALS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAvatarTraceTreePotentialMaterials(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_GETAVATARTRACETREEPOTENTIALMATERIALS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLightConeProgressionPotentialMaterials(::RPG::Client::EquipmentItemData* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_GETLIGHTCONEPROGRESSIONPOTENTIALMATERIALS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* GetAllGrowthTargetMaterial(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_GETALLGROWTHTARGETMATERIAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetPotentialGrowthTargetMaterial(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_GETPOTENTIALGROWTHTARGETMATERIAL_OFFSET))(this, a1);
		}

		::System::Boolean CheckComposableMaterialExist(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_CHECKCOMPOSABLEMATERIALEXIST_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsAvatarGrowableMinimumStep(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_ISAVATARGROWABLEMINIMUMSTEP_OFFSET))(this, a1);
		}

		::System::Void CheckAvatarSkillGrowableMinimumStep(::RPG::AvatarSystem::IAvatar* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::UInt32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_CHECKAVATARSKILLGROWABLEMINIMUMSTEP_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* _GetAllGrowthTargetMaterialForPreRelease(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GETALLGROWTHTARGETMATERIALFORPRERELEASE_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetPotentialGrowthTargetMaterialForPreRelease(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GETPOTENTIALGROWTHTARGETMATERIALFORPRERELEASE_OFFSET))(this, a1);
		}

		::System::Void SetFarmContext(::System::UInt32 a1, ::RPG::Client::FarmEntrySource a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::FarmEntrySource))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_SETFARMCONTEXT_OFFSET))(this, a1, a2);
		}

		::System::Void ClearFarmContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_CLEARFARMCONTEXT_OFFSET))(this);
		}

		static ::System::Void _CollectAvatarLevelUpMaterials(::RPG::AvatarSystem::IAvatar* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::RPG::AvatarSystem::IAvatar*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__COLLECTAVATARLEVELUPMATERIALS_OFFSET))(a1, a2);
		}

		static ::System::Void _CollectAvatarLevelUpMaterialsByExp(::System::UInt32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__COLLECTAVATARLEVELUPMATERIALSBYEXP_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _CollectAvatarPromotionMaterials(::RPG::AvatarSystem::IAvatar* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a4)
		{
			return ((::System::Void(*)(::RPG::AvatarSystem::IAvatar*, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__COLLECTAVATARPROMOTIONMATERIALS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void _CollectLightConeLevelUpMaterials(::RPG::Client::EquipmentItemData* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::RPG::Client::EquipmentItemData*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__COLLECTLIGHTCONELEVELUPMATERIALS_OFFSET))(a1, a2);
		}

		static ::System::Void _CollectLightConePromotionMaterials(::RPG::Client::EquipmentItemData* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a4)
		{
			return ((::System::Void(*)(::RPG::Client::EquipmentItemData*, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__COLLECTLIGHTCONEPROMOTIONMATERIALS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::UInt32 _GetLightConeMaxPromotionByPlayerProgress(::RPG::Client::EquipmentItemData* a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GETLIGHTCONEMAXPROMOTIONBYPLAYERPROGRESS_OFFSET))(a1);
		}

		static ::System::UInt32 _GetLightConeCocoonWorld()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GETLIGHTCONECOCOONWORLD_OFFSET))();
		}

		static ::System::Void _CollectTraceTreeProgressionMaterials(::RPG::AvatarSystem::IAvatar* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a4)
		{
			return ((::System::Void(*)(::RPG::AvatarSystem::IAvatar*, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__COLLECTTRACETREEPROGRESSIONMATERIALS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void _CollectTraceNodeLevelUpMaterials(::RPG::AvatarSystem::IAvatar* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a7)
		{
			return ((::System::Void(*)(::RPG::AvatarSystem::IAvatar*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__COLLECTTRACENODELEVELUPMATERIALS_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void _GatherMaterialItemsForPreRelease(::System::UInt32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GATHERMATERIALITEMSFORPRERELEASE_OFFSET))(this, a1, a2);
		}

		static ::System::Void _CollectAvatarLevelUpPotentialMaterials(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__COLLECTAVATARLEVELUPPOTENTIALMATERIALS_OFFSET))(a1);
		}

		static ::System::Void _CollectAvatarPromotionPotentialMaterials(::RPG::AvatarSystem::IAvatar* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::RPG::AvatarSystem::IAvatar*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__COLLECTAVATARPROMOTIONPOTENTIALMATERIALS_OFFSET))(a1, a2);
		}

		static ::System::Void _CollectLightConeLevelUpPotentialMaterials(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__COLLECTLIGHTCONELEVELUPPOTENTIALMATERIALS_OFFSET))(a1);
		}

		static ::System::Void _CollectLightConeExpItems(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__COLLECTLIGHTCONEEXPITEMS_OFFSET))(a1);
		}

		static ::System::Void _CollectLightConePromotionPotentialMaterials(::RPG::Client::EquipmentItemData* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::RPG::Client::EquipmentItemData*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__COLLECTLIGHTCONEPROMOTIONPOTENTIALMATERIALS_OFFSET))(a1, a2);
		}

		static ::System::Void _CollectTraceTreePotentialMaterials(::RPG::AvatarSystem::IAvatar* a1, ::System::Boolean a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::RPG::AvatarSystem::IAvatar*, ::System::Boolean, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__COLLECTTRACETREEPOTENTIALMATERIALS_OFFSET))(a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* _SortAndClean(::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* a1, ::System::Boolean a2, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>*, ::System::Boolean, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__SORTANDCLEAN_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* _ConvertToItemConfigs(::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__CONVERTTOITEMCONFIGS_OFFSET))(a1);
		}

		::System::Boolean _IsNeededItemsAllGot(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__ISNEEDEDITEMSALLGOT_OFFSET))(this, a1);
		}

		::System::Int32 _CompareGrowthTargetItem(::RPG::GameCore::ItemConfig* a1, ::RPG::GameCore::ItemConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ItemConfig*, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__COMPAREGROWTHTARGETITEM_OFFSET))(this, a1, a2);
		}

		::System::Void _RemoveAlreadyOwnedItems(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__REMOVEALREADYOWNEDITEMS_OFFSET))(this, a1);
		}

		::System::Void _RemoveComposableItem(::System::Collections::Generic::List_1<::RPG::GameCore::ItemComposeConfigRow*>* a1, ::System::Int32 a2, ::System::UInt32 a3, ::RPG::GameCore::ItemConfig* a4, ::System::Object* a5, ::System::Object* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemComposeConfigRow*>*, ::System::Int32, ::System::UInt32, ::RPG::GameCore::ItemConfig*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__REMOVECOMPOSABLEITEM_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _AddNeedCoin(::System::UInt32 a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__ADDNEEDCOIN_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::ItemComposeConfigRow* _GetItemComposeRowByItemID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ItemComposeConfigRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GETITEMCOMPOSEROWBYITEMID_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::AvatarExpItemConfigRow* _GetAvatarDisplayExpItem()
		{
			return ((::RPG::GameCore::AvatarExpItemConfigRow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GETAVATARDISPLAYEXPITEM_OFFSET))();
		}

		static ::RPG::GameCore::EquipmentExpItemRow* _GetLightConeDisplayExpItem()
		{
			return ((::RPG::GameCore::EquipmentExpItemRow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GETLIGHTCONEDISPLAYEXPITEM_OFFSET))();
		}

		static ::System::UInt32 _GetDisplayExpItemID(::System::String* a1)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GETDISPLAYEXPITEMID_OFFSET))(a1);
		}

		static ::System::Void _InsertItem(::System::UInt32 a1, ::System::UInt32 a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__INSERTITEM_OFFSET))(a1, a2, a3);
		}

		::System::UInt32 get_FarmForAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_GET_FARMFORAVATARID_OFFSET))(this);
		}

		::System::Void set_FarmForAvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_SET_FARMFORAVATARID_OFFSET))(this, a1);
		}

		::RPG::Client::FarmEntrySource get_FarmEntry()
		{
			return ((::RPG::Client::FarmEntrySource(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_GET_FARMENTRY_OFFSET))(this);
		}

		::System::Void set_FarmEntry(::RPG::Client::FarmEntrySource a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FarmEntrySource))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_SET_FARMENTRY_OFFSET))(this, a1);
		}

		::RPG::Client::GrowthGuideData* GetGrowthGuide(::System::UInt32 a1)
		{
			return ((::RPG::Client::GrowthGuideData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_GETGROWTHGUIDE_OFFSET))(this, a1);
		}

		::RPG::Client::GrowthGuideData* GetGrowthGuide_1(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::RPG::Client::GrowthGuideData*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_GETGROWTHGUIDE_1_OFFSET))(this, a1);
		}

		::RPG::Client::GrowthGuideData* _GetGrowthGuide(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::RPG::Client::GrowthGuideData*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE__GETGROWTHGUIDE_OFFSET))(this, a1);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void SetAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHMODULE_SETAUTOSHOW_OFFSET))(this);
		}

	};
}
