#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightBattleShowDetailType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTraitEffectBase; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C73D040)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_ANCHOR_OFFSET UNITYSDK_OFFSET(0x1C73CEB0)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_CLOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x1C73CF70)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_DETAILTYPE_OFFSET UNITYSDK_OFFSET(0x1C73CE70)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_EQUIPITEMDATA_OFFSET UNITYSDK_OFFSET(0x1C73CEF0)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_HASCLOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x1C73CF90)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_ISBACKENDROLE_OFFSET UNITYSDK_OFFSET(0x1C73CF50)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_ISTORIGHT_OFFSET UNITYSDK_OFFSET(0x1C73CF30)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_ROLE_OFFSET UNITYSDK_OFFSET(0x1C73CED0)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_TRAITEFFECT_OFFSET UNITYSDK_OFFSET(0x1C73CF10)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_UINTPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1C73CE90)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_INVOKECLOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x1C73CFE0)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_ANCHOR_OFFSET UNITYSDK_OFFSET(0x1C73CEC0)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_CLOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x1C73CF80)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_DETAILTYPE_OFFSET UNITYSDK_OFFSET(0x1C73CE80)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_EQUIPITEMDATA_OFFSET UNITYSDK_OFFSET(0x1C73CF00)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_ISBACKENDROLE_OFFSET UNITYSDK_OFFSET(0x1C73CF60)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_ISTORIGHT_OFFSET UNITYSDK_OFFSET(0x1C73CF40)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_ROLE_OFFSET UNITYSDK_OFFSET(0x1C73CEE0)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_TRAITEFFECT_OFFSET UNITYSDK_OFFSET(0x1C73CF20)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_UINTPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1C73CEA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleShowDetailParam_TypeDefinitionIndex = 74343;

	class GridFightBattleShowDetailParam : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _Anchor_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _UintParamList_k__BackingField; // 0x18
		::RPG::Client::GridFightTraitEffectBase* _TraitEffect_k__BackingField; // 0x20
		::RPG::Client::GridFightEquipItemData* _EquipItemData_k__BackingField; // 0x28
		::System::Action* _CloseCallback_k__BackingField; // 0x30
		::RPG::Client::GridFightRole* _Role_k__BackingField; // 0x38
		::RPG::Client::GridFightBattleShowDetailType _DetailType_k__BackingField; // 0x40
		::System::Boolean _IsToRight_k__BackingField; // 0x44
		::System::Boolean _IsBackEndRole_k__BackingField; // 0x45
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightBattleShowDetailType get_DetailType()
		{
			return ((::RPG::Client::GridFightBattleShowDetailType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_DETAILTYPE_OFFSET))(this);
		}

		::System::Void set_DetailType(::RPG::Client::GridFightBattleShowDetailType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBattleShowDetailType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_DETAILTYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_UintParamList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_UINTPARAMLIST_OFFSET))(this);
		}

		::System::Void set_UintParamList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_UINTPARAMLIST_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Anchor()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_ANCHOR_OFFSET))(this);
		}

		::System::Void set_Anchor(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_ANCHOR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* get_Role()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_ROLE_OFFSET))(this);
		}

		::System::Void set_Role(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_ROLE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* get_EquipItemData()
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_EQUIPITEMDATA_OFFSET))(this);
		}

		::System::Void set_EquipItemData(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_EQUIPITEMDATA_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitEffectBase* get_TraitEffect()
		{
			return ((::RPG::Client::GridFightTraitEffectBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_TRAITEFFECT_OFFSET))(this);
		}

		::System::Void set_TraitEffect(::RPG::Client::GridFightTraitEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_TRAITEFFECT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsToRight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_ISTORIGHT_OFFSET))(this);
		}

		::System::Void set_IsToRight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_ISTORIGHT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBackEndRole()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_ISBACKENDROLE_OFFSET))(this);
		}

		::System::Void set_IsBackEndRole(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_ISBACKENDROLE_OFFSET))(this, a1);
		}

		::System::Action* get_CloseCallback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_CLOSECALLBACK_OFFSET))(this);
		}

		::System::Void set_CloseCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_CLOSECALLBACK_OFFSET))(this, a1);
		}

		::System::Boolean get_HasCloseCallback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_HASCLOSECALLBACK_OFFSET))(this);
		}

		::System::Void InvokeCloseCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_INVOKECLOSECALLBACK_OFFSET))(this);
		}

	};
}
