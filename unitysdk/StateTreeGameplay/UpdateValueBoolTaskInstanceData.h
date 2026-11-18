#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreePropertyRef_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x91FDA0)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x91FD90)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1EBC5E90)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x91FD30)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x91FCD0)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x91FDC0)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x91FDA0)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x91FD90)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x91FDB0)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_UPDATEVALUEBOOLTASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x91FE20)
#define STATETREEGAMEPLAY_UPDATEVALUEBOOLTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBC6010)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int UpdateValueBoolTaskInstanceData_TypeDefinitionIndex = 92876;

	struct alignas(8) UpdateValueBoolTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(UpdateValueBoolTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x47A60);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xA26E9258; // 0x0
		::StateTreeCore::StateTreePropertyRef_1<::System::Boolean> BoolRef; // 0x10
		::System::Boolean Value; // 0x12

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		/*
		static ::StateTreeGameplay::UpdateValueBoolTaskInstanceData Create()
		{
			return ((::StateTreeGameplay::UpdateValueBoolTaskInstanceData(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASKINSTANCEDATA_CREATE_OFFSET))();
		}
		*/

		/*
		::StateTreeGameplay::UpdateValueBoolTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::UpdateValueBoolTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::StateTreeGameplay::UpdateValueBoolTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::UpdateValueBoolTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::StateTreeGameplay::UpdateValueBoolTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeGameplay::UpdateValueBoolTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::System::Void CopyAssign(::StateTreeGameplay::UpdateValueBoolTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::UpdateValueBoolTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}
		*/

		/*
		::System::Void MoveAssign(::StateTreeGameplay::UpdateValueBoolTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::UpdateValueBoolTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}
		*/

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		/*
		::System::Void UnrealTypes_IStruct_StateTreeGameplay_UpdateValueBoolTaskInstanceData__CopyAssign(::StateTreeGameplay::UpdateValueBoolTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeGameplay::UpdateValueBoolTaskInstanceData&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEBOOLTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_STATETREEGAMEPLAY_UPDATEVALUEBOOLTASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
		*/
	};
}
