#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x81D130)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x81D120)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1BF458A0)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x3D6F30)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x81D0C0)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x81D160)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x81D130)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x81D120)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x81D150)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x81D1C0)
#define STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF459D0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int DebugLogValueFloatTaskInstanceData_TypeDefinitionIndex = 69127;

	struct alignas(4) DebugLogValueFloatTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(DebugLogValueFloatTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x51180);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x930A3CF4; // 0x0
		::System::Boolean Enable; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single Value; // 0x14

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		/*
		static ::StateTreeGameplay::DebugLogValueFloatTaskInstanceData Create()
		{
			return ((::StateTreeGameplay::DebugLogValueFloatTaskInstanceData(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_CREATE_OFFSET))();
		}
		*/

		/*
		::StateTreeGameplay::DebugLogValueFloatTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::DebugLogValueFloatTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::StateTreeGameplay::DebugLogValueFloatTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::DebugLogValueFloatTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::StateTreeGameplay::DebugLogValueFloatTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::DebugLogValueFloatTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::System::Void CopyAssign(::StateTreeGameplay::DebugLogValueFloatTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::DebugLogValueFloatTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}
		*/

		/*
		::System::Void MoveAssign(::StateTreeGameplay::DebugLogValueFloatTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::DebugLogValueFloatTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}
		*/

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		/*
		::System::Void UnrealTypes_IStruct_StateTreeGameplay_DebugLogValueFloatTaskInstanceData__CopyAssign(::StateTreeGameplay::DebugLogValueFloatTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::DebugLogValueFloatTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_DEBUGLOGVALUEFLOATTASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
		*/
	};
}
