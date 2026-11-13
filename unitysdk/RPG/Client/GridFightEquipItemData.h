#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightAddItemSourceType.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"
class ALJDCNLAICE;
class DIPDKGBFGFD;
class HJOACINCPAG;
class IJDLENJJBHJ;
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightHackEquipEffect; }
namespace RPG::Client { class GridFightItemFrameInfo; }
namespace RPG::Client { class GridFightRoleProperty; }
namespace RPG::GameCore { class BattleGridFightEquipData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFORDISPLAY_1_OFFSET UNITYSDK_OFFSET(0x1D17F740)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFORDISPLAY_2_OFFSET UNITYSDK_OFFSET(0x1D17F890)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFORDISPLAY_OFFSET UNITYSDK_OFFSET(0x1D1598F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFORELATIONLAUGHPOINT_1_OFFSET UNITYSDK_OFFSET(0x1D17F830)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFORELATIONLAUGHPOINT_OFFSET UNITYSDK_OFFSET(0x1D15B9C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFORTEAM_OFFSET UNITYSDK_OFFSET(0x1D175CD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFROMBATTLE_OFFSET UNITYSDK_OFFSET(0x1D17F0E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFROMSERVER_OFFSET UNITYSDK_OFFSET(0x1D17A3E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D17F050)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GETDISPLAYPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0x1D1801A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GETEFFECTTRAITID_OFFSET UNITYSDK_OFFSET(0x1D16FC70)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_ADDITIONALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1D17F700)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_CANBEROLL_OFFSET UNITYSDK_OFFSET(0x1D17FBE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_CANSELL_OFFSET UNITYSDK_OFFSET(0x1D17FB70)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1D17FC90)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_EQUIPITEMCONFIG_OFFSET UNITYSDK_OFFSET(0x1D17FEA0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_EQUIPPEDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1D16FDB0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_EXTRADESCLIST_OFFSET UNITYSDK_OFFSET(0x1D17FEE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_EXTRADESCPROVIDER_OFFSET UNITYSDK_OFFSET(0x1D17FEC0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_FRAMEINFOPROVIDER_OFFSET UNITYSDK_OFFSET(0x1D180070)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_FRAMEINFO_OFFSET UNITYSDK_OFFSET(0x1D178440)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_HACKEFFECT_OFFSET UNITYSDK_OFFSET(0x1D1816F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_HASOWNER_OFFSET UNITYSDK_OFFSET(0x1D167B20)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_ISDISPLAYSPECIALPARAM_OFFSET UNITYSDK_OFFSET(0x1D1813C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_ISDRESSED_OFFSET UNITYSDK_OFFSET(0x1D17FB30)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_ISTEMPORARY_OFFSET UNITYSDK_OFFSET(0x1D17FB10)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1D17FAD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_SELLPRICE_OFFSET UNITYSDK_OFFSET(0x1D17FB50)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x1D17FBC0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_SPECIALDISPLAYPARAM_OFFSET UNITYSDK_OFFSET(0x1D181270)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1D17FAF0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_ISPANDORA_OFFSET UNITYSDK_OFFSET(0x1D180090)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_NOTIFYSPECIALDISPLAYPARAMCHANGED_OFFSET UNITYSDK_OFFSET(0x1D17B180)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_REMOVEEQUIPPED_OFFSET UNITYSDK_OFFSET(0x1D16DE60)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SETEQUIPPEDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1D16D160)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_ADDITIONALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1D17F670)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_EQUIPITEMCONFIG_OFFSET UNITYSDK_OFFSET(0x1D17FEB0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_EQUIPPEDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1D17FA40)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_EXTRADESCPROVIDER_OFFSET UNITYSDK_OFFSET(0x1D17FED0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_FRAMEINFOPROVIDER_OFFSET UNITYSDK_OFFSET(0x1D180080)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_HACKEFFECT_OFFSET UNITYSDK_OFFSET(0x1D181700)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_ISDRESSED_OFFSET UNITYSDK_OFFSET(0x1D17FB40)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_ISTEMPORARY_OFFSET UNITYSDK_OFFSET(0x1D17FB20)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1D17FAE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_SELLPRICE_OFFSET UNITYSDK_OFFSET(0x1D17FB60)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x1D17FBD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1D17FB00)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1D17A100)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA__GETDESC_OFFSET UNITYSDK_OFFSET(0x1D17FCE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA__SHOULDHIDECIPHERSPECIALDISPLAYPARAM_OFFSET UNITYSDK_OFFSET(0x1D181450)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipItemData_TypeDefinitionIndex = 66560;

	class GridFightEquipItemData : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* _AdditionalProperties; // 0x18
		::HJOACINCPAG* _SpecialDisplayParamProvider; // 0x20
		::RPG::Client::GridFightHackEquipEffect* _HackEffect_k__BackingField; // 0x28
		::DIPDKGBFGFD* _ExtraDescProvider_k__BackingField; // 0x30
		::RPG::Client::GridFightEquipItemConfig* _EquipItemConfig_k__BackingField; // 0x38
		::ALJDCNLAICE* _FrameInfoProvider_k__BackingField; // 0x40
		::System::UInt32 _UniqueID_k__BackingField; // 0x48
		::RPG::GameCore::GridFightAddItemSourceType _SourceType_k__BackingField; // 0x4C
		::System::Boolean _IsTemporary_k__BackingField; // 0x50
		::System::Boolean _IsDressed_k__BackingField; // 0x51
		::System::Byte _padding0[0x2];
		::System::UInt32 _ItemID_k__BackingField; // 0x54
		::System::UInt32 _EquippedUniqueID; // 0x58
		::System::UInt32 _SellPrice_k__BackingField; // 0x5C
		// static const ::System::Object TraitEffectAddItemSourceType; // 0x0
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightEquipItemData* CreateFromServer(::IJDLENJJBHJ* a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::IJDLENJJBHJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFROMSERVER_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightEquipItemData* CreateFromBattle(::RPG::GameCore::BattleGridFightEquipData* a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::RPG::GameCore::BattleGridFightEquipData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFROMBATTLE_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightEquipItemData* CreateForDisplay(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFORDISPLAY_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightEquipItemData* CreateForTeam(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFORTEAM_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightEquipItemData* CreateForElationLaughPoint(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFORELATIONLAUGHPOINT_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightEquipItemData* CreateForElationLaughPoint_1(::System::UInt32 a1, ::ALJDCNLAICE* a2)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::System::UInt32, ::ALJDCNLAICE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFORELATIONLAUGHPOINT_1_OFFSET))(a1, a2);
		}

		static ::RPG::Client::GridFightEquipItemData* CreateForDisplay_1(::System::UInt32 a1, ::ALJDCNLAICE* a2)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::System::UInt32, ::ALJDCNLAICE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFORDISPLAY_1_OFFSET))(a1, a2);
		}

		static ::RPG::Client::GridFightEquipItemData* CreateForDisplay_2(::System::UInt32 a1, ::ALJDCNLAICE* a2, ::DIPDKGBFGFD* a3)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::System::UInt32, ::ALJDCNLAICE*, ::DIPDKGBFGFD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFORDISPLAY_2_OFFSET))(a1, a2, a3);
		}

		::System::Void Sync(::IJDLENJJBHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJDLENJJBHJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void NotifySpecialDisplayParamChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_NOTIFYSPECIALDISPLAYPARAMCHANGED_OFFSET))(this);
		}

