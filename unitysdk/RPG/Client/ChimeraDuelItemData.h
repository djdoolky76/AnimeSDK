#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelItemType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelItemVendor.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class FNGKJFAMKLI;
namespace RPG::Client { class ChimeraDuelItemData; }
namespace RPG::Client { class IChimeraDuelSkillData; }
namespace RPG::GameCore { class ChimeraDuelItemRow; }
namespace System { class String; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_CHIMERADUELITEMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E001C30)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET_EFFECTDATA_OFFSET UNITYSDK_OFFSET(0x1DFFA880)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET_EFFECTID_OFFSET UNITYSDK_OFFSET(0x1E001750)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET_EQUIPMENTATTACK_OFFSET UNITYSDK_OFFSET(0x1DFF9D40)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET_EQUIPMENTHEALTH_OFFSET UNITYSDK_OFFSET(0x1DFF9F70)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET_EQUIPMENTICON_OFFSET UNITYSDK_OFFSET(0x1E001B60)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1DFE5BD0)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET_ISMULTITARGET_OFFSET UNITYSDK_OFFSET(0x1E0017A0)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E0015F0)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET_PRICE_OFFSET UNITYSDK_OFFSET(0x1DFFCD90)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1DFE5B80)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET_SHOPICON_OFFSET UNITYSDK_OFFSET(0x1E001B10)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET_SKILLDATA_OFFSET UNITYSDK_OFFSET(0x1E001870)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET_SKILLIDS_OFFSET UNITYSDK_OFFSET(0x1E001700)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E001660)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET_VENDOR_OFFSET UNITYSDK_OFFSET(0x1E0016B0)
#define RPG_CLIENT_CHIMERADUELITEMDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1E0015E0)
#define RPG_CLIENT_CHIMERADUELITEMDATA_TRYCREATE_OFFSET UNITYSDK_OFFSET(0x1E001BB0)
#define RPG_CLIENT_CHIMERADUELITEMDATA_TRYGETBATTLESKILLDATA_OFFSET UNITYSDK_OFFSET(0x1E001F90)
#define RPG_CLIENT_CHIMERADUELITEMDATA_TRYGETSHOPSKILLDATA_OFFSET UNITYSDK_OFFSET(0x1E001E40)
#define RPG_CLIENT_CHIMERADUELITEMDATA_TRYGETSKILLDATAFORDISPLAY_OFFSET UNITYSDK_OFFSET(0x1E0020E0)
#define RPG_CLIENT_CHIMERADUELITEMDATA__TRYGETFIRSTSKILLDATA_OFFSET UNITYSDK_OFFSET(0x1E001C70)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelItemData_TypeDefinitionIndex = 64802;

	class ChimeraDuelItemData : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::IChimeraDuelSkillData*>* _SkillData; // 0x10
		::RPG::GameCore::ChimeraDuelItemRow* __Row_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChimeraDuelItemRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraDuelItemRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET__ROW_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraDuelItemType get_Type()
		{
			return ((::RPG::GameCore::ChimeraDuelItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET_TYPE_OFFSET))(this);
		}

		::System::UInt32 get_Price()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET_PRICE_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET_RARITY_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraDuelItemVendor get_Vendor()
		{
			return ((::RPG::GameCore::ChimeraDuelItemVendor(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET_VENDOR_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_SkillIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET_SKILLIDS_OFFSET))(this);
		}

		::System::UInt32 get_EffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET_EFFECTID_OFFSET))(this);
		}

		::FNGKJFAMKLI* get_EffectData()
		{
			return ((::FNGKJFAMKLI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET_EFFECTDATA_OFFSET))(this);
		}

		::System::Boolean get_IsMultiTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET_ISMULTITARGET_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::IChimeraDuelSkillData*>* get_SkillData()
		{
			return ((::Il2CppArray<::RPG::Client::IChimeraDuelSkillData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET_SKILLDATA_OFFSET))(this);
		}

		::System::String* get_ShopIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET_SHOPICON_OFFSET))(this);
		}

		::System::String* get_EquipmentIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET_EQUIPMENTICON_OFFSET))(this);
		}

		::System::Int32 get_EquipmentAttack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET_EQUIPMENTATTACK_OFFSET))(this);
		}

		::System::Int32 get_EquipmentHealth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_GET_EQUIPMENTHEALTH_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraDuelItemData* TryCreate(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraDuelItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_TRYCREATE_OFFSET))(a1);
		}

		::RPG::Client::IChimeraDuelSkillData* _TryGetFirstSkillData(::System::Predicate_1<::RPG::Client::IChimeraDuelSkillData*>* a1)
		{
			return ((::RPG::Client::IChimeraDuelSkillData*(*)(::PVOID, ::System::Predicate_1<::RPG::Client::IChimeraDuelSkillData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA__TRYGETFIRSTSKILLDATA_OFFSET))(this, a1);
		}

		::RPG::Client::IChimeraDuelSkillData* TryGetShopSkillData()
		{
			return ((::RPG::Client::IChimeraDuelSkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_TRYGETSHOPSKILLDATA_OFFSET))(this);
		}

		::RPG::Client::IChimeraDuelSkillData* TryGetBattleSkillData()
		{
			return ((::RPG::Client::IChimeraDuelSkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_TRYGETBATTLESKILLDATA_OFFSET))(this);
		}

		::RPG::Client::IChimeraDuelSkillData* TryGetSkillDataForDisplay()
		{
			return ((::RPG::Client::IChimeraDuelSkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA_TRYGETSKILLDATAFORDISPLAY_OFFSET))(this);
		}

	};
}
