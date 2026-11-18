#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/BaseFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x2BEAE0)
#define NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x5C67A0)
#define NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_CREATE_OFFSET UNITYSDK_OFFSET(0xED57430)
#define NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x5C6710)
#define NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)
#define NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x5C66B0)
#define NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x5C67D0)
#define NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x2BEAE0)
#define NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x5C67A0)
#define NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_RESET_OFFSET UNITYSDK_OFFSET(0x5916C0)
#define NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x5C6830)
#define NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xED57680)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCNavmeshFragment_TypeDefinitionIndex = 48740;

	struct alignas(4) FNPCNavmeshFragment
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(FNPCNavmeshFragment_TypeDefinitionIndex)->GetStaticField(0x4EDC0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xAC37C310; // 0x0
		::StateTreeCore::BaseFragment Base; // 0x10
		::System::Boolean enable; // 0x11
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 targetPos; // 0x14
		::UnityEngine::Vector3 nextPos; // 0x20
		::UnityEngine::Vector3 forward; // 0x2C
		::UnityEngine::Vector3 extent; // 0x38
		::System::Single initDesiredSpeed; // 0x44
		::System::Single desiredSpeed; // 0x48
		::System::Single stopDistance; // 0x4C
		::System::Boolean ignoreStop; // 0x50
		::System::Byte _padding1[0x3];
		::System::Single DistanceToGoal; // 0x54
		::System::Boolean arrived; // 0x58
		::System::Boolean simpleMode; // 0x59
		::System::Byte _padding2[0x2];
		::System::Int32 minPathQueryHandler; // 0x5C
		::System::Boolean isInStair; // 0x60
		::System::Byte _padding3[0x3];
		::System::Int32 stairType; // 0x64
		::System::Single SlopeSpeedScale; // 0x68
		::System::Single StairSpeedBlendingDuration; // 0x6C
		::System::Single StairSpeedStart; // 0x70
		::System::Single StairSpeedTarget; // 0x74

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_GET_STATICSTRUCT_OFFSET))(this);
		}

		/*
		static ::NPCCrowd::Ability::FNPCNavmeshFragment Create()
		{
			return ((::NPCCrowd::Ability::FNPCNavmeshFragment(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_CREATE_OFFSET))();
		}
		*/

		/*
		::NPCCrowd::Ability::FNPCNavmeshFragment DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FNPCNavmeshFragment(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_DEFAULTCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::NPCCrowd::Ability::FNPCNavmeshFragment CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FNPCNavmeshFragment(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_COPYCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::NPCCrowd::Ability::FNPCNavmeshFragment MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FNPCNavmeshFragment(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_MOVECREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::System::Void CopyAssign(::NPCCrowd::Ability::FNPCNavmeshFragment& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCNavmeshFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_COPYASSIGN_OFFSET))(this, other);
		}
		*/

		/*
		::System::Void MoveAssign(::NPCCrowd::Ability::FNPCNavmeshFragment& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCNavmeshFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_MOVEASSIGN_OFFSET))(this, temp);
		}
		*/

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		/*
		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_FNPCNavmeshFragment__CopyAssign(::NPCCrowd::Ability::FNPCNavmeshFragment& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCNavmeshFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT__COPYASSIGN_OFFSET))(this, other);
		}
		*/
	};
}
