#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/CombatPowerLightconeRarityType.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class AvatarPath; }
namespace RPG::Client { class EquipmentData; }
namespace RPG::GameCore { class EquipmentRow; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { template <typename T1, typename T2> class ConditionalWeakTable_2; }

#define RPG_CLIENT_EQUIPMENTDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0xD7D8BB0)
#define RPG_CLIENT_EQUIPMENTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD7D8480)
#define RPG_CLIENT_EQUIPMENTDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0xD7D88F0)
#define RPG_CLIENT_EQUIPMENTDATA_GET_AVATARDETAILOFFSET_OFFSET UNITYSDK_OFFSET(0xD7D8B80)
#define RPG_CLIENT_EQUIPMENTDATA_GET_AVATARPATH_OFFSET UNITYSDK_OFFSET(0xD7D8AD0)
#define RPG_CLIENT_EQUIPMENTDATA_GET_BATTLEDIALOGOFFSET_OFFSET UNITYSDK_OFFSET(0xD7D8B90)
#define RPG_CLIENT_EQUIPMENTDATA_GET_COINCOST_OFFSET UNITYSDK_OFFSET(0xD7D8B30)
#define RPG_CLIENT_EQUIPMENTDATA_GET_EQUIPMENTDESC_OFFSET UNITYSDK_OFFSET(0xD7D8AB0)
#define RPG_CLIENT_EQUIPMENTDATA_GET_EQUIPMENTID_OFFSET UNITYSDK_OFFSET(0xD7D8A80)
#define RPG_CLIENT_EQUIPMENTDATA_GET_EQUIPMENTNAME_OFFSET UNITYSDK_OFFSET(0xD7D8AA0)
#define RPG_CLIENT_EQUIPMENTDATA_GET_EXPPROVIDE_OFFSET UNITYSDK_OFFSET(0xD7D8B20)
#define RPG_CLIENT_EQUIPMENTDATA_GET_EXPTYPE_OFFSET UNITYSDK_OFFSET(0xD7D8B00)
#define RPG_CLIENT_EQUIPMENTDATA_GET_GACHARESULTOFFSET_OFFSET UNITYSDK_OFFSET(0xD7D8BA0)
#define RPG_CLIENT_EQUIPMENTDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD7D8B60)
#define RPG_CLIENT_EQUIPMENTDATA_GET_ITEMRIGHTPANELOFFSET_OFFSET UNITYSDK_OFFSET(0xD7D8B70)
#define RPG_CLIENT_EQUIPMENTDATA_GET_MAXPROMOTION_OFFSET UNITYSDK_OFFSET(0xD7D8AE0)
#define RPG_CLIENT_EQUIPMENTDATA_GET_MAXRANK_OFFSET UNITYSDK_OFFSET(0xD7D8AF0)
#define RPG_CLIENT_EQUIPMENTDATA_GET_RANKUPCOSTLIST_OFFSET UNITYSDK_OFFSET(0xD7D8B40)
#define RPG_CLIENT_EQUIPMENTDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xD7D8AC0)
#define RPG_CLIENT_EQUIPMENTDATA_GET_RELEASE_OFFSET UNITYSDK_OFFSET(0xD7D8A90)
#define RPG_CLIENT_EQUIPMENTDATA_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xD7D8B10)
#define RPG_CLIENT_EQUIPMENTDATA_GET_THUMBNAILPATH_OFFSET UNITYSDK_OFFSET(0xD7D8B50)
#define RPG_CLIENT_EQUIPMENTDATA__CREATEDATA_OFFSET UNITYSDK_OFFSET(0xD7D8A20)

namespace RPG::Client
{
	inline static constexpr unsigned int EquipmentData_TypeDefinitionIndex = 67600;

