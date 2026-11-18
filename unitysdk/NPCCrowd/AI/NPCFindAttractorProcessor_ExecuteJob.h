#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/HierarchicalHashGrid2D_2.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAIBlackboardFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAttractorControlFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Ability/NPCEntityNativeData.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItem.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItemEqualsFunc.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }

#define NPCCROWD_AI_NPCFINDATTRACTORPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x5908A0)
#define NPCCROWD_AI_NPCFINDATTRACTORPROCESSOR_EXECUTEJOB__CTOR_OFFSET UNITYSDK_OFFSET(0x590890)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int NPCFindAttractorProcessor_ExecuteJob_TypeDefinitionIndex = 77274;

	struct alignas(8) NPCFindAttractorProcessor_ExecuteJob
	{
		::Unity::Collections::NativeArray_1<::System::Boolean> _isUsing; // 0x10
		::System::Byte _padding0[0x8];
		::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc> _obstacleGrid; // 0x20
		::System::Byte _padding1[0x48];
		::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> _data; // 0x70
		::System::Byte _padding2[0x18];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> _transformFragments; // 0x90
		::System::Byte _padding3[0x8];
		::Unity::Collections::NativeArray_1<::System::UInt32> _EntityIDs; // 0xA0
		::System::Byte _padding4[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAttractorControlFragment> _attractorControlFragments; // 0xB0
		::System::Byte _padding5[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshFragment> _navmeshFragments; // 0xC0
		::System::Byte _padding6[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAIBlackboardFragment> _aiBlackboardFragments; // 0xD0
		::System::Byte _padding7[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> _pathFollowFragments; // 0xE0
		::System::Byte _padding8[0x8];
		::System::Single deltaTime; // 0xF0
		::System::Single curTime; // 0xF4

		::System::Void _ctor(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Single deltaTime, ::System::Single curTime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCFINDATTRACTORPROCESSOR_EXECUTEJOB__CTOR_OFFSET))(this, runtimeData, deltaTime, curTime);
		}

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCFINDATTRACTORPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET))(this, index);
		}
	};
}
