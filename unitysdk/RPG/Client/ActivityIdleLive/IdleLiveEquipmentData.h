#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OHAPDILPEAO.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/EquipUiData.h"
#include "unitysdk/System/ValueTuple_2.h"
class CBNNMKNBLDI;
class FAPHHBABPCF;
class HIAHLINDEHP;
namespace RPG::Client::ActivityIdleLive { class IdleLiveEquipmentData; }
namespace RPG::GameCore { class IdleLiveEquipRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_CREATEFROMQUESTEQUIP_OFFSET UNITYSDK_OFFSET(0xCDC56C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_CREATEFROMSERVER_OFFSET UNITYSDK_OFFSET(0xCDC4C30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xCDC5210)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_DEBUGADDAFFIX_OFFSET UNITYSDK_OFFSET(0xCDC6630)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GETAFFIXDATAS_OFFSET UNITYSDK_OFFSET(0xCDC5B20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GETEQUIPUIDATA_OFFSET UNITYSDK_OFFSET(0xCDC6130)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GETEXTRAPOWER_OFFSET UNITYSDK_OFFSET(0xCDC5920)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xCDC4C10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xCDC4B00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xCDC4AE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xCDC4B20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_RARITYDATA_OFFSET UNITYSDK_OFFSET(0xCDC4B80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xCDC4AF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xCDC4B40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_SPECIALEQUIPEXTRADATA_OFFSET UNITYSDK_OFFSET(0xCDC4B60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xCDC4AC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_MERGEPROPERTY_OFFSET UNITYSDK_OFFSET(0xCDC5B70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xCDC4C20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xCDC4B10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xCDC4B30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xCDC4B50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_SPECIALEQUIPEXTRADATA_OFFSET UNITYSDK_OFFSET(0xCDC4B70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_TITLE_OFFSET UNITYSDK_OFFSET(0xCDC4AD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xCDC6740)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA__INITAFFIXES_OFFSET UNITYSDK_OFFSET(0xCDC54A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA__INITSPECIALEQUIPEXTRADATA_OFFSET UNITYSDK_OFFSET(0xCDC5670)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveEquipmentData_TypeDefinitionIndex = 77658;

	class IdleLiveEquipmentData : public ::System::Object
	{
	public:
		::OHAPDILPEAO _RarityData; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal _LevelExtraPower; // 0x70
		::System::Collections::Generic::List_1<::HIAHLINDEHP*>* _AffixDatas; // 0x88
		::System::String* _ImagePath_k__BackingField; // 0x90
		::FAPHHBABPCF* _SpecialEquipExtraData_k__BackingField; // 0x98
		::RPG::Client::TextID _Position_k__BackingField; // 0xA0
		::System::UInt32 _Id; // 0xB0
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _Title_k__BackingField; // 0xB8
		::System::UInt32 _Id_k__BackingField; // 0xC8
		::System::UInt32 _Rarity_k__BackingField; // 0xCC
		::System::UInt32 _SlotIndex_k__BackingField; // 0xD0
		::System::UInt32 _Level_k__BackingField; // 0xD4
		::System::Void _ctor(::RPG::GameCore::IdleLiveEquipRow* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveEquipRow*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_TITLE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_RARITY_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::Void set_ImagePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_IMAGEPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Position()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_POSITION_OFFSET))(this, a1);
		}

		::System::UInt32 get_SlotIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_SLOTINDEX_OFFSET))(this);
		}

		::System::Void set_SlotIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_SLOTINDEX_OFFSET))(this, a1);
		}

		::FAPHHBABPCF* get_SpecialEquipExtraData()
		{
			return ((::FAPHHBABPCF*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_SPECIALEQUIPEXTRADATA_OFFSET))(this);
		}

		::System::Void set_SpecialEquipExtraData(::FAPHHBABPCF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAPHHBABPCF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_SPECIALEQUIPEXTRADATA_OFFSET))(this, a1);
		}

		::OHAPDILPEAO get_RarityData()
		{
			return ((::OHAPDILPEAO(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_RARITYDATA_OFFSET))(this);
		}

		::System::UInt32 get_Id()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_ID_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* CreateFromServer(::CBNNMKNBLDI* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*(*)(::CBNNMKNBLDI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_CREATEFROMSERVER_OFFSET))(a1);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* CreateFromQuestEquip(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_CREATEFROMQUESTEQUIP_OFFSET))(a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal GetExtraPower()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GETEXTRAPOWER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::HIAHLINDEHP*>* GetAffixDatas()
		{
			return ((::System::Collections::Generic::List_1<::HIAHLINDEHP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GETAFFIXDATAS_OFFSET))(this);
		}

		::System::Void _InitAffixes(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA__INITAFFIXES_OFFSET))(this, a1);
		}

		::System::Void _InitSpecialEquipExtraData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA__INITSPECIALEQUIPEXTRADATA_OFFSET))(this);
		}

		::System::Void MergeProperty(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_MERGEPROPERTY_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::EquipUiData GetEquipUiData()
		{
			return ((::RPG::Client::ActivityIdleLive::EquipUiData(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GETEQUIPUIDATA_OFFSET))(this);
		}

		::System::Void DebugAddAffix(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_DEBUGADDAFFIX_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_TOSTRING_OFFSET))(this);
		}

	};
}
