#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsCompFilter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"

namespace Nap::NapECS { class EcsArchetype; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsSystem; }
namespace Nap::NapECS { class EcsSystemMeta; }
namespace Nap::NapECS { class EcsWorld; }
namespace Nap::NapECS { template <typename T> class EcsCallbackAction_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAP_NAPECS_ECSFILTER_ADDARCHETYPE_OFFSET UNITYSDK_OFFSET(0x1CE08970)
#define NAP_NAPECS_ECSFILTER_ADDEXCLUDETYPE_OFFSET UNITYSDK_OFFSET(0x1CE09210)
#define NAP_NAPECS_ECSFILTER_ADDINCLUDETYPE_OFFSET UNITYSDK_OFFSET(0x1CE09010)
#define NAP_NAPECS_ECSFILTER_ADDMUTESYSTEMCONFIG_OFFSET UNITYSDK_OFFSET(0x1CE09910)
#define NAP_NAPECS_ECSFILTER_ADDWAITTYPE_OFFSET UNITYSDK_OFFSET(0x1CE093C0)
#define NAP_NAPECS_ECSFILTER_BINDMUTESYSTEMCONFIG_OFFSET UNITYSDK_OFFSET(0x1CE09D60)
#define NAP_NAPECS_ECSFILTER_CHECKANDMARKASYNCCOMP_OFFSET UNITYSDK_OFFSET(0x1CE095B0)
#define NAP_NAPECS_ECSFILTER_CLEARMUTESYSTEMCONFIG_OFFSET UNITYSDK_OFFSET(0x1CE09BB0)
#define NAP_NAPECS_ECSFILTER_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1CE08E90)
#define NAP_NAPECS_ECSFILTER_DESTROY_OFFSET UNITYSDK_OFFSET(0x1CE08A00)
#define NAP_NAPECS_ECSFILTER_EXCLUDE_OFFSET UNITYSDK_OFFSET(0x1CE091B0)
#define NAP_NAPECS_ECSFILTER_GETENTITY_OFFSET UNITYSDK_OFFSET(0x1CE08F30)
#define NAP_NAPECS_ECSFILTER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CE09480)
#define NAP_NAPECS_ECSFILTER_GET_ARCHETYPELIST_OFFSET UNITYSDK_OFFSET(0x1CE08960)
#define NAP_NAPECS_ECSFILTER_GET_DEFAULTCUSTOMMUTEMASK_OFFSET UNITYSDK_OFFSET(0x1CE09EB0)
#define NAP_NAPECS_ECSFILTER_GET_ENTITYCOUNT_OFFSET UNITYSDK_OFFSET(0x1CE08310)
#define NAP_NAPECS_ECSFILTER_GET_EXCLUDETYPELIST_OFFSET UNITYSDK_OFFSET(0x1CE08910)
#define NAP_NAPECS_ECSFILTER_GET_HASSYSTEMDEPEND_OFFSET UNITYSDK_OFFSET(0x1CE08370)
#define NAP_NAPECS_ECSFILTER_GET_INCLUDECOMPMASK_OFFSET UNITYSDK_OFFSET(0x1CE08950)
#define NAP_NAPECS_ECSFILTER_GET_INCLUDETYPELIST_OFFSET UNITYSDK_OFFSET(0x1CE08900)
#define NAP_NAPECS_ECSFILTER_GET_ONADDENTITYACTION_OFFSET UNITYSDK_OFFSET(0x1CE08390)
#define NAP_NAPECS_ECSFILTER_GET_ONENTITYPAUSEACTION_OFFSET UNITYSDK_OFFSET(0x1CDFF170)
#define NAP_NAPECS_ECSFILTER_GET_ONENTITYREADYACTION_OFFSET UNITYSDK_OFFSET(0x1CDFF0B0)
#define NAP_NAPECS_ECSFILTER_GET_ONENTITYREADYPOSTACTION_OFFSET UNITYSDK_OFFSET(0x1CDFF110)
#define NAP_NAPECS_ECSFILTER_GET_ONENTITYREADYPREACTION_OFFSET UNITYSDK_OFFSET(0x1CDFF050)
#define NAP_NAPECS_ECSFILTER_GET_ONENTITYRESUMEACTION_OFFSET UNITYSDK_OFFSET(0x1CDFF1D0)
#define NAP_NAPECS_ECSFILTER_GET_ONPOSTADDENTITYACTION_OFFSET UNITYSDK_OFFSET(0x1CE08470)
#define NAP_NAPECS_ECSFILTER_GET_ONREMOVEENTITYACTION_OFFSET UNITYSDK_OFFSET(0x1CE08550)
#define NAP_NAPECS_ECSFILTER_GET_RUNNABLEENTITYCOUNT_OFFSET UNITYSDK_OFFSET(0x1CE08330)
#define NAP_NAPECS_ECSFILTER_GET_RUNNABLEINCLUDEPAUSEDENTITYCOUNT_OFFSET UNITYSDK_OFFSET(0x1CE08350)
#define NAP_NAPECS_ECSFILTER_GET_SYSTEM_OFFSET UNITYSDK_OFFSET(0x1CE082F0)
#define NAP_NAPECS_ECSFILTER_GET_WAITREADYCOMPCLASSID_OFFSET UNITYSDK_OFFSET(0x1CE08930)
#define NAP_NAPECS_ECSFILTER_GET_WAITREADYTYPELIST_OFFSET UNITYSDK_OFFSET(0x1CE08920)
#define NAP_NAPECS_ECSFILTER_HASRUNNABLEENTITY_OFFSET UNITYSDK_OFFSET(0x1CE098B0)
#define NAP_NAPECS_ECSFILTER_INCLUDE_OFFSET UNITYSDK_OFFSET(0x1CE08FB0)
#define NAP_NAPECS_ECSFILTER_ISCOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1CE08DD0)
#define NAP_NAPECS_ECSFILTER_ISENTITYMUTEDSYSTEM_OFFSET UNITYSDK_OFFSET(0x1CE09F10)
#define NAP_NAPECS_ECSFILTER_ISENTITYPAUSED_OFFSET UNITYSDK_OFFSET(0x1CE06B30)
#define NAP_NAPECS_ECSFILTER_REMOVEMUTESYSTEMCONFIG_OFFSET UNITYSDK_OFFSET(0x1CE09A60)
#define NAP_NAPECS_ECSFILTER_SET_ENTITYCOUNT_OFFSET UNITYSDK_OFFSET(0x1CE08320)
#define NAP_NAPECS_ECSFILTER_SET_HASSYSTEMDEPEND_OFFSET UNITYSDK_OFFSET(0x1CE08380)
#define NAP_NAPECS_ECSFILTER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1CE082E0)
#define NAP_NAPECS_ECSFILTER_SET_ONADDENTITYACTION_OFFSET UNITYSDK_OFFSET(0x1CE083F0)
#define NAP_NAPECS_ECSFILTER_SET_ONENTITYPAUSEACTION_OFFSET UNITYSDK_OFFSET(0x1CE087E0)
#define NAP_NAPECS_ECSFILTER_SET_ONENTITYREADYACTION_OFFSET UNITYSDK_OFFSET(0x1CE086C0)
#define NAP_NAPECS_ECSFILTER_SET_ONENTITYREADYPOSTACTION_OFFSET UNITYSDK_OFFSET(0x1CE08750)
#define NAP_NAPECS_ECSFILTER_SET_ONENTITYREADYPREACTION_OFFSET UNITYSDK_OFFSET(0x1CE08630)
#define NAP_NAPECS_ECSFILTER_SET_ONENTITYRESUMEACTION_OFFSET UNITYSDK_OFFSET(0x1CE08870)
#define NAP_NAPECS_ECSFILTER_SET_ONPOSTADDENTITYACTION_OFFSET UNITYSDK_OFFSET(0x1CE084D0)
#define NAP_NAPECS_ECSFILTER_SET_ONREMOVEENTITYACTION_OFFSET UNITYSDK_OFFSET(0x1CE085B0)
#define NAP_NAPECS_ECSFILTER_SET_RUNNABLEENTITYCOUNT_OFFSET UNITYSDK_OFFSET(0x1CE08340)
#define NAP_NAPECS_ECSFILTER_SET_RUNNABLEINCLUDEPAUSEDENTITYCOUNT_OFFSET UNITYSDK_OFFSET(0x1CE08360)
#define NAP_NAPECS_ECSFILTER_SET_SYSTEM_OFFSET UNITYSDK_OFFSET(0x1CE08300)
#define NAP_NAPECS_ECSFILTER_SET_WAITREADYCOMPCLASSID_OFFSET UNITYSDK_OFFSET(0x1CE08940)
#define NAP_NAPECS_ECSFILTER_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CE09510)
#define NAP_NAPECS_ECSFILTER_WAITREADY_OFFSET UNITYSDK_OFFSET(0x1CE09360)
#define NAP_NAPECS_ECSFILTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CE08C10)
#define NAP_NAPECS_ECSFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE08A40)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsFilter_TypeDefinitionIndex = 35996;

