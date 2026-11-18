#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/StateTreeCore/StateTreeDataHandle.h"
#include "unitysdk/StateTreeCore/StateTreeStateHandle.h"
#include "unitysdk/StateTreeCore/StateTreeStateSelectionBehavior.h"
#include "unitysdk/StateTreeCore/StateTreeStateType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTree; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_COMPACTSTATETREESTATE_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x9AFE10)
#define STATETREECORE_COMPACTSTATETREESTATE_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x9AFDA0)
#define STATETREECORE_COMPACTSTATETREESTATE_CREATE_OFFSET UNITYSDK_OFFSET(0x1FF487E0)
#define STATETREECORE_COMPACTSTATETREESTATE_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x9AFD80)
#define STATETREECORE_COMPACTSTATETREESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)
#define STATETREECORE_COMPACTSTATETREESTATE_GET_HASCHILDREN_OFFSET UNITYSDK_OFFSET(0x9AFD10)
#define STATETREECORE_COMPACTSTATETREESTATE_GET_NEXTSIBLING_OFFSET UNITYSDK_OFFSET(0x919910)
#define STATETREECORE_COMPACTSTATETREESTATE_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x9AFD20)
#define STATETREECORE_COMPACTSTATETREESTATE_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x9AFE70)
#define STATETREECORE_COMPACTSTATETREESTATE_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x9AFE10)
#define STATETREECORE_COMPACTSTATETREESTATE_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x9AFDA0)
#define STATETREECORE_COMPACTSTATETREESTATE_RESET_OFFSET UNITYSDK_OFFSET(0x9AFE60)
#define STATETREECORE_COMPACTSTATETREESTATE_UNREALTYPES_ISTRUCT_STATETREECORE_COMPACTSTATETREESTATE__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x9AFE10)
#define STATETREECORE_COMPACTSTATETREESTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF48C80)

namespace StateTreeCore
{
	inline static constexpr unsigned int CompactStateTreeState_TypeDefinitionIndex = 31134;

	struct alignas(8) CompactStateTreeState
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x27B90);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x559FC154; // 0x0
		::Foundation::Unreal::FName Name; // 0x10
		::StateTreeCore::StateTreeStateHandle LinkedState; // 0x18
		::System::Byte _padding0[0x2];
		::UnrealTypes::TObjectHandle_1<::StateTreeCore::StateTree*> LinkedAsset; // 0x1C
		::StateTreeCore::StateTreeStateHandle Parent; // 0x20
		::System::UInt16 ChildrenBegin; // 0x22
		::System::UInt16 ChildrenEnd; // 0x24
		::System::UInt16 EnterConditionsBegin; // 0x26
		::System::UInt16 TransitionsBegin; // 0x28
		::System::UInt16 TasksBegin; // 0x2A
		::System::UInt16 ParameterTemplateIndex; // 0x2C
		::StateTreeCore::StateTreeDataHandle ParameterDataHandle; // 0x2E
		::System::UInt16 ParameterBindingsBatch; // 0x34
		::System::Byte EnterConditionsNum; // 0x36
		::System::Byte TransitionsNum; // 0x37
		::System::Byte TasksNum; // 0x38
		::System::Byte InstanceDataNum; // 0x39
		::StateTreeCore::StateTreeStateType Type; // 0x3A
		::StateTreeCore::StateTreeStateSelectionBehavior SelectionBehavior; // 0x3B
		::System::Boolean HasTransitionTasks; // 0x3C
		::System::Boolean Enabled; // 0x3D

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE__CCTOR_OFFSET))();
		}

		::System::Boolean get_HasChildren()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE_GET_HASCHILDREN_OFFSET))(this);
		}

		::System::UInt16 get_NextSibling()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE_GET_NEXTSIBLING_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE_GET_STATICSTRUCT_OFFSET))(this);
		}

		/*
		static ::StateTreeCore::CompactStateTreeState Create()
		{
			return ((::StateTreeCore::CompactStateTreeState(*)())((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE_CREATE_OFFSET))();
		}
		*/

		/*
		::StateTreeCore::CompactStateTreeState DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::CompactStateTreeState(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE_DEFAULTCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::StateTreeCore::CompactStateTreeState CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::CompactStateTreeState(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE_COPYCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::StateTreeCore::CompactStateTreeState MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::CompactStateTreeState(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE_MOVECREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::System::Void CopyAssign(::StateTreeCore::CompactStateTreeState& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::CompactStateTreeState&))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE_COPYASSIGN_OFFSET))(this, other);
		}
		*/

		/*
		::System::Void MoveAssign(::StateTreeCore::CompactStateTreeState& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::CompactStateTreeState&))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE_MOVEASSIGN_OFFSET))(this, temp);
		}
		*/

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		/*
		::System::Void UnrealTypes_IStruct_StateTreeCore_CompactStateTreeState__CopyAssign(::StateTreeCore::CompactStateTreeState& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::CompactStateTreeState&))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREESTATE_UNREALTYPES_ISTRUCT_STATETREECORE_COMPACTSTATETREESTATE__COPYASSIGN_OFFSET))(this, other);
		}
		*/
	};
}
