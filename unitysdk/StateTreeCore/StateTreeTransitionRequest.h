#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeStateHandle.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionPriority.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTree; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREETRANSITIONREQUEST_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x9B7D50)
#define STATETREECORE_STATETREETRANSITIONREQUEST_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x9B7D10)
#define STATETREECORE_STATETREETRANSITIONREQUEST_CREATE_OFFSET UNITYSDK_OFFSET(0x20018270)
#define STATETREECORE_STATETREETRANSITIONREQUEST_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x9B7C40)
#define STATETREECORE_STATETREETRANSITIONREQUEST_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)
#define STATETREECORE_STATETREETRANSITIONREQUEST_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x3B9490)
#define STATETREECORE_STATETREETRANSITIONREQUEST_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x9B7E20)
#define STATETREECORE_STATETREETRANSITIONREQUEST_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x9B7D50)
#define STATETREECORE_STATETREETRANSITIONREQUEST_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x9B7D10)
#define STATETREECORE_STATETREETRANSITIONREQUEST_RESET_OFFSET UNITYSDK_OFFSET(0x9B7D80)
#define STATETREECORE_STATETREETRANSITIONREQUEST_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREETRANSITIONREQUEST__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x9B7D50)
#define STATETREECORE_STATETREETRANSITIONREQUEST__CCTOR_OFFSET UNITYSDK_OFFSET(0x200185A0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeTransitionRequest_TypeDefinitionIndex = 30983;

	struct alignas(8) StateTreeTransitionRequest
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreeTransitionRequest_TypeDefinitionIndex)->GetStaticField(0x27570);
		}
		::StateTreeCore::StateTreeStateHandle SourceState; // 0x10
		::System::Byte _padding0[0x2];
		::UnrealTypes::TObjectHandle_1<::StateTreeCore::StateTree*> SourceStateTree; // 0x14
		::StateTreeCore::StateTreeStateHandle SourceRootState; // 0x18
		::StateTreeCore::StateTreeStateHandle TargetState; // 0x1A
		::StateTreeCore::StateTreeTransitionPriority Priority; // 0x1C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONREQUEST__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONREQUEST_GET_STATICSTRUCT_OFFSET))(this);
		}

		/*
		static ::StateTreeCore::StateTreeTransitionRequest Create()
		{
			return ((::StateTreeCore::StateTreeTransitionRequest(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONREQUEST_CREATE_OFFSET))();
		}
		*/

		/*
		::StateTreeCore::StateTreeTransitionRequest DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeTransitionRequest(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONREQUEST_DEFAULTCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::StateTreeCore::StateTreeTransitionRequest CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeTransitionRequest(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONREQUEST_COPYCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::StateTreeCore::StateTreeTransitionRequest MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeTransitionRequest(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONREQUEST_MOVECREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::System::Void CopyAssign(::StateTreeCore::StateTreeTransitionRequest& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeTransitionRequest&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONREQUEST_COPYASSIGN_OFFSET))(this, other);
		}
		*/

		/*
		::System::Void MoveAssign(::StateTreeCore::StateTreeTransitionRequest& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeTransitionRequest&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONREQUEST_MOVEASSIGN_OFFSET))(this, temp);
		}
		*/

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONREQUEST_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONREQUEST_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONREQUEST_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		/*
		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreeTransitionRequest__CopyAssign(::StateTreeCore::StateTreeTransitionRequest& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeTransitionRequest&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONREQUEST_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREETRANSITIONREQUEST__COPYASSIGN_OFFSET))(this, other);
		}
		*/
	};
}