	class EcsFilter : public ::System::Object
	{
	public:
		::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::System::UInt32>*>* onEntityReadyPostActionItem; // 0x10
		::System::String* _Name_k__BackingField; // 0x18
		::Nap::NapECS::EcsSystem* _System_k__BackingField; // 0x20
		::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::System::UInt32>*>* onEntityReadyActionItem; // 0x28
		::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::System::UInt32>*>* onEntityResumeActionItem; // 0x30
		::Nap::NapECS::EcsWorld* worldRef; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* waitTypeList; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* excludeTypeList; // 0x48
		::System::Type* _CurWorldRefType_k__BackingField; // 0x50
		::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::Nap::NapECS::EcsEntity*>*>* onRemoveEntityActionItem; // 0x58
		::Nap::NapECS::EcsSystemMeta* _muteSystemMeta; // 0x60
		::System::Collections::Generic::List_1<::System::Int32>* includeTypeList; // 0x68
		::System::Collections::Generic::List_1<::Nap::NapECS::EcsArchetype*>* archetypeList; // 0x70
		::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::Nap::NapECS::EcsEntity*>*>* onPostAddEntityActionItem; // 0x78
		::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::System::UInt32>*>* onEntityPauseActionItem; // 0x80
		::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::System::UInt32>*>* onEntityReadyPreActionItem; // 0x88
		::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::Nap::NapECS::EcsEntity*>*>* onAddEntityActionItem; // 0x90
		::System::Int32 _EntityCount_k__BackingField; // 0x98
		::System::Int32 _RunnableIncludePausedEntityCount_k__BackingField; // 0x9C
		::System::Int32 _RunnableEntityCount_k__BackingField; // 0xA0
		::System::Boolean _HasSystemDepend_k__BackingField; // 0xA4
		::System::Byte _padding0[0x3];
		::System::Int32 filterIndex; // 0xA8
		::System::Int32 _WaitReadyCompClassId_k__BackingField; // 0xAC
		::Nap::NapECS::EcsCompFilter compFilter; // 0xB0