		::System::Void SetEquippedUniqueID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SETEQUIPPEDUNIQUEID_OFFSET))(this, a1);
		}

		::System::Void RemoveEquipped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_REMOVEEQUIPPED_OFFSET))(this);
		}

		::System::UInt32 GetEffectTraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GETEFFECTTRAITID_OFFSET))(this);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_ITEMID_OFFSET))(this, a1);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_UNIQUEID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTemporary()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_ISTEMPORARY_OFFSET))(this);
		}

		::System::Void set_IsTemporary(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_ISTEMPORARY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_ISDRESSED_OFFSET))(this);
		}

		::System::Void set_IsDressed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_ISDRESSED_OFFSET))(this, a1);
		}

		::System::UInt32 get_SellPrice()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_SELLPRICE_OFFSET))(this);
		}

		::System::Void set_SellPrice(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_SELLPRICE_OFFSET))(this, a1);
		}

		::System::Boolean get_CanSell()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_CANSELL_OFFSET))(this);
		}

		::RPG::GameCore::GridFightAddItemSourceType get_SourceType()
		{
			return ((::RPG::GameCore::GridFightAddItemSourceType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_SOURCETYPE_OFFSET))(this);
		}

		::System::Void set_SourceType(::RPG::GameCore::GridFightAddItemSourceType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightAddItemSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_SOURCETYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_CanBeRoll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_CANBEROLL_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_DESC_OFFSET))(this);
		}

		::System::String* _GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA__GETDESC_OFFSET))(this);
		}

		::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* get_AdditionalProperties()
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_ADDITIONALPROPERTIES_OFFSET))(this);
		}

		::System::Void set_AdditionalProperties(::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_ADDITIONALPROPERTIES_OFFSET))(this, a1);
		}

		::System::Boolean get_HasOwner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_HASOWNER_OFFSET))(this);
		}

		::System::UInt32 get_EquippedUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_EQUIPPEDUNIQUEID_OFFSET))(this);
		}

		::System::Void set_EquippedUniqueID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_EQUIPPEDUNIQUEID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemConfig* get_EquipItemConfig()
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_EQUIPITEMCONFIG_OFFSET))(this);
		}

		::System::Void set_EquipItemConfig(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_EQUIPITEMCONFIG_OFFSET))(this, a1);
		}

		::DIPDKGBFGFD* get_ExtraDescProvider()
		{
			return ((::DIPDKGBFGFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_EXTRADESCPROVIDER_OFFSET))(this);
		}

		::System::Void set_ExtraDescProvider(::DIPDKGBFGFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIPDKGBFGFD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_EXTRADESCPROVIDER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_ExtraDescList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_EXTRADESCLIST_OFFSET))(this);
		}

		::ALJDCNLAICE* get_FrameInfoProvider()
		{
			return ((::ALJDCNLAICE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_FRAMEINFOPROVIDER_OFFSET))(this);
		}

		::System::Void set_FrameInfoProvider(::ALJDCNLAICE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALJDCNLAICE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_FRAMEINFOPROVIDER_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightItemFrameInfo* get_FrameInfo()
		{
			return ((::RPG::Client::GridFightItemFrameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_FRAMEINFO_OFFSET))(this);
		}

		::System::Boolean IsPandora()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_ISPANDORA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>* GetDisplayPropertyList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GETDISPLAYPROPERTYLIST_OFFSET))(this);
		}

		::System::UInt32 get_SpecialDisplayParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_SPECIALDISPLAYPARAM_OFFSET))(this);
		}

		::System::Boolean get_IsDisplaySpecialParam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_ISDISPLAYSPECIALPARAM_OFFSET))(this);
		}

		::System::Boolean _ShouldHideCipherSpecialDisplayParam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA__SHOULDHIDECIPHERSPECIALDISPLAYPARAM_OFFSET))(this);
		}

		::RPG::Client::GridFightHackEquipEffect* get_HackEffect()
		{
			return ((::RPG::Client::GridFightHackEquipEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_HACKEFFECT_OFFSET))(this);
		}

		::System::Void set_HackEffect(::RPG::Client::GridFightHackEquipEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightHackEquipEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_HACKEFFECT_OFFSET))(this, a1);
		}

	};
}
