#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGridMember.h"
#include "unitysdk/RPG/Client/GridFightGridMemberType.h"
class ABOOGEJAPHO;
class GGAKNLJJNEI;
class NDPFOOJIAIJ;
namespace RPG::Client { class GridFightEquipComponent; }
namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightNPCConfig; }
namespace RPG::Client { class GridFightRoleEffect; }
namespace RPG::Client { class GridFightTraitComponent; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTNPC_ADD_ONACTIVECHANGED_OFFSET UNITYSDK_OFFSET(0xDC0C790)
#define RPG_CLIENT_GRIDFIGHTNPC_CONTAINSTRAIT_OFFSET UNITYSDK_OFFSET(0xDC0C850)
#define RPG_CLIENT_GRIDFIGHTNPC_CREATEBATTLE_OFFSET UNITYSDK_OFFSET(0xDC0C080)
#define RPG_CLIENT_GRIDFIGHTNPC_CREATE_OFFSET UNITYSDK_OFFSET(0xDC0BD10)
#define RPG_CLIENT_GRIDFIGHTNPC_CTOR_OFFSET UNITYSDK_OFFSET(0xDC0BC10)
#define RPG_CLIENT_GRIDFIGHTNPC_GET_CANACTIVETRAIT_OFFSET UNITYSDK_OFFSET(0xDC0C720)
#define RPG_CLIENT_GRIDFIGHTNPC_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xDC0C6E0)
#define RPG_CLIENT_GRIDFIGHTNPC_GET_EQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xDC0C6C0)
#define RPG_CLIENT_GRIDFIGHTNPC_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0xDC0C580)
#define RPG_CLIENT_GRIDFIGHTNPC_GET_ROLEEFFECT_OFFSET UNITYSDK_OFFSET(0xDC0C700)
#define RPG_CLIENT_GRIDFIGHTNPC_GET_TRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xDC0C6A0)
#define RPG_CLIENT_GRIDFIGHTNPC_ISNPC_OFFSET UNITYSDK_OFFSET(0xDC0C5D0)
#define RPG_CLIENT_GRIDFIGHTNPC_REMOVE_ONACTIVECHANGED_OFFSET UNITYSDK_OFFSET(0xDC0C7F0)
#define RPG_CLIENT_GRIDFIGHTNPC_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xDC0C6F0)
#define RPG_CLIENT_GRIDFIGHTNPC_SET_EQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xDC0C6D0)
#define RPG_CLIENT_GRIDFIGHTNPC_SET_ROLEEFFECT_OFFSET UNITYSDK_OFFSET(0xDC0C710)
#define RPG_CLIENT_GRIDFIGHTNPC_SET_TRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xDC0C6B0)
#define RPG_CLIENT_GRIDFIGHTNPC_UPDATE_OFFSET UNITYSDK_OFFSET(0xDC0C490)
#define RPG_CLIENT_GRIDFIGHTNPC__CONTAINSTRAIT_B__28_0_OFFSET UNITYSDK_OFFSET(0xDC0CC00)
#define RPG_CLIENT_GRIDFIGHTNPC__ONEQUIPCOMPONENTCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0xDC0CA70)
#define RPG_CLIENT_GRIDFIGHTNPC__ONEQUIPCOMPONENTPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xDC0C970)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightNPC_TypeDefinitionIndex = 66689;

	class GridFightNPC : public ::RPG::Client::GridFightGridMember
	{
	public:
		::RPG::Client::GridFightNPCConfig* _Config_k__BackingField; // 0x20
		::RPG::Client::GridFightEquipComponent* _EquipComponent_k__BackingField; // 0x28
		::RPG::Client::GridFightTraitComponent* _TraitComponent_k__BackingField; // 0x30
		::RPG::Client::GridFightRoleEffect* _RoleEffect_k__BackingField; // 0x38
		::System::Action* OnActiveChanged; // 0x40
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::GridFightNPC* Create(::GGAKNLJJNEI* a1, ::NDPFOOJIAIJ* a2)
		{
			return ((::RPG::Client::GridFightNPC*(*)(::GGAKNLJJNEI*, ::NDPFOOJIAIJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::GridFightNPC* CreateBattle(::ABOOGEJAPHO* a1, ::NDPFOOJIAIJ* a2)
		{
			return ((::RPG::Client::GridFightNPC*(*)(::ABOOGEJAPHO*, ::NDPFOOJIAIJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_CREATEBATTLE_OFFSET))(a1, a2);
		}

		::System::Void Update(::GGAKNLJJNEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGAKNLJJNEI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_UPDATE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGridMemberType get_MemberType()
		{
			return ((::RPG::Client::GridFightGridMemberType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_GET_MEMBERTYPE_OFFSET))(this);
		}

		static ::System::Boolean IsNPC(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_ISNPC_OFFSET))(a1);
		}

		::RPG::Client::GridFightTraitComponent* get_TraitComponent()
		{
			return ((::RPG::Client::GridFightTraitComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_GET_TRAITCOMPONENT_OFFSET))(this);
		}

		::System::Void set_TraitComponent(::RPG::Client::GridFightTraitComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_SET_TRAITCOMPONENT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipComponent* get_EquipComponent()
		{
			return ((::RPG::Client::GridFightEquipComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_GET_EQUIPCOMPONENT_OFFSET))(this);
		}

		::System::Void set_EquipComponent(::RPG::Client::GridFightEquipComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_SET_EQUIPCOMPONENT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightNPCConfig* get_Config()
		{
			return ((::RPG::Client::GridFightNPCConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::Client::GridFightNPCConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightNPCConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_SET_CONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRoleEffect* get_RoleEffect()
		{
			return ((::RPG::Client::GridFightRoleEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_GET_ROLEEFFECT_OFFSET))(this);
		}

		::System::Void set_RoleEffect(::RPG::Client::GridFightRoleEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRoleEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_SET_ROLEEFFECT_OFFSET))(this, a1);
		}

		::System::Boolean get_CanActiveTrait()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_GET_CANACTIVETRAIT_OFFSET))(this);
		}

		::System::Void add_OnActiveChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_ADD_ONACTIVECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnActiveChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_REMOVE_ONACTIVECHANGED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* ContainsTrait(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC_CONTAINSTRAIT_OFFSET))(this, a1);
		}

		::System::Void _OnEquipComponentPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC__ONEQUIPCOMPONENTPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _OnEquipComponentCollectionChanged(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC__ONEQUIPCOMPONENTCOLLECTIONCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Boolean _ContainsTrait_b__28_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTNPC__CONTAINSTRAIT_B__28_0_OFFSET))(this, a1);
		}

	};
}
