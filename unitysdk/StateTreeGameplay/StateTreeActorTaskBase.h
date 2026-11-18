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

namespace StateTreeGameplay { class VirtualProxy_StateTreeActorTaskBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x498870)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x591C00)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_CREATE_OFFSET UNITYSDK_OFFSET(0x1E1A1C00)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x8E3850)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x1E1A1870)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x1E1A18C0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x498600)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x4139C0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x498690)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x3CF140)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x498460)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x4982B0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x498220)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x4983D0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x498340)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x3D00D0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x8E3450)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x8E3870)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x4984F0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x359320)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x8E3440)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x498870)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x591C00)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_RESET_OFFSET UNITYSDK_OFFSET(0x4988B0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x8E3730)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x8E37D0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x8E3780)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x8E36E0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x8E3640)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x8E3550)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x8E3500)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x8E35F0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x8E35A0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x8E34B0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x8E3690)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x8E33F0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_STATECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1E1A1910)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_TICK_OFFSET UNITYSDK_OFFSET(0x1E1A1970)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_TRIGGERTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x1E1A19D0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_STATETREEACTORTASKBASE__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x8E38D0)
#define STATETREEGAMEPLAY_STATETREEACTORTASKBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1A1E80)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int StateTreeActorTaskBase_TypeDefinitionIndex = 68147;

	struct alignas(4) StateTreeActorTaskBase
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreeActorTaskBase_TypeDefinitionIndex)->GetStaticField(0x524F0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xD358BE06; // 0x0
		::StateTreeCore::StateTreeTaskBase Base; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE__CCTOR_OFFSET))();
		}

		/*
		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeGameplay::StateTreeActorTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::StateTreeActorTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_ENTERSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::System::Void ExitState(::StateTreeGameplay::StateTreeActorTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::StateTreeGameplay::StateTreeActorTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_EXITSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::System::Void StateCompleted(::StateTreeGameplay::StateTreeActorTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeRunStatus completionStatus, ::StateTreeCore::StateTreeActiveStates& completedActiveStates)
		{
			return ((::System::Void(*)(::StateTreeGameplay::StateTreeActorTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeRunStatus, ::StateTreeCore::StateTreeActiveStates&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_STATECOMPLETED_OFFSET))(self, context, completionStatus, completedActiveStates);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus Tick(::StateTreeGameplay::StateTreeActorTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::StateTreeActorTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_TICK_OFFSET))(self, context, deltaTime);
		}
		*/

		/*
		static ::System::Void TriggerTransitions(::StateTreeGameplay::StateTreeActorTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Void(*)(::StateTreeGameplay::StateTreeActorTaskBase&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_TRIGGERTRANSITIONS_OFFSET))(self, context);
		}
		*/

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_TYPEINFO_OFFSET))(this, value);
		}

		::StateTreeGameplay::VirtualProxy_StateTreeActorTaskBase* get_VirtualProxy()
		{
			return ((::StateTreeGameplay::VirtualProxy_StateTreeActorTaskBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_STATICSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_ShouldStateChangeOnReselect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this);
		}

		::System::Void set_ShouldStateChangeOnReselect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_SHOULDCALLTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCallTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_SHOULDCALLTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTickOnlyOnEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this);
		}

		::System::Void set_ShouldCallTickOnlyOnEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnExitState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnExitState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldAffectTransitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_SHOULDAFFECTTRANSITIONS_OFFSET))(this);
		}

		::System::Void set_ShouldAffectTransitions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_SHOULDAFFECTTRANSITIONS_OFFSET))(this, value);
		}

		::System::Boolean get_TaskEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_TASKENABLED_OFFSET))(this);
		}

		::System::Void set_TaskEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_TASKENABLED_OFFSET))(this, value);
		}

		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_NAME_OFFSET))(this, value);
		}

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}

		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}

		/*
		static ::StateTreeGameplay::StateTreeActorTaskBase Create()
		{
			return ((::StateTreeGameplay::StateTreeActorTaskBase(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_CREATE_OFFSET))();
		}
		*/

		/*
		::StateTreeGameplay::StateTreeActorTaskBase DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::StateTreeActorTaskBase(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_DEFAULTCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::StateTreeGameplay::StateTreeActorTaskBase CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::StateTreeActorTaskBase(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_COPYCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::StateTreeGameplay::StateTreeActorTaskBase MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::StateTreeActorTaskBase(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_MOVECREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::System::Void CopyAssign(::StateTreeGameplay::StateTreeActorTaskBase& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::StateTreeActorTaskBase&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_COPYASSIGN_OFFSET))(this, other);
		}
		*/

		/*
		::System::Void MoveAssign(::StateTreeGameplay::StateTreeActorTaskBase& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::StateTreeActorTaskBase&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_MOVEASSIGN_OFFSET))(this, temp);
		}
		*/

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		/*
		::System::Void UnrealTypes_IStruct_StateTreeGameplay_StateTreeActorTaskBase__CopyAssign(::StateTreeGameplay::StateTreeActorTaskBase& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::StateTreeActorTaskBase&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_STATETREEACTORTASKBASE_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_STATETREEACTORTASKBASE__COPYASSIGN_OFFSET))(this, other);
		}
		*/
	};
}
