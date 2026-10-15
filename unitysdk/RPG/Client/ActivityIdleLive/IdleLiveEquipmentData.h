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

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_CREATEFROMQUESTEQUIP_OFFSET UNITYSDK_OFFSET(0xC4C6D90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_CREATEFROMSERVER_OFFSET UNITYSDK_OFFSET(0xC4C6300)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xC4C68E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_DEBUGADDAFFIX_OFFSET UNITYSDK_OFFSET(0xC4C7CE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GETAFFIXDATAS_OFFSET UNITYSDK_OFFSET(0xC4C7200)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GETEQUIPUIDATA_OFFSET UNITYSDK_OFFSET(0xC4C77F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GETEXTRAPOWER_OFFSET UNITYSDK_OFFSET(0xC4C6FF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xC4C62E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xC4C61D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC4C61B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xC4C61F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_RARITYDATA_OFFSET UNITYSDK_OFFSET(0xC4C6250)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xC4C61C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xC4C6210)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_SPECIALEQUIPEXTRADATA_OFFSET UNITYSDK_OFFSET(0xC4C6230)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xC4C6190)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_MERGEPROPERTY_OFFSET UNITYSDK_OFFSET(0xC4C7240)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xC4C62F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xC4C61E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xC4C6200)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xC4C6220)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_SPECIALEQUIPEXTRADATA_OFFSET UNITYSDK_OFFSET(0xC4C6240)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_SET_TITLE_OFFSET UNITYSDK_OFFSET(0xC4C61A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC4C7DE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA__INITAFFIXES_OFFSET UNITYSDK_OFFSET(0xC4C6B70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPMENTDATA__INITSPECIALEQUIPEXTRADATA_OFFSET UNITYSDK_OFFSET(0xC4C6D40)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveEquipmentData_TypeDefinitionIndex = 75330;

	class IdleLiveEquipmentData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HIAHLINDEHP*>* _AffixDatas; // 0x10
		::System::String* _ImagePath_k__BackingField; // 0x18
		::OHAPDILPEAO _RarityData; // 0x20
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal _LevelExtraPower; // 0x80
		::FAPHHBABPCF* _SpecialEquipExtraData_k__BackingField; // 0x98
		::RPG::Client::TextID _Title_k__BackingField; // 0xA0
		::RPG::Client::TextID _Position_k__BackingField; // 0xB0
		::System::UInt32 _SlotIndex_k__BackingField; // 0xC0
		::System::UInt32 _Rarity_k__BackingField; // 0xC4
		::System::UInt32 _Id_k__BackingField; // 0xC8
		::System::UInt32 _Id; // 0xCC
		::System::UInt32 _Level_k__BackingField; // 0xD0
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
