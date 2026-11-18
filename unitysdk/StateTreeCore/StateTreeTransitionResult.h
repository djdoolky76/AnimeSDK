#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionFrame.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeStateChangeType.h"
#include "unitysdk/StateTreeCore/StateTreeStateHandle.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionPriority.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/NativeStructList_1.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTree; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREETRANSITIONRESULT_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x9B63D0)
#define STATETREECORE_STATETREETRANSITIONRESULT_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x9B61C0)
#define STATETREECORE_STATETREETRANSITIONRESULT_CREATE_OFFSET UNITYSDK_OFFSET(0x1FFF7790)
#define STATETREECORE_STATETREETRANSITIONRESULT_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x9B61A0)
#define STATETREECORE_STATETREETRANSITIONRESULT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x854550)
#define STATETREECORE_STATETREETRANSITIONRESULT_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x3B9490)
#define STATETREECORE_STATETREETRANSITIONRESULT_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x9B65A0)
#define STATETREECORE_STATETREETRANSITIONRESULT_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x9B6430)
#define STATETREECORE_STATETREETRANSITIONRESULT_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x9B6350)
#define STATETREECORE_STATETREETRANSITIONRESULT_RESET_OFFSET UNITYSDK_OFFSET(0x9B64E0)
#define STATETREECORE_STATETREETRANSITIONRESULT_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREETRANSITIONRESULT__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x9B63D0)
#define STATETREECORE_STATETREETRANSITIONRESULT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFF7D80)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeTransitionResult_TypeDefinitionIndex = 30998;

	struct alignas(8) StateTreeTransitionResult
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreeTransitionResult_TypeDefinitionIndex)->GetStaticField(0x27B80);
		}
		::UnrealTypes::NativeStructList_1<::StateTreeCore::StateTreeExecutionFrame> NextActiveFrames; // 0x10
		::System::Byte _padding0[0x10];
		::StateTreeCore::StateTreeRunStatus CurrentRunStatus; // 0x28
		::StateTreeCore::StateTreeStateHandle SourceState; // 0x2A
		::StateTreeCore::StateTreeStateHandle TargetState; // 0x2C
		::StateTreeCore::StateTreeStateHandle CurrentState; // 0x2E
		::StateTreeCore::StateTreeStateChangeType ChangeType; // 0x30
		::StateTreeCore::StateTreeTransitionPriority Priority; // 0x31
		::UnrealTypes::TObjectHandle_1<::StateTreeCore::StateTree*> SourceStateTree; // 0x34
		::StateTreeCore::StateTreeStateHandle SourceRootState; // 0x38

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_GET_STATICSTRUCT_OFFSET))(this);
		}

		/*
		static ::StateTreeCore::StateTreeTransitionResult Create(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeTransitionResult(*)(::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_CREATE_OFFSET))(allocator);
		}
		*/

		/*
		::StateTreeCore::StateTreeTransitionResult DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeTransitionResult(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_DEFAULTCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::StateTreeCore::StateTreeTransitionResult CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeTransitionResult(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_COPYCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::StateTreeCore::StateTreeTransitionResult MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeTransitionResult(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_MOVECREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::System::Void CopyAssign(::StateTreeCore::StateTreeTransitionResult& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_COPYASSIGN_OFFSET))(this, other);
		}
		*/

		/*
		::System::Void MoveAssign(::StateTreeCore::StateTreeTransitionResult& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_MOVEASSIGN_OFFSET))(this, temp);
		}
		*/

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		/*
		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreeTransitionResult__CopyAssign(::StateTreeCore::StateTreeTransitionResult& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREETRANSITIONRESULT__COPYASSIGN_OFFSET))(this, other);
		}
		*/
	};
}