		::System::Void _ctor(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER__CTOR_OFFSET))(this, world);
		}

		::System::Void _ctor_1(::Nap::NapECS::EcsWorld* world, ::System::Action_1<::Nap::NapECS::EcsEntity*>* onEntityAdd, ::System::Action_1<::Nap::NapECS::EcsEntity*>* onEntityRemove)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::Action_1<::Nap::NapECS::EcsEntity*>*, ::System::Action_1<::Nap::NapECS::EcsEntity*>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER__CTOR_1_OFFSET))(this, world, onEntityAdd, onEntityRemove);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_SET_NAME_OFFSET))(this, value);
		}

		::Nap::NapECS::EcsSystem* get_System()
		{
			return ((::Nap::NapECS::EcsSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_SYSTEM_OFFSET))(this);
		}

		::System::Void set_System(::Nap::NapECS::EcsSystem* value)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsSystem*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_SET_SYSTEM_OFFSET))(this, value);
		}

		::System::Int32 get_EntityCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_ENTITYCOUNT_OFFSET))(this);
		}

		::System::Void set_EntityCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_SET_ENTITYCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_RunnableEntityCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_RUNNABLEENTITYCOUNT_OFFSET))(this);
		}

		::System::Void set_RunnableEntityCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_SET_RUNNABLEENTITYCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_RunnableIncludePausedEntityCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_RUNNABLEINCLUDEPAUSEDENTITYCOUNT_OFFSET))(this);
		}

		::System::Void set_RunnableIncludePausedEntityCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_SET_RUNNABLEINCLUDEPAUSEDENTITYCOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_HasSystemDepend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_HASSYSTEMDEPEND_OFFSET))(this);
		}

		::System::Void set_HasSystemDepend(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_SET_HASSYSTEMDEPEND_OFFSET))(this, value);
		}

		::System::Action_1<::Nap::NapECS::EcsEntity*>* get_OnAddEntityAction()
		{
			return ((::System::Action_1<::Nap::NapECS::EcsEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_ONADDENTITYACTION_OFFSET))(this);
		}

		::System::Void set_OnAddEntityAction(::System::Action_1<::Nap::NapECS::EcsEntity*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Nap::NapECS::EcsEntity*>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_SET_ONADDENTITYACTION_OFFSET))(this, value);
		}

		::System::Action_1<::Nap::NapECS::EcsEntity*>* get_OnPostAddEntityAction()
		{
			return ((::System::Action_1<::Nap::NapECS::EcsEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_ONPOSTADDENTITYACTION_OFFSET))(this);
		}

		::System::Void set_OnPostAddEntityAction(::System::Action_1<::Nap::NapECS::EcsEntity*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Nap::NapECS::EcsEntity*>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_SET_ONPOSTADDENTITYACTION_OFFSET))(this, value);
		}

		::System::Action_1<::Nap::NapECS::EcsEntity*>* get_OnRemoveEntityAction()
		{
			return ((::System::Action_1<::Nap::NapECS::EcsEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_ONREMOVEENTITYACTION_OFFSET))(this);
		}

		::System::Void set_OnRemoveEntityAction(::System::Action_1<::Nap::NapECS::EcsEntity*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Nap::NapECS::EcsEntity*>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_SET_ONREMOVEENTITYACTION_OFFSET))(this, value);
		}

		::System::Action_1<::System::UInt32>* get_OnEntityReadyPreAction()
		{
			return ((::System::Action_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_ONENTITYREADYPREACTION_OFFSET))(this);
		}

		::System::Void set_OnEntityReadyPreAction(::System::Action_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_SET_ONENTITYREADYPREACTION_OFFSET))(this, value);
		}

		::System::Action_1<::System::UInt32>* get_OnEntityReadyAction()
		{
			return ((::System::Action_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_ONENTITYREADYACTION_OFFSET))(this);
		}

		::System::Void set_OnEntityReadyAction(::System::Action_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_SET_ONENTITYREADYACTION_OFFSET))(this, value);
		}

		::System::Action_1<::System::UInt32>* get_OnEntityReadyPostAction()
		{
			return ((::System::Action_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_ONENTITYREADYPOSTACTION_OFFSET))(this);
		}

		::System::Void set_OnEntityReadyPostAction(::System::Action_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_SET_ONENTITYREADYPOSTACTION_OFFSET))(this, value);
		}

		::System::Action_1<::System::UInt32>* get_OnEntityPauseAction()
		{
			return ((::System::Action_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_ONENTITYPAUSEACTION_OFFSET))(this);
		}

		::System::Void set_OnEntityPauseAction(::System::Action_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_SET_ONENTITYPAUSEACTION_OFFSET))(this, value);
		}

		::System::Action_1<::System::UInt32>* get_OnEntityResumeAction()
		{
			return ((::System::Action_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_ONENTITYRESUMEACTION_OFFSET))(this);
		}

		::System::Void set_OnEntityResumeAction(::System::Action_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_SET_ONENTITYRESUMEACTION_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_IncludeTypeList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_INCLUDETYPELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_ExcludeTypeList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_EXCLUDETYPELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_WaitReadyTypeList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_WAITREADYTYPELIST_OFFSET))(this);
		}

		::System::Int32 get_WaitReadyCompClassId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_WAITREADYCOMPCLASSID_OFFSET))(this);
		}

		::System::Void set_WaitReadyCompClassId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_SET_WAITREADYCOMPCLASSID_OFFSET))(this, value);
		}

		::Nap::NapECS::ComponentMask& get_IncludeCompMask()
		{
			return ((::Nap::NapECS::ComponentMask&(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_INCLUDECOMPMASK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Nap::NapECS::EcsArchetype*>* get_ArchetypeList()
		{
			return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsArchetype*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_ARCHETYPELIST_OFFSET))(this);
		}

		::System::Void AddArchetype(::Nap::NapECS::EcsArchetype* archetype)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsArchetype*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_ADDARCHETYPE_OFFSET))(this, archetype);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_DESTROY_OFFSET))(this);
		}

		::System::Boolean IsCompatible(::Nap::NapECS::ComponentMask& compMask)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_ISCOMPATIBLE_OFFSET))(this, compMask);
		}

		::System::Boolean Contains(::Nap::NapECS::EcsEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_CONTAINS_OFFSET))(this, entity);
		}

		::Nap::NapECS::EcsEntity* GetEntity(::System::UInt32 entityId)
		{
			return ((::Nap::NapECS::EcsEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GETENTITY_OFFSET))(this, entityId);
		}

		::Nap::NapECS::EcsFilter* Include(::Il2CppArray<::System::Int32>* typeIds)
		{
			return ((::Nap::NapECS::EcsFilter*(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_INCLUDE_OFFSET))(this, typeIds);
		}

		::Nap::NapECS::EcsFilter* Exclude(::Il2CppArray<::System::Int32>* typeIds)
		{
			return ((::Nap::NapECS::EcsFilter*(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_EXCLUDE_OFFSET))(this, typeIds);
		}

		::Nap::NapECS::EcsFilter* WaitReady(::Il2CppArray<::System::Int32>* typeIds)
		{
			return ((::Nap::NapECS::EcsFilter*(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_WAITREADY_OFFSET))(this, typeIds);
		}

		static ::System::Boolean IsEntityPaused(::Nap::NapECS::EcsEntity* entity)
		{
			return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_ISENTITYPAUSED_OFFSET))(entity);
		}

		::System::Collections::Generic::IEnumerator_1<::Nap::NapECS::EcsEntity*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Nap::NapECS::EcsEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void AddIncludeType(::Il2CppArray<::System::Int32>* typeIds)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_ADDINCLUDETYPE_OFFSET))(this, typeIds);
		}

		::System::Void AddExcludeType(::Il2CppArray<::System::Int32>* typeIds)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_ADDEXCLUDETYPE_OFFSET))(this, typeIds);
		}

		::System::Void AddWaitType(::Il2CppArray<::System::Int32>* typeIds)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_ADDWAITTYPE_OFFSET))(this, typeIds);
		}

		::System::Void CheckAndMarkAsyncComp(::System::Int32 classId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_CHECKANDMARKASYNCCOMP_OFFSET))(this, classId);
		}

		::System::Boolean HasRunnableEntity(::System::Boolean excludePaused)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_HASRUNNABLEENTITY_OFFSET))(this, excludePaused);
		}

		static ::System::Void AddMuteSystemConfig(::System::Type* type, ::System::Byte muteSystemConfig)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Byte))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_ADDMUTESYSTEMCONFIG_OFFSET))(type, muteSystemConfig);
		}

		static ::System::Void RemoveMuteSystemConfig(::System::Type* type, ::System::Byte muteSystemConfig)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Byte))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_REMOVEMUTESYSTEMCONFIG_OFFSET))(type, muteSystemConfig);
		}

		static ::System::Void ClearMuteSystemConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_CLEARMUTESYSTEMCONFIG_OFFSET))();
		}

		::System::Void BindMuteSystemConfig(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_BINDMUTESYSTEMCONFIG_OFFSET))(this, type);
		}

		::System::Byte get_DefaultCustomMuteMask()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_GET_DEFAULTCUSTOMMUTEMASK_OFFSET))(this);
		}

		::System::Boolean IsEntityMutedSystem(::Nap::NapECS::EcsEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSFILTER_ISENTITYMUTEDSYSTEM_OFFSET))(this, entity);
		}
	};
}
