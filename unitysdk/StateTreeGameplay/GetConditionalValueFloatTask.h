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

namespace StateTreeGameplay { class VirtualProxy_GetConditionalValueFloatTask; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_COMPILE_OFFSET UNITYSDK_OFFSET(0x194C9320)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x70B670)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x70B610)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_CREATE_OFFSET UNITYSDK_OFFSET(0x194C9DF0)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x7E15E0)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x194C9420)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x194C9380)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x498600)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x4139C0)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x498690)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GET_NAME_OFFSET UNITYSDK_OFFSET(0x3CF140)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x498460)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x4982B0)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x498220)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x4983D0)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x498340)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x3D00D0)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x7E0FB0)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x7E1680)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x4984F0)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x359320)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x7E0FA0)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x70B670)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x70B610)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_RESET_OFFSET UNITYSDK_OFFSET(0x7E1600)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x7E1410)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x7E1510)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x7E1490)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_SET_NAME_OFFSET UNITYSDK_OFFSET(0x7E1390)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x7E1290)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET UNITYSDK_OFFSET(0x7E1110)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_SET_SHOULDCALLTICK_OFFSET UNITYSDK_OFFSET(0x7E1090)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET UNITYSDK_OFFSET(0x7E1210)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET UNITYSDK_OFFSET(0x7E1190)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET UNITYSDK_OFFSET(0x7E1010)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_SET_TASKENABLED_OFFSET UNITYSDK_OFFSET(0x7E1310)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x7E0F20)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_TICK_OFFSET UNITYSDK_OFFSET(0x194C94B0)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x7E16E0)
#define STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x194CA2B0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int GetConditionalValueFloatTask_TypeDefinitionIndex = 40423;

	struct alignas(4) GetConditionalValueFloatTask
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(GetConditionalValueFloatTask_TypeDefinitionIndex)->GetStaticField(0x39F00);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xB131B80; // 0x0
		::StateTreeGameplay::StateTreeCommonTaskBase Base; // 0x10
		::System::Boolean UpdateOnTick; // 0x30

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK__CCTOR_OFFSET))();
		}

		/*
		static ::UnrealTypes::DataValidationResult Compile(::StateTreeGameplay::GetConditionalValueFloatTask& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::StateTreeGameplay::GetConditionalValueFloatTask&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_COMPILE_OFFSET))(self, instanceDataView);
		}
		*/

		/*
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::StateTreeGameplay::GetConditionalValueFloatTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::StateTreeGameplay::GetConditionalValueFloatTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeGameplay::GetConditionalValueFloatTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::GetConditionalValueFloatTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}
		*/

		/*
		static ::StateTreeCore::StateTreeRunStatus Tick(::StateTreeGameplay::GetConditionalValueFloatTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::GetConditionalValueFloatTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_TICK_OFFSET))(self, context, deltaTime);
		}
		*/

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_SET_TYPEINFO_OFFSET))(this, value);
		}

		::StateTreeGameplay::VirtualProxy_GetConditionalValueFloatTask* get_VirtualProxy()
		{
			return ((::StateTreeGameplay::VirtualProxy_GetConditionalValueFloatTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_ShouldStateChangeOnReselect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this);
		}

		::System::Void set_ShouldStateChangeOnReselect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_SET_SHOULDSTATECHANGEONRESELECT_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GET_SHOULDCALLTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCallTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_SET_SHOULDCALLTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCallTickOnlyOnEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this);
		}

		::System::Void set_ShouldCallTickOnlyOnEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_SET_SHOULDCALLTICKONLYONEVENTS_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_SET_SHOULDCOPYBOUNDPROPERTIESONTICK_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldCopyBoundPropertiesOnExitState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this);
		}

		::System::Void set_ShouldCopyBoundPropertiesOnExitState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_SET_SHOULDCOPYBOUNDPROPERTIESONEXITSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldAffectTransitions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GET_SHOULDAFFECTTRANSITIONS_OFFSET))(this);
		}

		::System::Void set_ShouldAffectTransitions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_SET_SHOULDAFFECTTRANSITIONS_OFFSET))(this, value);
		}

		::System::Boolean get_TaskEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GET_TASKENABLED_OFFSET))(this);
		}

		::System::Void set_TaskEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_SET_TASKENABLED_OFFSET))(this, value);
		}

		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_SET_NAME_OFFSET))(this, value);
		}

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}

		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}

		/*
		static ::StateTreeGameplay::GetConditionalValueFloatTask Create()
		{
			return ((::StateTreeGameplay::GetConditionalValueFloatTask(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_CREATE_OFFSET))();
		}
		*/

		/*
		::StateTreeGameplay::GetConditionalValueFloatTask DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::GetConditionalValueFloatTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_DEFAULTCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::StateTreeGameplay::GetConditionalValueFloatTask CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::GetConditionalValueFloatTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_COPYCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::StateTreeGameplay::GetConditionalValueFloatTask MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::GetConditionalValueFloatTask(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_MOVECREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::System::Void CopyAssign(::StateTreeGameplay::GetConditionalValueFloatTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::GetConditionalValueFloatTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_COPYASSIGN_OFFSET))(this, other);
		}
		*/

		/*
		::System::Void MoveAssign(::StateTreeGameplay::GetConditionalValueFloatTask& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::GetConditionalValueFloatTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_MOVEASSIGN_OFFSET))(this, temp);
		}
		*/

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		/*
		::System::Void UnrealTypes_IStruct_StateTreeGameplay_GetConditionalValueFloatTask__CopyAssign(::StateTreeGameplay::GetConditionalValueFloatTask& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::GetConditionalValueFloatTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_GETCONDITIONALVALUEFLOATTASK__COPYASSIGN_OFFSET))(this, other);
		}
		*/
	};
}
