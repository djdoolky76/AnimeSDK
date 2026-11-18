#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTree; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x9A8410)
#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x9A83E0)
#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_CREATE_OFFSET UNITYSDK_OFFSET(0x1FDFCF80)
#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x9A8370)
#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)
#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x3B9490)
#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x9A84A0)
#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x9A8410)
#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x9A83E0)
#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_RESET_OFFSET UNITYSDK_OFFSET(0x9A8430)
#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREETRANSITIONDELAYEDSTATE__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x9A8410)
#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDFD1F0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeTransitionDelayedState_TypeDefinitionIndex = 30992;

	struct alignas(8) StateTreeTransitionDelayedState
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreeTransitionDelayedState_TypeDefinitionIndex)->GetStaticField(0x27620);
		}
		::UnrealTypes::TObjectHandle_1<::StateTreeCore::StateTree*> StateTree; // 0x10
		::System::UInt16 TransitionIndex; // 0x14
		::System::Byte _padding0[0x2];
		::System::Single TimeLeft; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_GET_STATICSTRUCT_OFFSET))(this);
		}

		/*
		static ::StateTreeCore::StateTreeTransitionDelayedState Create()
		{
			return ((::StateTreeCore::StateTreeTransitionDelayedState(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_CREATE_OFFSET))();
		}
		*/

		/*
		::StateTreeCore::StateTreeTransitionDelayedState DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeTransitionDelayedState(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_DEFAULTCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::StateTreeCore::StateTreeTransitionDelayedState CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeTransitionDelayedState(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_COPYCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::StateTreeCore::StateTreeTransitionDelayedState MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeTransitionDelayedState(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_MOVECREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::System::Void CopyAssign(::StateTreeCore::StateTreeTransitionDelayedState& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeTransitionDelayedState&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_COPYASSIGN_OFFSET))(this, other);
		}
		*/

		/*
		::System::Void MoveAssign(::StateTreeCore::StateTreeTransitionDelayedState& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeTransitionDelayedState&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_MOVEASSIGN_OFFSET))(this, temp);
		}
		*/

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		/*
		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreeTransitionDelayedState__CopyAssign(::StateTreeCore::StateTreeTransitionDelayedState& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeTransitionDelayedState&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREETRANSITIONDELAYEDSTATE__COPYASSIGN_OFFSET))(this, other);
		}
		*/
	};
}
