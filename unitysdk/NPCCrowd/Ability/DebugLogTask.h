#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/StateTreeCrowdTaskBase.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnityEngine/LogType.h"
#include "unitysdk/StateTreeCore/StateTreeDataHandle.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace NPCCrowd::Ability { class VirtualProxy_DebugLogTask; }
namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_DEBUGLOGTASK_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x498870)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x5C5DB0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_CREATE_OFFSET UNITYSDK_OFFSET(0xED56750)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x5C5D90)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0xED55B30)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xED55A90)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x498600)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x4139C0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x498690)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_NAME_OFFSET UNITYSDK_OFFSET(0x3CF140)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x498460)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x4982B0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x498220)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x4983D0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x498340)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x3D00D0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x5C5760)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x5C5E10)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x4984F0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x359320)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x5C5750)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_LINK_OFFSET UNITYSDK_OFFSET(0xED559D0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x498870)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x5C5DB0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_RESET_OFFSET UNITYSDK_OFFSET(0x4988B0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x5C5BC0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x5C5CC0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x5C5C40)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_SET_NAME_OFFSET UNITYSDK_OFFSET(0x5C5B40)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x5C5A40)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x5C58C0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_SET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x5C5840)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x5C59C0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x5C5940)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x5C57C0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_SET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x5C5AC0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x5C56D0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_DEBUGLOGTASK__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x5C5E70)
#define NPCCROWD_ABILITY_DEBUGLOGTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0xED56C00)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int DebugLogTask_TypeDefinitionIndex = 91237;

	struct alignas(8) DebugLogTask
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(DebugLogTask_TypeDefinitionIndex)->GetStaticField(0x4ED80);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xF318278F; // 0x0
		::NPCCrowd::Ability::StateTreeCrowdTaskBase Base; // 0x10
		::UnityEngine::LogType logType; // 0x30
		::Foundation::Unreal::FName debugMessage; // 0x34
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> entityDataHandle; // 0x3C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK__CCTOR_OFFSET))();
		}

		/*
		static ::System::Boolean Link(::NPCCrowd::Ability::DebugLogTask& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::DebugLogTask&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_LINK_OFFSET))(self, linker);
		}
		*/

		/*
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::DebugLogTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::DebugLogTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus EnterState(::NPCCrowd::Ability::DebugLogTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::DebugLogTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}
		*/

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_SET_TYPEINFO_OFFSET))(this, value);
		}

		::NPCCrowd::Ability::VirtualProxy_DebugLogTask* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::VirtualProxy_DebugLogTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_ShouldStateChangeOnReselect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this);
		}

		::System::Void set_ShouldStateChangeOnReselect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_SHOULDCALLTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCallTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_SET_SHOULDCALLTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTickOnlyOnEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this);
		}

		::System::Void set_ShouldCallTickOnlyOnEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnExitState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnExitState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldAffectTransitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET))(this);
		}

		::System::Void set_ShouldAffectTransitions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET))(this, value);
		}

		::System::Boolean get_TaskEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_TASKENABLED_OFFSET))(this);
		}

		::System::Void set_TaskEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_SET_TASKENABLED_OFFSET))(this, value);
		}

		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_SET_NAME_OFFSET))(this, value);
		}

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}

		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}

		/*
		static ::NPCCrowd::Ability::DebugLogTask Create()
		{
			return ((::NPCCrowd::Ability::DebugLogTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_CREATE_OFFSET))();
		}
		*/

		/*
		::NPCCrowd::Ability::DebugLogTask DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::DebugLogTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_DEFAULTCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::NPCCrowd::Ability::DebugLogTask CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::DebugLogTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_COPYCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::NPCCrowd::Ability::DebugLogTask MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::DebugLogTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_MOVECREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::System::Void CopyAssign(::NPCCrowd::Ability::DebugLogTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::DebugLogTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_COPYASSIGN_OFFSET))(this, other);
		}
		*/

		/*
		::System::Void MoveAssign(::NPCCrowd::Ability::DebugLogTask& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::DebugLogTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_MOVEASSIGN_OFFSET))(this, temp);
		}
		*/

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		/*
		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_DebugLogTask__CopyAssign(::NPCCrowd::Ability::DebugLogTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::DebugLogTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_DEBUGLOGTASK__COPYASSIGN_OFFSET))(this, other);
		}
		*/
	};
}
