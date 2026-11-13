#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightEquipCategory.h"
#include "unitysdk/RPG/GameCore/GridFightEquipDisplaySpecialParamType.h"
#include "unitysdk/RPG/GameCore/GridFightEquipDressType.h"
#include "unitysdk/RPG/GameCore/GridFightEquipFuncType.h"
#include "unitysdk/RPG/GameCore/GridFightEquipType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipCategoryInfoConfig; }
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightItemConfig; }
namespace RPG::Client { class GridFightRoleProperty; }
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class GridFightElationEquipDescConfigRow; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D167C30)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x1D15C8B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_ABILITYNAME_OFFSET UNITYSDK_OFFSET(0x1D17ED80)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_ABILITYPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1D17EDA0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_BASEITEMID_OFFSET UNITYSDK_OFFSET(0x1D17E920)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_CANBEROLL_OFFSET UNITYSDK_OFFSET(0x1D17EB20)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_CATEGORYINFOCONFIG_OFFSET UNITYSDK_OFFSET(0x1D17EA90)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_CATEGORYNAME_OFFSET UNITYSDK_OFFSET(0x1D17EE00)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1D17ECB0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_DISPLAYSPECIALPARAM_OFFSET UNITYSDK_OFFSET(0x1D17EC70)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_DRESSRULEPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1D17EBC0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_DRESSRULE_OFFSET UNITYSDK_OFFSET(0x1D17EBA0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_ELATIONDESC_OFFSET UNITYSDK_OFFSET(0x1D17EF50)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_EQUIPCATEGORY_OFFSET UNITYSDK_OFFSET(0x1D17EBE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_EQUIPDESC_OFFSET UNITYSDK_OFFSET(0x1D17EC90)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_EQUIPFUNCPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1D17ED60)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_EQUIPFUNC_OFFSET UNITYSDK_OFFSET(0x1D17EC00)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_EQUIPTYPE_OFFSET UNITYSDK_OFFSET(0x1D17EA50)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_GENERALPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0x1D17EDC0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_ISDISPLAYSPECIALPARAM_OFFSET UNITYSDK_OFFSET(0x1D17EC20)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_ISVARIANT_OFFSET UNITYSDK_OFFSET(0x1D17E850)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_ITEMCONFIG_OFFSET UNITYSDK_OFFSET(0x1D17EA70)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1D165B70)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_NEEDEQUIPSLOT_OFFSET UNITYSDK_OFFSET(0x1D17EAD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_PROPERTYLIST_OFFSET UNITYSDK_OFFSET(0x1D17EAB0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_SHOWRECOMMENDROLE_OFFSET UNITYSDK_OFFSET(0x1D17EF10)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_SKILLTAGNAMES_OFFSET UNITYSDK_OFFSET(0x1D17EDE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_STATICRECOMMENDROLEIDLIST_OFFSET UNITYSDK_OFFSET(0x1D17EF30)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_ABILITYNAME_OFFSET UNITYSDK_OFFSET(0x1D17ED90)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_ABILITYPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1D17EDB0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_CATEGORYINFOCONFIG_OFFSET UNITYSDK_OFFSET(0x1D17EAA0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_DISPLAYSPECIALPARAM_OFFSET UNITYSDK_OFFSET(0x1D17EC80)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_DRESSRULEPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1D17EBD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_DRESSRULE_OFFSET UNITYSDK_OFFSET(0x1D17EBB0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_EQUIPCATEGORY_OFFSET UNITYSDK_OFFSET(0x1D17EBF0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_EQUIPDESC_OFFSET UNITYSDK_OFFSET(0x1D17ECA0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_EQUIPFUNCPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1D17ED70)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_EQUIPFUNC_OFFSET UNITYSDK_OFFSET(0x1D17EC10)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_EQUIPTYPE_OFFSET UNITYSDK_OFFSET(0x1D17EA60)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_GENERALPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0x1D17EDD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_ITEMCONFIG_OFFSET UNITYSDK_OFFSET(0x1D17EA80)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_PROPERTYLIST_OFFSET UNITYSDK_OFFSET(0x1D17EAC0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_SHOWRECOMMENDROLE_OFFSET UNITYSDK_OFFSET(0x1D17EF20)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_SKILLTAGNAMES_OFFSET UNITYSDK_OFFSET(0x1D17EDF0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_STATICRECOMMENDROLEIDLIST_OFFSET UNITYSDK_OFFSET(0x1D17EF40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipItemConfig_TypeDefinitionIndex = 66057;

	class GridFightEquipItemConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightElationEquipDescConfigRow* _ElationDescConfigRow; // 0x10
		::Il2CppArray<::System::UInt32>* _EquipFuncParamList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>* _PropertyList_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::TextID>* _SkillTagNames_k__BackingField; // 0x28
		::RPG::Client::GridFightEquipCategoryInfoConfig* _CategoryInfoConfig_k__BackingField; // 0x30
		::Il2CppArray<::System::UInt32>* _DressRuleParamList_k__BackingField; // 0x38
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* _GeneralPropertyList_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _StaticRecommendRoleIDList_k__BackingField; // 0x48
		::Il2CppArray<::RPG::GameCore::FixPoint>* _AbilityParamList_k__BackingField; // 0x50
		::System::String* _AbilityName_k__BackingField; // 0x58
		::RPG::Client::GridFightItemConfig* _ItemConfig_k__BackingField; // 0x60
		::RPG::Client::TextID _EquipDesc_k__BackingField; // 0x68
		::System::Boolean _ShowRecommendRole_k__BackingField; // 0x78
		::System::Byte _padding0[0x3];
		::RPG::GameCore::GridFightEquipFuncType _EquipFunc_k__BackingField; // 0x7C
		::RPG::GameCore::GridFightEquipDisplaySpecialParamType _DisplaySpecialParam_k__BackingField; // 0x80
		::RPG::GameCore::GridFightEquipDressType _DressRule_k__BackingField; // 0x84
		::RPG::GameCore::GridFightEquipType _EquipType_k__BackingField; // 0x88
		::RPG::GameCore::GridFightEquipCategory _EquipCategory_k__BackingField; // 0x8C
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet_GetItemConfigImpl()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)UnitySDK::FromName("RPG.Client", "GridFightEquipItemConfig")->GetStaticField(0x70EF0);
		}

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightEquipItemConfig* GetConfig(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GETCONFIG_OFFSET))(a1);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_ITEMID_OFFSET))(this);
		}

		::System::Boolean get_IsVariant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_ISVARIANT_OFFSET))(this);
		}

		::System::UInt32 get_BaseItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_BASEITEMID_OFFSET))(this);
		}

		::RPG::GameCore::GridFightEquipType get_EquipType()
		{
			return ((::RPG::GameCore::GridFightEquipType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_EQUIPTYPE_OFFSET))(this);
		}

		::System::Void set_EquipType(::RPG::GameCore::GridFightEquipType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightEquipType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_EQUIPTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightItemConfig* get_ItemConfig()
		{
			return ((::RPG::Client::GridFightItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_ITEMCONFIG_OFFSET))(this);
		}

		::System::Void set_ItemConfig(::RPG::Client::GridFightItemConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_ITEMCONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipCategoryInfoConfig* get_CategoryInfoConfig()
		{
			return ((::RPG::Client::GridFightEquipCategoryInfoConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_CATEGORYINFOCONFIG_OFFSET))(this);
		}

		::System::Void set_CategoryInfoConfig(::RPG::Client::GridFightEquipCategoryInfoConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipCategoryInfoConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_CATEGORYINFOCONFIG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>* get_PropertyList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_PROPERTYLIST_OFFSET))(this);
		}

		::System::Void set_PropertyList(::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_PROPERTYLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedEquipSlot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_NEEDEQUIPSLOT_OFFSET))(this);
		}

		::System::Boolean get_CanBeRoll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_CANBEROLL_OFFSET))(this);
		}

		::RPG::GameCore::GridFightEquipDressType get_DressRule()
		{
			return ((::RPG::GameCore::GridFightEquipDressType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_DRESSRULE_OFFSET))(this);
		}

		::System::Void set_DressRule(::RPG::GameCore::GridFightEquipDressType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightEquipDressType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_DRESSRULE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_DressRuleParamList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_DRESSRULEPARAMLIST_OFFSET))(this);
		}

		::System::Void set_DressRuleParamList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_DRESSRULEPARAMLIST_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightEquipCategory get_EquipCategory()
		{
			return ((::RPG::GameCore::GridFightEquipCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_EQUIPCATEGORY_OFFSET))(this);
		}

		::System::Void set_EquipCategory(::RPG::GameCore::GridFightEquipCategory a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_EQUIPCATEGORY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightEquipFuncType get_EquipFunc()
		{
			return ((::RPG::GameCore::GridFightEquipFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_EQUIPFUNC_OFFSET))(this);
		}

		::System::Void set_EquipFunc(::RPG::GameCore::GridFightEquipFuncType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightEquipFuncType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_EQUIPFUNC_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDisplaySpecialParam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_ISDISPLAYSPECIALPARAM_OFFSET))(this);
		}

		::RPG::GameCore::GridFightEquipDisplaySpecialParamType get_DisplaySpecialParam()
		{
			return ((::RPG::GameCore::GridFightEquipDisplaySpecialParamType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_DISPLAYSPECIALPARAM_OFFSET))(this);
		}

		::System::Void set_DisplaySpecialParam(::RPG::GameCore::GridFightEquipDisplaySpecialParamType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightEquipDisplaySpecialParamType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_DISPLAYSPECIALPARAM_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_EquipDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_EQUIPDESC_OFFSET))(this);
		}

		::System::Void set_EquipDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_EQUIPDESC_OFFSET))(this, a1);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_EquipFuncParamList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_EQUIPFUNCPARAMLIST_OFFSET))(this);
		}

		::System::Void set_EquipFuncParamList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_EQUIPFUNCPARAMLIST_OFFSET))(this, a1);
		}

		::System::String* get_AbilityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_ABILITYNAME_OFFSET))(this);
		}

		::System::Void set_AbilityName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_ABILITYNAME_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_AbilityParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_ABILITYPARAMLIST_OFFSET))(this);
		}

		::System::Void set_AbilityParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_ABILITYPARAMLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* get_GeneralPropertyList()
		{
			return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_GENERALPROPERTYLIST_OFFSET))(this);
		}

		::System::Void set_GeneralPropertyList(::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_GENERALPROPERTYLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TextID>* get_SkillTagNames()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_SKILLTAGNAMES_OFFSET))(this);
		}

		::System::Void set_SkillTagNames(::System::Collections::Generic::List_1<::RPG::Client::TextID>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TextID>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_SKILLTAGNAMES_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_CategoryName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_CATEGORYNAME_OFFSET))(this);
		}

		::System::Boolean get_ShowRecommendRole()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_SHOWRECOMMENDROLE_OFFSET))(this);
		}

		::System::Void set_ShowRecommendRole(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_SHOWRECOMMENDROLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_StaticRecommendRoleIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_STATICRECOMMENDROLEIDLIST_OFFSET))(this);
		}

		::System::Void set_StaticRecommendRoleIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_STATICRECOMMENDROLEIDLIST_OFFSET))(this, a1);
		}

		::System::String* get_ElationDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_ELATIONDESC_OFFSET))(this);
		}

	};
}
