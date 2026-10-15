#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class BCGKEELAOEA;
class PMILDELPGPB;
namespace RPG::AvatarSystem { class AvatarServant; }
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyContext_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MIGHFHCPHGC_BPMJLMOFIOO_OFFSET UNITYSDK_OFFSET(0xB957820)
#define MIGHFHCPHGC_CKOPAOGKJFJ_OFFSET UNITYSDK_OFFSET(0xB957E80)
#define MIGHFHCPHGC_CTOR_OFFSET UNITYSDK_OFFSET(0xB957ED0)
#define MIGHFHCPHGC_DBHLPPFHACG_OFFSET UNITYSDK_OFFSET(0xB957A20)
#define MIGHFHCPHGC_DIMPKJEKFPI_OFFSET UNITYSDK_OFFSET(0xB9574B0)
#define MIGHFHCPHGC_ECLCCNJAOBK_OFFSET UNITYSDK_OFFSET(0xB9578B0)
#define MIGHFHCPHGC_GDBIPIGBCNM_OFFSET UNITYSDK_OFFSET(0xB957D90)
#define MIGHFHCPHGC_GET_INHERITABILITYPROPERTRIES_OFFSET UNITYSDK_OFFSET(0xB957300)
#define MIGHFHCPHGC_GET_ISWOMANHERO_OFFSET UNITYSDK_OFFSET(0xB9572C0)
#define MIGHFHCPHGC_GET_MASTERPROPERTYCALCULATOR_OFFSET UNITYSDK_OFFSET(0xB957340)
#define MIGHFHCPHGC_GET_MASTERPROPERTYCONTEXT_OFFSET UNITYSDK_OFFSET(0xB957320)
#define MIGHFHCPHGC_GET_MASTERSKILLLEVELPROVIDER_OFFSET UNITYSDK_OFFSET(0xB957360)
#define MIGHFHCPHGC_GET_SERVANTSKILLLEVELPROVIDER_OFFSET UNITYSDK_OFFSET(0xB957380)
#define MIGHFHCPHGC_GET_SERVANT_OFFSET UNITYSDK_OFFSET(0xB9572E0)
#define MIGHFHCPHGC_GINNHHPNLNO_OFFSET UNITYSDK_OFFSET(0xB957910)
#define MIGHFHCPHGC_LEGHLAIPDAK_OFFSET UNITYSDK_OFFSET(0xB957DF0)
#define MIGHFHCPHGC_MGLKJDPCLGH_OFFSET UNITYSDK_OFFSET(0xB9573A0)
#define MIGHFHCPHGC_SET_INHERITABILITYPROPERTRIES_OFFSET UNITYSDK_OFFSET(0xB957310)
#define MIGHFHCPHGC_SET_ISWOMANHERO_OFFSET UNITYSDK_OFFSET(0xB9572D0)
#define MIGHFHCPHGC_SET_MASTERPROPERTYCALCULATOR_OFFSET UNITYSDK_OFFSET(0xB957350)
#define MIGHFHCPHGC_SET_MASTERPROPERTYCONTEXT_OFFSET UNITYSDK_OFFSET(0xB957330)
#define MIGHFHCPHGC_SET_MASTERSKILLLEVELPROVIDER_OFFSET UNITYSDK_OFFSET(0xB957370)
#define MIGHFHCPHGC_SET_SERVANTSKILLLEVELPROVIDER_OFFSET UNITYSDK_OFFSET(0xB957390)
#define MIGHFHCPHGC_SET_SERVANT_OFFSET UNITYSDK_OFFSET(0xB9572F0)

	class MIGHFHCPHGC : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* _MasterPropertyContext_k__BackingField; // 0x10
		::PMILDELPGPB* _MasterPropertyCalculator_k__BackingField; // 0x18
		::RPG::AvatarSystem::AvatarServant* _Servant_k__BackingField; // 0x20
		::BCGKEELAOEA* _MasterSkillLevelProvider_k__BackingField; // 0x28
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::AbilityProperty>* _InheritAbilityPropertries_k__BackingField; // 0x30
		::BCGKEELAOEA* _ServantSkillLevelProvider_k__BackingField; // 0x38
		::System::Boolean _IsWomanHero_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGHFHCPHGC_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsWomanHero()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGHFHCPHGC_GET_ISWOMANHERO_OFFSET))(this);
		}

		::System::Void set_IsWomanHero(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIGHFHCPHGC_SET_ISWOMANHERO_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::AvatarServant* get_Servant()
		{
			return ((::RPG::AvatarSystem::AvatarServant*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGHFHCPHGC_GET_SERVANT_OFFSET))(this);
		}

		::System::Void set_Servant(::RPG::AvatarSystem::AvatarServant* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::AvatarServant*))((::PBYTE)hIl2Cpp + MIGHFHCPHGC_SET_SERVANT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::RPG::GameCore::AbilityProperty>* get_InheritAbilityPropertries()
		{
			return ((::System::Collections::Generic::HashSet_1<::RPG::GameCore::AbilityProperty>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGHFHCPHGC_GET_INHERITABILITYPROPERTRIES_OFFSET))(this);
		}

		::System::Void set_InheritAbilityPropertries(::System::Collections::Generic::HashSet_1<::RPG::GameCore::AbilityProperty>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::AbilityProperty>*))((::PBYTE)hIl2Cpp + MIGHFHCPHGC_SET_INHERITABILITYPROPERTRIES_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* get_MasterPropertyContext()
		{
			return ((::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGHFHCPHGC_GET_MASTERPROPERTYCONTEXT_OFFSET))(this);
		}

		::System::Void set_MasterPropertyContext(::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + MIGHFHCPHGC_SET_MASTERPROPERTYCONTEXT_OFFSET))(this, a1);
		}

		::PMILDELPGPB* get_MasterPropertyCalculator()
		{
			return ((::PMILDELPGPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGHFHCPHGC_GET_MASTERPROPERTYCALCULATOR_OFFSET))(this);
		}

		::System::Void set_MasterPropertyCalculator(::PMILDELPGPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMILDELPGPB*))((::PBYTE)hIl2Cpp + MIGHFHCPHGC_SET_MASTERPROPERTYCALCULATOR_OFFSET))(this, a1);
		}

		::BCGKEELAOEA* get_MasterSkillLevelProvider()
		{
			return ((::BCGKEELAOEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGHFHCPHGC_GET_MASTERSKILLLEVELPROVIDER_OFFSET))(this);
		}

		::System::Void set_MasterSkillLevelProvider(::BCGKEELAOEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCGKEELAOEA*))((::PBYTE)hIl2Cpp + MIGHFHCPHGC_SET_MASTERSKILLLEVELPROVIDER_OFFSET))(this, a1);
		}

		::BCGKEELAOEA* get_ServantSkillLevelProvider()
		{
			return ((::BCGKEELAOEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGHFHCPHGC_GET_SERVANTSKILLLEVELPROVIDER_OFFSET))(this);
		}

		::System::Void set_ServantSkillLevelProvider(::BCGKEELAOEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCGKEELAOEA*))((::PBYTE)hIl2Cpp + MIGHFHCPHGC_SET_SERVANTSKILLLEVELPROVIDER_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint MGLKJDPCLGH(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + MIGHFHCPHGC_MGLKJDPCLGH_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GINNHHPNLNO(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + MIGHFHCPHGC_GINNHHPNLNO_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint DIMPKJEKFPI(::RPG::GameCore::AvatarPropertyType a1, ::System::String* a2, ::System::String* a3, ::System::UInt32 a4)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + MIGHFHCPHGC_DIMPKJEKFPI_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::FixPoint DBHLPPFHACG(::RPG::GameCore::AvatarPropertyType a1, ::System::String* a2, ::System::String* a3, ::System::UInt32 a4)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + MIGHFHCPHGC_DBHLPPFHACG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean LEGHLAIPDAK(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIGHFHCPHGC_LEGHLAIPDAK_OFFSET))(this, a1);
		}

		::System::UInt32 CKOPAOGKJFJ(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIGHFHCPHGC_CKOPAOGKJFJ_OFFSET))(this, a1);
		}

		::System::Boolean BPMJLMOFIOO(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + MIGHFHCPHGC_BPMJLMOFIOO_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint ECLCCNJAOBK(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + MIGHFHCPHGC_ECLCCNJAOBK_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GDBIPIGBCNM(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + MIGHFHCPHGC_GDBIPIGBCNM_OFFSET))(this, a1);
		}

	};
