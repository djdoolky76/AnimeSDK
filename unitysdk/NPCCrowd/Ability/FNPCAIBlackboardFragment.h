#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/ENPCNavigateState.h"
#include "unitysdk/NPCCrowd/Ability/MinPathQueryResult.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilityPathFollowProcessor_NearestData.h"
#include "unitysdk/StateTreeCore/BaseFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x2BEAE0)
#define NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x6CA9E0)
#define NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_CREATE_OFFSET UNITYSDK_OFFSET(0x11F987F0)
#define NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x6CA960)
#define NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)
#define NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x6CA900)
#define NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x6CAA00)
#define NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x2BEAE0)
#define NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x6CA9E0)
#define NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_RESET_OFFSET UNITYSDK_OFFSET(0x5916C0)
#define NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x6CAA60)
#define NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F989E0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCAIBlackboardFragment_TypeDefinitionIndex = 46510;

	struct alignas(4) FNPCAIBlackboardFragment
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(FNPCAIBlackboardFragment_TypeDefinitionIndex)->GetStaticField(0x51A00);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xF227D30B; // 0x0
		::StateTreeCore::BaseFragment Base; // 0x10
		::System::Byte _padding0[0x3];
		::NPCCrowd::Ability::ENPCNavigateState navigateState; // 0x14
		::NPCCrowd::Ability::MinPathQueryResult minPathQueryResult; // 0x18
		::NPCCrowd::Ability::NPCAbilityPathFollowProcessor_NearestData nearestData; // 0x28
		::System::Boolean isFollowingAvatar; // 0x44
		::System::Byte _padding1[0x3];
		::System::Single followStopRadius; // 0x48
		::System::Boolean turnFlag; // 0x4C
		::System::Boolean turnRequest; // 0x4D
		::System::Byte _padding2[0x2];
		::System::Single turnAngle; // 0x50
		::System::Single attractorCDTimer; // 0x54
		::System::Int32 targetPathFollowNode; // 0x58

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_GET_STATICSTRUCT_OFFSET))(this);
		}

		/*
		static ::NPCCrowd::Ability::FNPCAIBlackboardFragment Create()
		{
			return ((::NPCCrowd::Ability::FNPCAIBlackboardFragment(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_CREATE_OFFSET))();
		}
		*/

		/*
		::NPCCrowd::Ability::FNPCAIBlackboardFragment DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FNPCAIBlackboardFragment(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_DEFAULTCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::NPCCrowd::Ability::FNPCAIBlackboardFragment CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FNPCAIBlackboardFragment(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_COPYCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::NPCCrowd::Ability::FNPCAIBlackboardFragment MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FNPCAIBlackboardFragment(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_MOVECREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::System::Void CopyAssign(::NPCCrowd::Ability::FNPCAIBlackboardFragment& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCAIBlackboardFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_COPYASSIGN_OFFSET))(this, other);
		}
		*/

		/*
		::System::Void MoveAssign(::NPCCrowd::Ability::FNPCAIBlackboardFragment& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCAIBlackboardFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_MOVEASSIGN_OFFSET))(this, temp);
		}
		*/

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		/*
		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_FNPCAIBlackboardFragment__CopyAssign(::NPCCrowd::Ability::FNPCAIBlackboardFragment& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCAIBlackboardFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT__COPYASSIGN_OFFSET))(this, other);
		}
		*/
	};
}
