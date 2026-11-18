#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeEventQueue.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionState.h"
#include "unitysdk/StateTreeCore/StateTreeTemporaryInstanceData.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionRequest.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/FInstancedPropertyBag.h"
#include "unitysdk/UnrealTypes/FInstancedStructContainer.h"
#include "unitysdk/UnrealTypes/NativeStructList_1.h"
#include "unitysdk/StateTreeCore/StateTreeDataHandle.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionFrame.h"
#include "unitysdk/UnrealTypes/FInstancedStruct.h"
#include "unitysdk/UnrealTypes/FReadOnlyStructView.h"
#include "unitysdk/UnrealTypes/FStructView.h"
#include "unitysdk/UnrealTypes/NativeListView_1.h"
#include "unitysdk/UnrealTypes/ReadOnlyNativeListView_1.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }
namespace UnrealTypes { template <typename T> class ManagedStructList_1; }

#define STATETREECORE_STATETREEINSTANCEDATA_ADDTEMPORARYINSTANCE_OFFSET UNITYSDK_OFFSET(0x993010)
#define STATETREECORE_STATETREEINSTANCEDATA_ADDTRANSITIONREQUEST_OFFSET UNITYSDK_OFFSET(0x992E90)
#define STATETREECORE_STATETREEINSTANCEDATA_APPEND_OFFSET UNITYSDK_OFFSET(0x993240)
#define STATETREECORE_STATETREEINSTANCEDATA_AREALLINSTANCESVALID_OFFSET UNITYSDK_OFFSET(0x992F90)
#define STATETREECORE_STATETREEINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x993A30)
#define STATETREECORE_STATETREEINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x9932D0)
#define STATETREECORE_STATETREEINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1FA85340)
#define STATETREECORE_STATETREEINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x9932B0)
#define STATETREECORE_STATETREEINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x993E50)
#define STATETREECORE_STATETREEINSTANCEDATA_GETMUTABLESTRUCT_OFFSET UNITYSDK_OFFSET(0x992D40)
#define STATETREECORE_STATETREEINSTANCEDATA_GETMUTABLETEMPORARYINSTANCES_OFFSET UNITYSDK_OFFSET(0x9930B0)
#define STATETREECORE_STATETREEINSTANCEDATA_GETMUTABLETEMPORARYSTRUCT_OFFSET UNITYSDK_OFFSET(0x993070)
#define STATETREECORE_STATETREEINSTANCEDATA_GETSTRUCT_OFFSET UNITYSDK_OFFSET(0x992D80)
#define STATETREECORE_STATETREEINSTANCEDATA_GETTRANSITIONREQUESTS_OFFSET UNITYSDK_OFFSET(0x992E00)
#define STATETREECORE_STATETREEINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x993250)
#define STATETREECORE_STATETREEINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x993F10)
#define STATETREECORE_STATETREEINSTANCEDATA_INIT_OFFSET UNITYSDK_OFFSET(0x993130)
#define STATETREECORE_STATETREEINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x993C60)
#define STATETREECORE_STATETREEINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x9936A0)
#define STATETREECORE_STATETREEINSTANCEDATA_RESETTEMPORARYINSTANCES_OFFSET UNITYSDK_OFFSET(0x9930A0)
#define STATETREECORE_STATETREEINSTANCEDATA_RESETTRANSITIONREQUESTS_OFFSET UNITYSDK_OFFSET(0x992F80)
#define STATETREECORE_STATETREEINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x993D50)
#define STATETREECORE_STATETREEINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x993A30)
#define STATETREECORE_STATETREEINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA861A0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeInstanceData_TypeDefinitionIndex = 31012;

	struct alignas(8) StateTreeInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreeInstanceData_TypeDefinitionIndex)->GetStaticField(0x27FC0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xF4DB9971; // 0x0
		::System::Int32 DebugInstanceID; // 0x10
		::System::Byte _padding0[0x4];
		::StateTreeCore::StateTreeExecutionState ExecutionState; // 0x18
		::UnrealTypes::FInstancedStructContainer InstanceStructs; // 0x58
		::UnrealTypes::NativeStructList_1<::StateTreeCore::StateTreeTemporaryInstanceData> TemporaryInstances; // 0x70
		::System::Byte _padding1[0x10];
		::StateTreeCore::StateTreeEventQueue EventQueue; // 0x88
		::UnrealTypes::NativeStructList_1<::StateTreeCore::StateTreeTransitionRequest> _transitionRequests; // 0xA0
		::System::Byte _padding2[0x10];
		::UnrealTypes::FInstancedPropertyBag GlobalParameters; // 0xB8

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructView GetMutableStruct(::System::Int32 index)
		{
			return ((::UnrealTypes::FStructView(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_GETMUTABLESTRUCT_OFFSET))(this, index);
		}

		::UnrealTypes::FReadOnlyStructView GetStruct(::System::Int32 index)
		{
			return ((::UnrealTypes::FReadOnlyStructView(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_GETSTRUCT_OFFSET))(this, index);
		}

		::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreeTransitionRequest> GetTransitionRequests()
		{
			return ((::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreeTransitionRequest>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_GETTRANSITIONREQUESTS_OFFSET))(this);
		}

		::System::Void AddTransitionRequest(::StateTreeCore::StateTreeTransitionRequest& request)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeTransitionRequest&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_ADDTRANSITIONREQUEST_OFFSET))(this, request);
		}

		::System::Void ResetTransitionRequests()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_RESETTRANSITIONREQUESTS_OFFSET))(this);
		}

		::System::Boolean AreAllInstancesValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_AREALLINSTANCESVALID_OFFSET))(this);
		}

		::UnrealTypes::FStructView AddTemporaryInstance(::StateTreeCore::StateTreeExecutionFrame& frame, ::System::UInt16 ownerNodeIndex, ::StateTreeCore::StateTreeDataHandle dataHandle, ::UnrealTypes::FReadOnlyStructView newInstanceData)
		{
			return ((::UnrealTypes::FStructView(*)(::PVOID, ::StateTreeCore::StateTreeExecutionFrame&, ::System::UInt16, ::StateTreeCore::StateTreeDataHandle, ::UnrealTypes::FReadOnlyStructView))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_ADDTEMPORARYINSTANCE_OFFSET))(this, frame, ownerNodeIndex, dataHandle, newInstanceData);
		}

		::UnrealTypes::FStructView GetMutableTemporaryStruct(::StateTreeCore::StateTreeExecutionFrame& frame, ::StateTreeCore::StateTreeDataHandle dataHandle)
		{
			return ((::UnrealTypes::FStructView(*)(::PVOID, ::StateTreeCore::StateTreeExecutionFrame&, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_GETMUTABLETEMPORARYSTRUCT_OFFSET))(this, frame, dataHandle);
		}

		::System::Void ResetTemporaryInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_RESETTEMPORARYINSTANCES_OFFSET))(this);
		}

		::UnrealTypes::NativeListView_1<::StateTreeCore::StateTreeTemporaryInstanceData> GetMutableTemporaryInstances()
		{
			return ((::UnrealTypes::NativeListView_1<::StateTreeCore::StateTreeTemporaryInstanceData>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_GETMUTABLETEMPORARYINSTANCES_OFFSET))(this);
		}

		::System::Void Init(::UnrealTypes::ManagedStructList_1<::UnrealTypes::FInstancedStruct>* structs)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::ManagedStructList_1<::UnrealTypes::FInstancedStruct>*))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_INIT_OFFSET))(this, structs);
		}

		::System::Void Append(::UnrealTypes::ManagedStructList_1<::UnrealTypes::FInstancedStruct>* structs)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::ManagedStructList_1<::UnrealTypes::FInstancedStruct>*))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_APPEND_OFFSET))(this, structs);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		/*
		static ::StateTreeCore::StateTreeInstanceData Create(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeInstanceData(*)(::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_CREATE_OFFSET))(allocator);
		}
		*/

		/*
		::StateTreeCore::StateTreeInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::StateTreeCore::StateTreeInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::StateTreeCore::StateTreeInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::System::Void CopyAssign(::StateTreeCore::StateTreeInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeInstanceData&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}
		*/

		/*
		::System::Void MoveAssign(::StateTreeCore::StateTreeInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeInstanceData&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}
		*/

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		/*
		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreeInstanceData__CopyAssign(::StateTreeCore::StateTreeInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeInstanceData&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
		*/
	};
}
