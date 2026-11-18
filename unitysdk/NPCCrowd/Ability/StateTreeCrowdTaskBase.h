#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/StateTreeCore/StateTreeActiveStates.h"
#include "unitysdk/StateTreeCore/StateTreeDataHandle.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace NPCCrowd::Ability { class VirtualProxy_StateTreeCrowdTaskBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x498870)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x591C00)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_CREATE_OFFSET UNITYSDK_OFFSET(0xE0C48B0)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x591BE0)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0xE0C4520)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_EXITSTATE_OFFSET UNITYSDK_OFFSET(0xE0C4570)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x498600)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x4139C0)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x498690)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x3CF140)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_GET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x498460)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x4982B0)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_GET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x498220)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x4983D0)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x498340)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_GET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x3D00D0)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x5917E0)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x591C50)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_GET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x4984F0)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x359320)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x5917D0)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x498870)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x591C00)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_RESET_OFFSET UNITYSDK_OFFSET(0x4988B0)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x591AC0)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x591B60)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x591B10)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x591A70)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_SET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x5919D0)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x5918E0)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_SET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x591890)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x591980)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x591930)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_SET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x591840)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_SET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x591A20)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x591780)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_STATECOMPLETED_OFFSET UNITYSDK_OFFSET(0xE0C45C0)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_TICK_OFFSET UNITYSDK_OFFSET(0xE0C4620)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_TRIGGERTRANSITIONS_OFFSET UNITYSDK_OFFSET(0xE0C4680)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_STATETREECROWDTASKBASE__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x591CB0)
#define NPCCROWD_ABILITY_STATETREECROWDTASKBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0xE0C4B30)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int StateTreeCrowdTaskBase_TypeDefinitionIndex = 68288;

	struct alignas(4) StateTreeCrowdTaskBase
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreeCrowdTaskBase_TypeDefinitionIndex)->GetStaticField(0x50F80);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x55875193; // 0x0
		::StateTreeCore::StateTreeTaskBase Base; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE__CCTOR_OFFSET))();
		}

		/*
		static ::StateTreeCore::StateTreeRunStatus EnterState(::NPCCrowd::Ability::StateTreeCrowdTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::StateTreeCrowdTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_ENTERSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::System::Void ExitState(::NPCCrowd::Ability::StateTreeCrowdTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::StateTreeCrowdTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_EXITSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::System::Void StateCompleted(::NPCCrowd::Ability::StateTreeCrowdTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeRunStatus completionStatus, ::StateTreeCore::StateTreeActiveStates& completedActiveStates)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::StateTreeCrowdTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeRunStatus, ::StateTreeCore::StateTreeActiveStates&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_STATECOMPLETED_OFFSET))(self, context, completionStatus, completedActiveStates);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus Tick(::NPCCrowd::Ability::StateTreeCrowdTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::StateTreeCrowdTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_TICK_OFFSET))(self, context, deltaTime);
		}
		*/

		/*
		static ::System::Void TriggerTransitions(::NPCCrowd::Ability::StateTreeCrowdTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::StateTreeCrowdTaskBase&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_TRIGGERTRANSITIONS_OFFSET))(self, context);
		}
		*/

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_SET_TYPEINFO_OFFSET))(this, value);
		}

		::NPCCrowd::Ability::VirtualProxy_StateTreeCrowdTaskBase* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::VirtualProxy_StateTreeCrowdTaskBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_GET_STATICSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_ShouldStateChangeOnReselect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_GET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this);
		}

		::System::Void set_ShouldStateChangeOnReselect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_SET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_GET_SHOULDCALLTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCallTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_SET_SHOULDCALLTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTickOnlyOnEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this);
		}

		::System::Void set_ShouldCallTickOnlyOnEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnExitState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnExitState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldAffectTransitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_GET_SHOULDAFFECTTRANSITIONS_OFFSET))(this);
		}

		::System::Void set_ShouldAffectTransitions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_SET_SHOULDAFFECTTRANSITIONS_OFFSET))(this, value);
		}

		::System::Boolean get_TaskEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_GET_TASKENABLED_OFFSET))(this);
		}

		::System::Void set_TaskEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_SET_TASKENABLED_OFFSET))(this, value);
		}

		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_SET_NAME_OFFSET))(this, value);
		}

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}

		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}

		/*
		static ::NPCCrowd::Ability::StateTreeCrowdTaskBase Create()
		{
			return ((::NPCCrowd::Ability::StateTreeCrowdTaskBase(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_CREATE_OFFSET))();
		}
		*/

		/*
		::NPCCrowd::Ability::StateTreeCrowdTaskBase DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::StateTreeCrowdTaskBase(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_DEFAULTCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::NPCCrowd::Ability::StateTreeCrowdTaskBase CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::StateTreeCrowdTaskBase(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_COPYCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::NPCCrowd::Ability::StateTreeCrowdTaskBase MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::StateTreeCrowdTaskBase(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_MOVECREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::System::Void CopyAssign(::NPCCrowd::Ability::StateTreeCrowdTaskBase& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::StateTreeCrowdTaskBase&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_COPYASSIGN_OFFSET))(this, other);
		}
		*/

		/*
		::System::Void MoveAssign(::NPCCrowd::Ability::StateTreeCrowdTaskBase& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::StateTreeCrowdTaskBase&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_MOVEASSIGN_OFFSET))(this, temp);
		}
		*/

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		/*
		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_StateTreeCrowdTaskBase__CopyAssign(::NPCCrowd::Ability::StateTreeCrowdTaskBase& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::StateTreeCrowdTaskBase&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_STATETREECROWDTASKBASE_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_STATETREECROWDTASKBASE__COPYASSIGN_OFFSET))(this, other);
		}
		*/
	};
}
