#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAIBlackboardFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMoveTargetFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAttractorControlFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCMontageDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavigationObstacleGridCellLocationFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Ability/NPCEntityNativeData.h"
#include "unitysdk/StateTreeCore/StateTreeInstanceData.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"
#include "unitysdk/UnrealTypes/FStructView.h"

namespace StateTreeCore { class StateTree; }
namespace UnrealTypes { class ScriptStruct; }

#define NPCCROWD_ABILITY_NPCSTATETREEPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x597540)
#define NPCCROWD_ABILITY_NPCSTATETREEPROCESSOR_EXECUTEJOB_GETFRAGMENTSTRUCTVIEW_OFFSET UNITYSDK_OFFSET(0x597520)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCStateTreeProcessor_ExecuteJob_TypeDefinitionIndex = 60695;

	struct alignas(8) NPCStateTreeProcessor_ExecuteJob
	{
		::System::Single DeltaTime; // 0x10
		::System::Byte _padding0[0x4];
		::Unity::Collections::NativeSlice_1<::UnrealTypes::TObjectHandle_1<::StateTreeCore::StateTree*>> StateTrees; // 0x18
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeArray_1<::StateTreeCore::StateTreeInstanceData> StateTreeInstances; // 0x28
		::System::Byte _padding2[0x8];
		::Unity::Collections::NativeArray_1<::System::Int32> StateTreeIndices; // 0x38
		::System::Byte _padding3[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCBaseDataFragment> EntityInfo; // 0x48
		::System::Byte _padding4[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> Transform; // 0x58
		::System::Byte _padding5[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> PathFollow; // 0x68
		::System::Byte _padding6[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAttractorControlFragment> AttractorControl; // 0x78
		::System::Byte _padding7[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAIBlackboardFragment> AIBlackboard; // 0x88
		::System::Byte _padding8[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshFragment> NavmeshData; // 0x98
		::System::Byte _padding9[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment> MoveTarget; // 0xA8
		::System::Byte _padding10[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCMontageDataFragment> Montage; // 0xB8
		::System::Byte _padding11[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavigationObstacleGridCellLocationFragment> ObstacleLocation; // 0xC8
		::System::Byte _padding12[0x8];
		::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> EntityMap; // 0xD8
		::System::Byte _padding13[0x18];
		::Unity::Collections::NativeArray_1<::System::UInt32> EntityIds; // 0xF8

		::UnrealTypes::FStructView GetFragmentStructView(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> fragmentStruct, ::System::Int32 index)
		{
			return ((::UnrealTypes::FStructView(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATETREEPROCESSOR_EXECUTEJOB_GETFRAGMENTSTRUCTVIEW_OFFSET))(this, fragmentStruct, index);
		}

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCSTATETREEPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET))(this, index);
		}
	};
}
