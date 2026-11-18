#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class FLDPBAPLICI;
class MJHDNMKGLBJ;
namespace Foundation::ViewObject { class EntityBuildContext_TempEcsComponentContainer; }
namespace Foundation::ViewObject { class ITraitEntityBuild; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0x156E1100)
#define FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_DEBUGLOGVOENTITYCREATE_OFFSET UNITYSDK_OFFSET(0x156E0AB0)
#define FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x760070)
#define FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_DUMPTOCOMPONENTLIST_OFFSET UNITYSDK_OFFSET(0x760060)
#define FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_GENERATECOMPONENTBYTRAIT_OFFSET UNITYSDK_OFFSET(0x75FFF0)
#define FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_GENERATECOMPONENTBYVIEWOBJECTCONFIG_OFFSET UNITYSDK_OFFSET(0x760000)
#define FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_GENERATEENTITYHANDLE_OFFSET UNITYSDK_OFFSET(0x75FFD0)
#define FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_GETNPCIDBYENTITY_OFFSET UNITYSDK_OFFSET(0x156E0B00)
#define FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_GET_OUTER_OFFSET UNITYSDK_OFFSET(0x75FFB0)
#define FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_SETTYPE_OFFSET UNITYSDK_OFFSET(0x760010)
#define FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_SET_OUTER_OFFSET UNITYSDK_OFFSET(0x75FFC0)
#define FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_VALIDATE_OFFSET UNITYSDK_OFFSET(0x760080)
#define FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x156E14E0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EntityBuildContext_TypeDefinitionIndex = 82252;

	struct alignas(8) EntityBuildContext
	{
		static ::System::Boolean* StaticGet_Debug_LogVoEntityCreate()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EntityBuildContext_TypeDefinitionIndex)->GetStaticField(0x14470);
		}
		::Foundation::ViewObject::EntityBuildContext_TempEcsComponentContainer* componentContainer; // 0x10
		::Nap::NapECS::ComponentMask RequireMask; // 0x18
		::Nap::NapECS::ComponentMask ExitsMask; // 0x58
		::MoleMole::Config::EntityType EntityType; // 0x98
		::System::Byte _padding0[0x4];
		::Foundation::ViewObject::ViewObjectHandle _Outer_k__BackingField; // 0xA0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT__CCTOR_OFFSET))();
		}

		::Foundation::ViewObject::ViewObjectHandle get_Outer()
		{
			return ((::Foundation::ViewObject::ViewObjectHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_GET_OUTER_OFFSET))(this);
		}

		::System::Void set_Outer(::Foundation::ViewObject::ViewObjectHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_SET_OUTER_OFFSET))(this, value);
		}

		::MoleMole::EntityHandle GenerateEntityHandle()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_GENERATEENTITYHANDLE_OFFSET))(this);
		}

		static ::System::Void DebugLogVoEntityCreate(::MoleMole::Battle::Entity* entity, ::MoleMole::Config::EntityType entityType)
		{
			return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_DEBUGLOGVOENTITYCREATE_OFFSET))(entity, entityType);
		}

		static ::System::Int32 GetNpcIDByEntity(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Int32(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_GETNPCIDBYENTITY_OFFSET))(entity);
		}

		::System::Void GenerateComponentByTrait(::Foundation::ViewObject::ITraitEntityBuild* trait)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ITraitEntityBuild*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_GENERATECOMPONENTBYTRAIT_OFFSET))(this, trait);
		}

		::System::Void GenerateComponentByViewObjectConfig(::FLDPBAPLICI* configViewObject)
		{
			return ((::System::Void(*)(::PVOID, ::FLDPBAPLICI*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_GENERATECOMPONENTBYVIEWOBJECTCONFIG_OFFSET))(this, configViewObject);
		}

		::System::Void SetType(::MoleMole::Config::EntityType entityType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_SETTYPE_OFFSET))(this, entityType);
		}

		::System::Void DumpToComponentList(::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>* componentList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_DUMPTOCOMPONENTLIST_OFFSET))(this, componentList);
		}

		/*
		static ::Foundation::ViewObject::EntityBuildContext Create(::Foundation::ViewObject::ViewObjectHandle outer)
		{
			return ((::Foundation::ViewObject::EntityBuildContext(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_CREATE_OFFSET))(outer);
		}
		*/

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Validate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_VALIDATE_OFFSET))(this);
		}
	};
}
