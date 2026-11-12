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

#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFORDISPLAY_1_OFFSET UNITYSDK_OFFSET(0xDADEF50)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFORDISPLAY_2_OFFSET UNITYSDK_OFFSET(0xDADF0A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFORDISPLAY_OFFSET UNITYSDK_OFFSET(0xDAB9150)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFORELATIONLAUGHPOINT_1_OFFSET UNITYSDK_OFFSET(0xDADF040)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFORELATIONLAUGHPOINT_OFFSET UNITYSDK_OFFSET(0xDABB220)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFORTEAM_OFFSET UNITYSDK_OFFSET(0xDAD5550)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFROMBATTLE_OFFSET UNITYSDK_OFFSET(0xDADE8F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CREATEFROMSERVER_OFFSET UNITYSDK_OFFSET(0xDAD9BF0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDADE860)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GETDISPLAYPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0xDADF9A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GETEFFECTTRAITID_OFFSET UNITYSDK_OFFSET(0xDACF4E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_ADDITIONALPROPERTIES_OFFSET UNITYSDK_OFFSET(0xDADEF10)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_CANBEROLL_OFFSET UNITYSDK_OFFSET(0xDADF3F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_CANSELL_OFFSET UNITYSDK_OFFSET(0xDADF380)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xDADF490)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_EQUIPITEMCONFIG_OFFSET UNITYSDK_OFFSET(0xDADF6A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_EQUIPPEDUNIQUEID_OFFSET UNITYSDK_OFFSET(0xDACF620)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_EXTRADESCLIST_OFFSET UNITYSDK_OFFSET(0xDADF6E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_EXTRADESCPROVIDER_OFFSET UNITYSDK_OFFSET(0xDADF6C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_FRAMEINFOPROVIDER_OFFSET UNITYSDK_OFFSET(0xDADF870)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_FRAMEINFO_OFFSET UNITYSDK_OFFSET(0xDAD7C50)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_HACKEFFECT_OFFSET UNITYSDK_OFFSET(0xDAE0F00)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_HASOWNER_OFFSET UNITYSDK_OFFSET(0xDAC7370)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_ISDISPLAYSPECIALPARAM_OFFSET UNITYSDK_OFFSET(0xDAE0BD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_ISDRESSED_OFFSET UNITYSDK_OFFSET(0xDADF340)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_ISTEMPORARY_OFFSET UNITYSDK_OFFSET(0xDADF320)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xDADF2E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_SELLPRICE_OFFSET UNITYSDK_OFFSET(0xDADF360)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xDADF3D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_SPECIALDISPLAYPARAM_OFFSET UNITYSDK_OFFSET(0xDAE0A80)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xDADF300)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_ISPANDORA_OFFSET UNITYSDK_OFFSET(0xDADF890)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_NOTIFYSPECIALDISPLAYPARAMCHANGED_OFFSET UNITYSDK_OFFSET(0xDADA990)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_REMOVEEQUIPPED_OFFSET UNITYSDK_OFFSET(0xDACD6D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SETEQUIPPEDUNIQUEID_OFFSET UNITYSDK_OFFSET(0xDACC9D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_ADDITIONALPROPERTIES_OFFSET UNITYSDK_OFFSET(0xDADEE80)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_EQUIPITEMCONFIG_OFFSET UNITYSDK_OFFSET(0xDADF6B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_EQUIPPEDUNIQUEID_OFFSET UNITYSDK_OFFSET(0xDADF250)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_EXTRADESCPROVIDER_OFFSET UNITYSDK_OFFSET(0xDADF6D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_FRAMEINFOPROVIDER_OFFSET UNITYSDK_OFFSET(0xDADF880)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_HACKEFFECT_OFFSET UNITYSDK_OFFSET(0xDAE0F10)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_ISDRESSED_OFFSET UNITYSDK_OFFSET(0xDADF350)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_ISTEMPORARY_OFFSET UNITYSDK_OFFSET(0xDADF330)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0xDADF2F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_SELLPRICE_OFFSET UNITYSDK_OFFSET(0xDADF370)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xDADF3E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xDADF310)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xDAD9910)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA__GETDESC_OFFSET UNITYSDK_OFFSET(0xDADF4E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMDATA__SHOULDHIDECIPHERSPECIALDISPLAYPARAM_OFFSET UNITYSDK_OFFSET(0xDAE0C60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipItemData_TypeDefinitionIndex = 66560;

	class GridFightEquipItemData : public ::Sofa::Core::ObservableObject
	{
	public:
		::RPG::Client::GridFightHackEquipEffect* _HackEffect_k__BackingField; // 0x18
		::DIPDKGBFGFD* _ExtraDescProvider_k__BackingField; // 0x20
		::ALJDCNLAICE* _FrameInfoProvider_k__BackingField; // 0x28
		::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* _AdditionalProperties; // 0x30
		::HJOACINCPAG* _SpecialDisplayParamProvider; // 0x38
		::RPG::Client::GridFightEquipItemConfig* _EquipItemConfig_k__BackingField; // 0x40
		::System::UInt32 _SellPrice_k__BackingField; // 0x48
		::System::UInt32 _UniqueID_k__BackingField; // 0x4C
		::System::Boolean _IsDressed_k__BackingField; // 0x50
		::System::Boolean _IsTemporary_k__BackingField; // 0x51
		::System::Byte _padding0[0x2];
		::RPG::GameCore::GridFightAddItemSourceType _SourceType_k__BackingField; // 0x54
		::System::UInt32 _ItemID_k__BackingField; // 0x58
		::System::UInt32 _EquippedUniqueID; // 0x5C
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
