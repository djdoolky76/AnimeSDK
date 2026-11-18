#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeGameplay/StateTreeCommonTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/StateTreeCore/StateTreeDataHandle.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeGameplay { class VirtualProxy_UpdateValueBoolTask; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_COMPILE_OFFSET UNITYSDK_OFFSET(0x1D202530)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x6A4330)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x6A42D0)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_CREATE_OFFSET UNITYSDK_OFFSET(0x1D203210)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x8B28E0)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x1D202690)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x1D202790)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1D2025F0)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x498600)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x4139C0)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x498690)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GET_NAME_OFFSET UNITYSDK_OFFSET(0x3CF140)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x498460)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x4982B0)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x498220)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x4983D0)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x498340)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x3D00D0)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x8B22B0)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x8B2900)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x4984F0)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x359320)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x8B22A0)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x6A4330)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x6A42D0)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_RESET_OFFSET UNITYSDK_OFFSET(0x800CA0)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x8B2710)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x8B2810)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x8B2790)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_SET_NAME_OFFSET UNITYSDK_OFFSET(0x8B2690)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x8B2590)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x8B2410)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_SET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x8B2390)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x8B2510)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x8B2490)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x8B2310)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_SET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x8B2610)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x8B2220)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_TICK_OFFSET UNITYSDK_OFFSET(0x1D202860)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x8B2960)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D203710)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int UpdateValueBoolTask_TypeDefinitionIndex = 84155;

	struct alignas(4) UpdateValueBoolTask
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(UpdateValueBoolTask_TypeDefinitionIndex)->GetStaticField(0x3FDE0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xD49C1073; // 0x0
		::StateTreeGameplay::StateTreeCommonTaskBase Base; // 0x10
		::System::Boolean UpdateOnEnter; // 0x30
		::System::Boolean UpdateOnExit; // 0x31
		::System::Boolean UpdateOnTick; // 0x32

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK__CCTOR_OFFSET))();
		}

		/*
		static ::UnrealTypes::DataValidationResult Compile(::StateTreeGameplay::UpdateValueBoolTask& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::StateTreeGameplay::UpdateValueBoolTask&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_COMPILE_OFFSET))(self, instanceDataView);
		}
		*/

		/*
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::StateTreeGameplay::UpdateValueBoolTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::StateTreeGameplay::UpdateValueBoolTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeGameplay::UpdateValueBoolTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::UpdateValueBoolTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::System::Void ExitState(::StateTreeGameplay::UpdateValueBoolTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::StateTreeGameplay::UpdateValueBoolTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_EXITSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus Tick(::StateTreeGameplay::UpdateValueBoolTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::UpdateValueBoolTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_TICK_OFFSET))(self, context, deltaTime);
		}
		*/

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_SET_TYPEINFO_OFFSET))(this, value);
		}

		::StateTreeGameplay::VirtualProxy_UpdateValueBoolTask* get_VirtualProxy()
		{
			return ((::StateTreeGameplay::VirtualProxy_UpdateValueBoolTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_ShouldStateChangeOnReselect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this);
		}

		::System::Void set_ShouldStateChangeOnReselect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GET_SHOULDCALLTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCallTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_SET_SHOULDCALLTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTickOnlyOnEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this);
		}

		::System::Void set_ShouldCallTickOnlyOnEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnExitState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnExitState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldAffectTransitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET))(this);
		}

		::System::Void set_ShouldAffectTransitions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET))(this, value);
		}

		::System::Boolean get_TaskEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GET_TASKENABLED_OFFSET))(this);
		}

		::System::Void set_TaskEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_SET_TASKENABLED_OFFSET))(this, value);
		}

		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_SET_NAME_OFFSET))(this, value);
		}

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}

		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}

		/*
		static ::StateTreeGameplay::UpdateValueBoolTask Create()
		{
			return ((::StateTreeGameplay::UpdateValueBoolTask(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_CREATE_OFFSET))();
		}
		*/

		/*
		::StateTreeGameplay::UpdateValueBoolTask DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::UpdateValueBoolTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_DEFAULTCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::StateTreeGameplay::UpdateValueBoolTask CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::UpdateValueBoolTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_COPYCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::StateTreeGameplay::UpdateValueBoolTask MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::UpdateValueBoolTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_MOVECREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::System::Void CopyAssign(::StateTreeGameplay::UpdateValueBoolTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::UpdateValueBoolTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_COPYASSIGN_OFFSET))(this, other);
		}
		*/

		/*
		::System::Void MoveAssign(::StateTreeGameplay::UpdateValueBoolTask& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::UpdateValueBoolTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_MOVEASSIGN_OFFSET))(this, temp);
		}
		*/

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		/*
		::System::Void UnrealTypes_IStruct_StateTreeGameplay_UpdateValueBoolTask__CopyAssign(::StateTreeGameplay::UpdateValueBoolTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::UpdateValueBoolTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_UPDATEVALUEBOOLTASK__COPYASSIGN_OFFSET))(this, other);
		}
		*/
	};
}