	class EquipmentData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* _GachaResultOffset_k__BackingField; // 0x10
		::Il2CppArray<::System::Single>* _AvatarDetailOffset_k__BackingField; // 0x18
		::RPG::AvatarSystem::AvatarPath* _AvatarPath_k__BackingField; // 0x20
		::System::String* _ImagePath_k__BackingField; // 0x28
		::Il2CppArray<::System::Single>* _BattleDialogOffset_k__BackingField; // 0x30
		::Il2CppArray<::System::Single>* _ItemRightPanelOffset_k__BackingField; // 0x38
		::Il2CppArray<::System::UInt32>* _RankUpCostList_k__BackingField; // 0x40
		::System::String* _ThumbnailPath_k__BackingField; // 0x48
		::System::UInt32 _CoinCost_k__BackingField; // 0x50
		::System::UInt32 _MaxPromotion_k__BackingField; // 0x54
		::RPG::Client::TextID _EquipmentDesc_k__BackingField; // 0x58
		::RPG::Client::TextID _EquipmentName_k__BackingField; // 0x68
		::System::UInt32 _SkillID_k__BackingField; // 0x78
		::RPG::GameCore::CombatPowerLightconeRarityType _Rarity_k__BackingField; // 0x7C
		::System::UInt32 _ExpProvide_k__BackingField; // 0x80
		::System::Boolean _Release_k__BackingField; // 0x84
		::System::Byte _padding0[0x3];
		::System::UInt32 _ExpType_k__BackingField; // 0x88
		::System::UInt32 _EquipmentID_k__BackingField; // 0x8C
		::System::UInt32 _MaxRank_k__BackingField; // 0x90
		static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::RPG::GameCore::EquipmentRow*, ::RPG::Client::EquipmentData*>** StaticGet__Cache()
		{
			return (::System::Runtime::CompilerServices::ConditionalWeakTable_2<::RPG::GameCore::EquipmentRow*, ::RPG::Client::EquipmentData*>**)UnitySDK::FromName("RPG.Client", "EquipmentData")->GetStaticField(0x4CBD0);
		}

		::System::Void _ctor(::RPG::GameCore::EquipmentRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EquipmentRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTDATA_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTDATA_CCTOR_OFFSET))();
		}

		static ::RPG::Client::EquipmentData* GetData(::System::UInt32 a1)
		{
			return ((::RPG::Client::EquipmentData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTDATA_GETDATA_OFFSET))(a1);
		}

		static ::RPG::Client::EquipmentData* _CreateData(::RPG::GameCore::EquipmentRow* a1)
		{
			return ((::RPG::Client::EquipmentData*(*)(::RPG::GameCore::EquipmentRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTDATA__CREATEDATA_OFFSET))(a1);
		}

		::System::UInt32 get_EquipmentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTDATA_GET_EQUIPMENTID_OFFSET))(this);
		}

		::System::Boolean get_Release()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTDATA_GET_RELEASE_OFFSET))(this);
		}

		::RPG::Client::TextID get_EquipmentName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTDATA_GET_EQUIPMENTNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_EquipmentDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTDATA_GET_EQUIPMENTDESC_OFFSET))(this);
		}

		::RPG::GameCore::CombatPowerLightconeRarityType get_Rarity()
		{
			return ((::RPG::GameCore::CombatPowerLightconeRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTDATA_GET_RARITY_OFFSET))(this);
		}

		::RPG::AvatarSystem::AvatarPath* get_AvatarPath()
		{
			return ((::RPG::AvatarSystem::AvatarPath*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTDATA_GET_AVATARPATH_OFFSET))(this);
		}

		::System::UInt32 get_MaxPromotion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTDATA_GET_MAXPROMOTION_OFFSET))(this);
		}

		::System::UInt32 get_MaxRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTDATA_GET_MAXRANK_OFFSET))(this);
		}

		::System::UInt32 get_ExpType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTDATA_GET_EXPTYPE_OFFSET))(this);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTDATA_GET_SKILLID_OFFSET))(this);
		}

		::System::UInt32 get_ExpProvide()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTDATA_GET_EXPPROVIDE_OFFSET))(this);
		}

		::System::UInt32 get_CoinCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTDATA_GET_COINCOST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RankUpCostList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTDATA_GET_RANKUPCOSTLIST_OFFSET))(this);
		}

		::System::String* get_ThumbnailPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTDATA_GET_THUMBNAILPATH_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTDATA_GET_IMAGEPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* get_ItemRightPanelOffset()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTDATA_GET_ITEMRIGHTPANELOFFSET_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* get_AvatarDetailOffset()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTDATA_GET_AVATARDETAILOFFSET_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* get_BattleDialogOffset()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTDATA_GET_BATTLEDIALOGOFFSET_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* get_GachaResultOffset()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTDATA_GET_GACHARESULTOFFSET_OFFSET))(this);
		}

	};
}
