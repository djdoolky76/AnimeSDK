#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x498D40)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x359320)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB2D06F0)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x3B9490)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x498CE0)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x498D50)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x498D40)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x359320)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x41E5D0)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x498DB0)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2D0820)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int UIBubblePerformTaskInstanceData_TypeDefinitionIndex = 77917;

	struct alignas(4) UIBubblePerformTaskInstanceData
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(UIBubblePerformTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0x4DD00);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xB6D16BA0; // 0x0
		::System::Single timer; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		/*
		static ::NPCCrowd::Ability::UIBubblePerformTaskInstanceData Create()
		{
			return ((::NPCCrowd::Ability::UIBubblePerformTaskInstanceData(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_CREATE_OFFSET))();
		}
		*/

		/*
		::NPCCrowd::Ability::UIBubblePerformTaskInstanceData DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::UIBubblePerformTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_DEFAULTCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::NPCCrowd::Ability::UIBubblePerformTaskInstanceData CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::UIBubblePerformTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_COPYCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::NPCCrowd::Ability::UIBubblePerformTaskInstanceData MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::UIBubblePerformTaskInstanceData(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_MOVECREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::System::Void CopyAssign(::NPCCrowd::Ability::UIBubblePerformTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::UIBubblePerformTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_COPYASSIGN_OFFSET))(this, other);
		}
		*/

		/*
		::System::Void MoveAssign(::NPCCrowd::Ability::UIBubblePerformTaskInstanceData& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::UIBubblePerformTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_MOVEASSIGN_OFFSET))(this, temp);
		}
		*/

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		/*
		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_UIBubblePerformTaskInstanceData__CopyAssign(::NPCCrowd::Ability::UIBubblePerformTaskInstanceData& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::UIBubblePerformTaskInstanceData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA__COPYASSIGN_OFFSET))(this, other);
		}
		*/
	};
}
